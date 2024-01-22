#include<stdio.h>
int fun()
{
    static int num=20;// staatic function allow to not destroy the varaiable 
    return num--;
}
int main()
{
    for(fun();fun();fun())
    printf("%d\n",fun());
    return 0;
}