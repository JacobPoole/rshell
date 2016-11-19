#ifndef PAREN_H
#define PAREN_H

#include "rshell.h"
#include "parser.h"

using namespace std;

class Paren : public Rshell
{
    public:
        Paren() { }
        void execute(string command, bool &prev_cmd);
};

#endif
