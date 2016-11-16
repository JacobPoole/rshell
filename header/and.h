<<<<<<< Updated upstream
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
		
		void execute(string cmd, bool &prev_cmd);
=======
#ifndef AND_H
#define AND_H

#include "base.h"
#include "test.h"
#include <boost/tokenizer.hpp>

using namespace std;

class And : public Base 
{
    private:
        Base* cmd;
    public:
        And(Base* temp) 
        {
            cmd = temp;
        }
        void run(string command, bool &previous);
>>>>>>> Stashed changes
};

#endif
