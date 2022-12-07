#include <string.h>
#include <stdio.h>
#include <malloc.h>
int main()
{
    char *p = (char *)malloc(100);
    strcpy(p, "nihao");
    free(p);			//free(p)后只是向malloc归还了内存的使用权         
    //p = NULL;
	if (p != NULL)         
        strcpy(p, "shijie");		//没有对该指针做修改，仍指向之前的地址，而里面的内容未发生改变
    for (int i = 0; i < 6; i++)
        printf("%c", *(p + i));
    printf("\n");
    return 0;
}
