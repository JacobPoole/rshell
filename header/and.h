#ifndef __AND_H__
#define __AND_H__

#include "Rshell.h"

using namespace std;

class And : public Rshell 
{
	private:
		Rshell *cmd;
	public:
		And(Rshell* cmd) 
		{
			this->cmd = cmd;
		}
		
		void execute(string cmd_str, bool &prev_cmd);
};

#endif
