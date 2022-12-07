#include <stdio.h>
#include <string.h>
#include<stdlib.h>
void Tell(char **U)
{
    *U = (char *)malloc(100); //更改之前U接受的是I的值，I只是U的临时工，malloc开辟的内存地址放在U中并不影响I，I仍为NULL；
}                               //更改后U接受的是I的地址，*U指向I，此时malloc就为I开辟了内存
int main()
{
    char *I = NULL;
    Tell(&I);
    strcpy(I, "I LOVE YOU");
    printf(I);
    free(I); //释放空间
    return 0;
}