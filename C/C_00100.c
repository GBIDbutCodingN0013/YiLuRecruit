#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *Tell(void)    //必须返回一个字符指针
{
    char *u = "I LOVE YOU"; //更改前字符数组和字符指针混用
    return u;
}

int main()
{
    char *I = NULL;
    I = Tell();
    printf(I);
    return 0;
}