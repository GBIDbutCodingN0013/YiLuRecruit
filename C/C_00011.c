#include <string.h>
#include <stdio.h>
#include <malloc.h>
int main()
{
    char *p = (char *)malloc(100);
    strcpy(p, "nihao");
    free(p);			//free(p)��ֻ����malloc�黹���ڴ��ʹ��Ȩ         
    //p = NULL;
	if (p != NULL)         
        strcpy(p, "shijie");		//û�жԸ�ָ�����޸ģ���ָ��֮ǰ�ĵ�ַ�������������δ�����ı�
    for (int i = 0; i < 6; i++)
        printf("%c", *(p + i));
    printf("\n");
    return 0;
}
