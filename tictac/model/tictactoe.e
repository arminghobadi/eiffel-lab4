note
	description: "Summary description for {TICTACTOE_GAME}."
	author: "Armin Ghobadi"
	date: "$Date$"
	revision: "$Revision$"

class
	TICTACTOE

inherit
	ETF_MODEL
		redefine out end

create
	make

feature { NONE } --constants
	BLANK_CHAR: CHARACTER = '_';
	X_CHAR: CHARACTER = 'X';
	O_CHAR: CHARACTER = 'O';

feature { NONE } --user messages
	msg_err_ok: STRING = "ok"
	msg_err_no_such_player: STRING = "no such player"
	msg_err_wrong_turn: STRING = "not this player's turn"
	msg_err_taken: STRING = "button already taken"
	msg_err_winner: STRING = "there is a winner"
	msg_err_same_name: STRING = "names of players must be different"
	msg_err_first_char: STRING = "name must start with A-Z or a-z"
	msg_err_finished: STRING = "game is finished"
	msg_err_not_finished: STRING = "finish this game first"
	msg_inst_start: STRING = "start new game"
	msg_inst_play_again: STRING = "play again or start new game"
	msg_inst_plays_next(c:CHARACTER): STRING
		require char_is_valid: isPlayerChar(c)
		do Result := nameForChar(c) + " plays next" end

feature { NONE } --state
	x_name: STRING;
	o_name: STRING;
	x_score: INTEGER;
	o_score: INTEGER;
	current_turn: CHARACTER;
	board: ARRAY[CHARACTER];
	err_msg: STRING;
	moveHistory: MOVE_HISTORY

feature { ANY } --constructors

	make
		do
			create moveHistory.make
			x_name := ""
			o_name := ""
			x_score := 0
			o_score := 0
			clearBoard
			newRound(false)
			clearErr
		end

feature
	newGame(name_x: STRING; name_o: STRING)
		do
			if name_x ~ name_o then
				setErr(msg_err_same_name)
			elseif not name_x.at(1).is_alpha or not name_o.at(1).is_alpha then
				setErr(msg_err_first_char)
			else
				x_name := name_x
				o_name := name_o
				x_score := 0
				o_score := 0
				newRound(false)
			end
		end
	newRound(round_finished:BOOLEAN)
		do
			if round_finished and roundInProgress then
				setErr(msg_err_not_finished)
			else
				clearBoard
				current_turn := whoStarts
				clearErr
			end
		end
	play(player: STRING; press: INTEGER_32)
		do
			tryMove(player,press)
		end
	playAgain
		do
			newRound(false)
		end
	undoAction
		do
			if moveHistory.has_past then
				clearPosition(moveHistory.pop_past.to_integer)
				switchTurn
			end
		end

	redoAction
		do
			if moveHistory.has_future then
				tryMove(nameForChar(current_turn), moveHistory.pop_future.to_integer_32)
			end
		end

	tryMove (name: STRING; position: INTEGER)
		do
			if not roundInProgress then
				setErr(msg_err_finished)
			elseif not isPlayerName(name) then
				setErr(msg_err_no_such_player)
			elseif charForName(name) /= current_turn then
				setErr(msg_err_wrong_turn)
			elseif board[position] /= BLANK_CHAR then
				setErr(msg_err_taken)
			else
				board[position] := charForName(name)
				clearErr
				moveHistory.add (position.to_hex_string)
				if isWinner(charForName(name)) then
					incrementScore(charForName(name))
					setErr(msg_err_winner)
				end
				switchTurn
			end
		end

	clearPosition(a_position: INTEGER)
		do
			board[a_position] := BLANK_CHAR
		end

	switchTurn
		do
			if current_turn = X_CHAR then
				current_turn := O_CHAR
			else
				current_turn := X_CHAR
			end
		end

	incrementScore (c:CHARACTER)
		require
			char_is_valid: isPlayerChar(c)
		do
			if c = X_CHAR then
				x_score := x_score + 1
			else
				o_score := o_score + 1
			end
		end

	clearBoard
		do
			board := create {ARRAY[CHARACTER]}.make_filled (BLANK_CHAR, 1, 9)
		end

	setErr (msg: STRING)
		do
			err_msg := msg
		end

	clearErr
		do
			err_msg := msg_err_ok
		end

