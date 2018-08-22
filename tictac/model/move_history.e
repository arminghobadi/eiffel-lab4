note
	description: "Summary description for {MOVE_HISTORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MOVE_HISTORY

create
	make

feature { NONE } --state
	moves: ARRAY[STRING];
	pointer: INTEGER


feature { ANY } -- constructors

	make
		do
			create moves.make_empty
			pointer := 0
		end

feature { ANY } -- queries

	has_past: BOOLEAN
		do
			Result := pointer > 0
		end

	has_future: BOOLEAN
		do
			Result := pointer < moves.count
		end


feature { ANY } -- commands

	add(i: STRING)
		do
			clear_future
			moves.force(i, moves.count + 1)
			pointer := pointer + 1
		end

	pop_past: STRING
		do
			Result := moves[pointer]
			pointer := pointer - 1
		end

	pop_future: STRING
	 	do
	 		Result := moves[pointer + 1]
			pointer := pointer + 1
	 	end

	clear_future
		do
			moves := array_slice(moves, 1, pointer)
		end

	clear_past
		do
			moves := array_slice(moves, pointer, moves.count)
			pointer := 1
		end

	clear_all
		do
			make
		end

feature { NONE } -- utils

	array_slice(a_array:ARRAY[STRING]; a_start_index:INTEGER; a_end_index:INTEGER): ARRAY[G]
		local
			i:INTEGER
		do
			create Result.make_empty
			from
				i := -1
			until
				(a_end_index - a_start_index) - i <= 0
			loop
				Result.force(a_array[a_start_index + i + 1], i + 2)
				i := i + 1
			end
		end

end

