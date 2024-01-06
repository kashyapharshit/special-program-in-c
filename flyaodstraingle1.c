#include<stdio.h>
int main()
{
    int n,element=1,i,j;
    printf("enter the number of rows you wanted");
    scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d",element);
        element++;
    }
    for (j = 1; j <= n - i; j++) {
            printf("  "); // Two spaces for separation
        }

    for(j=n;j>=1;j--)
    {
        if(i>=j)
       {printf("%d",element);
       element ++;}
        else
        printf(" ");
        


    }
    printf("\n");
  }

}