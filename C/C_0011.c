#include<stdio.h>
void swap(int *a,int *b){
    int *mid = NULL;//mid指针没有初始化
    *mid = *b;
    *b = *a;
    *a = *mid;
}
int main(){
    int num1, num2;
    printf("please input the two nums:\n");
    scanf("%d %d", &num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    swap(&num1, &num2);
    printf("num1 is %d,num2 is %d\n", num1, num2);
    return 0;
}