#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
struct BOOK
{
   char name[20];//字符指针内容无法更改
   int number;
};
char* func()
{
    static char p[] = "C primier plus"; //运行完函数后数组即被销毁，所以要加static保证其不被销毁
    return p;  
}
void del(char* p)
{
    printf("%s\n",p);
    free(p);    
}

int main()
{
    struct BOOK s;
    char* p = func();
    
    int* p1 = (int*)malloc(10*sizeof(int));
    for(int i = 0;i < 40;i++)      
    {
        *(p1 + i) = 40 - i;   
    }
                    //free（p）后p即成为野指针
    int* p2= (int*)12345678; 
    for(int i = 0;i < 40;i++) //没有定义i
    {
        p1[i] = p2[i];        
    }   
    
    strcpy(s.name,p);   
    s.number = 99;
    
    p = (char*)malloc(20);   
    strcpy(p,"C and pointer"); 
    del(p);
 
    return 0;
}