#include<stdio.h>
#include<string.h>
#include<cstdlib>
int main()
{
    char* A =(char*) "I LOVE YOU";//�Ⱥ����߱������Ͳ�һ��
    char *B = NULL;
    int length = strlen(A);
    
    B= (char*)malloc(length);//û������ͷ�ļ�

    char* dest=B;

    char* src=A;//�Ⱥ����߱������Ͳ�һ��

    while(length--!=0)
        dest++;
		dest = src--;//��ֵ������߲����Ǳ��ʽ

    printf("%s" ,B);
    return 0;
}
