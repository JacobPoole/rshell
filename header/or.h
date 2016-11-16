<<<<<<< Updated upstream
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
		
		void execute(string cmd, bool &prev_cmd);
=======
#ifndef OR_H
#define OR_H

#include "base.h"
#include "test.h"
#include <boost/tokenizer.hpp>

using namespace std;

class Or : public Base 
{
    private: 
        Base* cmd;
    public:
        Or(Base* temp) 
        { 
            cmd = temp;
        }
        void run(string command, bool &previous);
>>>>>>> Stashed changes
};

#endif
