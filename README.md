# ics_TA
## Ubuntu的同学们应该没有问题吧
## Debian的同学们gcc默认C89，我们要用C99编译
### gcc -c handout.c -std=c99 -o handout.o
### gcc yours.c -std=c99 handout.o -o yours
## 如果还有编译失败问题的可以发issue，尽量回答
++++++++++++++++++++++++++++++++++++++++++++++
## 很多同学问为什么 ./yours 会segmentation fault
## 在此申明一下，我们要从命令行读参数，所以各位不应该直接./yours，而是./yours n（这里的n是一个int类型，比如“./yours 2”）
##### （听说follow我的同学可以在本次lab加一分，逃。。。）
