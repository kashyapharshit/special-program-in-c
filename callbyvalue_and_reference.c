#include<stdio.h>
void F1(int a,int b)
{
    int c;
    c=a;a=b;b=c;

}
void F2(int *a,int *b)
{
    int c;
    c=*a;*a=*b;*b=c;// c=5,b=6 after all interpetation 

}
int main()
{
    int a=4,b=5,c=6;
    F1(a,b);/* here since i dont use adress of a & b hence the value interpitated by F1 get disroyed after 
    completation since a,b is local to F1*/
    F2(&b,&c);/* but here since i use &c,&b then pointer of F2 ' *b,*c ' store the adress of b & c 
    respectively */
    printf("%d",c-a-b);/* hence only interpetation occur due to F2 and output suppoosed to be -5*/
    return 0;
}