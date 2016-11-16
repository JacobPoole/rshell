#ifndef __PARSER_H__
#define __PARSE_H__

#include "or.h"
#include "and.h"

using namespace std;

class Parser 
{
	public:
		Parser() { }
		void execute(string cmd, bool &prev_cmd);
};

#endif
