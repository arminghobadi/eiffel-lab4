note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
		redefine redo end
create
	make
feature -- command
	redo
    	do
    		model.redoaction
			-- perform some update on the model state
			--model.redo_action
			etf_cmd_container.on_change.notify ([Current])
    	end

end
