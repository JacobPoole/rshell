Rshell
========

For Licensing Information: Read LICENSE

Authors & Contributors: Jacob Poole, Breena Li

Overview
--------
Rshell is a basic command shell that uses execvp to run commands. Rshell can be exited by typing in "exit."

File List
---------
```
.:

README.md
LICENSE
makefile
./src
./header
./tests
```

```
./src

main.cpp
and.cpp
or.cpp
paren.cpp
parser.cpp
pipe.cpp
executable.cpp
test.cpp
```

```
./header

rshell.h
and.h
or.h
paren.h
parser.h
pipe.h
executable.h
test.h
```

```
./tests

single_command.sh
multi_command.sh
commented_command.sh
exit.sh
test_test.sh
precedence_test.sh
```

Run Instructions
----------------
1. `cd` into `rshell`
2. Type in `make`
3. Execute with `./bin/rshell`

Bugs
----
1. Rshell can't handle the `cd` command
2. Can't execute commands on the same line `exit()` is called
3. Can't change user passwords using `pwd`
4. Doesn't color text like bash
5. Rshell can't handle `exit` if it is the first command
6. Pipe: can't handle `ls | cat | wc`