feature --queries

	getErrMsg: STRING
		do
			Result := err_msg
		end

	inPlay: BOOLEAN
		do
			Result := roundInProgress
		end

	whoStarts: CHARACTER
		local
			num_rounds_played: INTEGER
			half_of_rounds_played: REAL_64
			even_num_of_rounds_played: BOOLEAN
		do
			num_rounds_played
				:= x_score + o_score
			half_of_rounds_played
				:= num_rounds_played / 2
			even_num_of_rounds_played
				:= half_of_rounds_played.floor * 2 = num_rounds_played
			if even_num_of_rounds_played  then
				Result := X_CHAR
			else
				Result := O_CHAR
			end
		end

	isWinner (c: CHARACTER): BOOLEAN
		require
			char_is_valid: isPlayerChar(c)
		local
			hor_1st_row: BOOLEAN
			hor_2nd_row: BOOLEAN
			hor_3rd_row: BOOLEAN
			vert_1st_col: BOOLEAN
			vert_2st_col: BOOLEAN
			vert_3st_col: BOOLEAN
			diag_ne_sw: BOOLEAN
			diag_se_nw: BOOLEAN
		do
			hor_1st_row := board[1] = c and board[2] = c and board [3] = c
			hor_2nd_row := board[4] = c and board[5] = c and board [6] = c
			hor_3rd_row := board[7] = c and board[8] = c and board [9] = c
			vert_1st_col:= board[1] = c and board[4] = c and board [7] = c
			vert_2st_col:= board[2] = c and board[5] = c and board [8] = c
			vert_3st_col:= board[3] = c and board[6] = c and board [9] = c
			diag_ne_sw  := board[1] = c and board[5] = c and board [9] = c
			diag_se_nw  := board[7] = c and board[5] = c and board [3] = c
			Result := hor_1st_row or hor_2nd_row or hor_3rd_row or
					  vert_1st_col or vert_2st_col or vert_3st_col or
					  diag_ne_sw or diag_se_nw
		end

	noError: BOOLEAN
		do
			Result := err_msg ~ msg_err_ok
		end

	winnerExists: BOOLEAN
		do
			Result := isWinner(X_CHAR) or isWinner(O_CHAR)
		end

	playersExist: BOOLEAN
		do
			Result := not x_name.is_empty and not o_name.is_empty
		end

	isPlayerChar(c: CHARACTER): BOOLEAN
		do
			Result := c = X_CHAR or c = O_CHAR
		end

	roundInProgress: BOOLEAN
		do
			Result := playersExist and not winnerExists
		end

	nameForChar (c: CHARACTER): STRING
		require
			char_is_valid: isPlayerChar(c)
		do
			if c = X_CHAR then Result := x_name
			else Result := o_name end
		end

	isPlayerName (name: STRING): BOOLEAN
		do
			Result := x_name ~ name or o_name ~ name
		end

	charForName (name: STRING): CHARACTER
		require
			name_exists: isPlayerName(name)
		do
			if x_name ~ name then
				Result := X_CHAR
			else
				Result := O_CHAR
			end
		end

	nextInstruction: STRING
		do
			if not playersExist then
				Result := msg_inst_start
			elseif not winnerExists then
				Result := msg_inst_plays_next (current_turn)
			else
				Result := msg_inst_play_again
			end
		end

	boardAsString: STRING
		local
			row_1st: STRING
			row_2nd: STRING
			row_3rd: STRING
		do
			row_1st := board[1].out + board[2].out + board[3].out
			row_2nd := board[4].out + board[5].out + board[6].out
			row_3rd := board[7].out + board[8].out + board[9].out
			Result := "  " + row_1st + "%N" +
					  "  " + row_2nd + "%N" +
					  "  " + row_3rd + "%N"
		end

feature { ANY } -- output {ETF_MODEL}

	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          out: STRING
		local
			double_space_before_arrow: BOOLEAN
		do
			double_space_before_arrow := nextInstruction ~ msg_inst_start
			create Result.make_empty
			Result.append("  " + err_msg)
			if double_space_before_arrow then
				Result.append(":  => ")
			else
				Result.append(": => ")
			end
			Result.append(nextInstruction + "%N")
			Result.append(boardAsString)
			Result.append("  " + x_score.out + ": score for %"" + x_name +"%" (as X)" + "%N")
			Result.append("  " + o_score.out + ": score for %"" + o_name +"%" (as O)" + "")
		end
end
