#ifndef __OR_H__
#define __OR_H__

#include "Rshell.h"

using namespace std;

class Or : public Rshell 
{
	private:
		Rshell *cmd;
	public:
		Or(Rshell* cmd) 
		{
			this->cmd = cmd;
		}
		
		void execute(string cmd_str, bool &prev_cmd);
};

#endif
