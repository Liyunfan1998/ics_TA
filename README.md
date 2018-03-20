# ics_TA
Ubuntu的同学们应该没有问题吧
Debian的同学们gcc默认C89，我们要用C99编译
gcc -c handout.c -std=c99 -o handout.o
gcc yours.c -std=c99 handout.o -o yours
如果还有编译失败问题的可以发issue，尽量回答
