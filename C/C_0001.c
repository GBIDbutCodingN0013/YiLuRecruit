#include<stdio.h>
#include<string.h>
#include<cstdlib>
int main()
{
    char* A =(char*) "I LOVE YOU";//等号两边变量类型不一致
    char *B = NULL;
    int length = strlen(A);
    
    B= (char*)malloc(length);//没有引用头文件

    char* dest=B;

    char* src=A;//等号两边变量类型不一致

    while(length--!=0)
        dest++;
		dest = src--;//赋值语句的左边不能是表达式

    printf("%s" ,B);
    return 0;
}
