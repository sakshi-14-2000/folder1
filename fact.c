#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a positive number");
    scanf("%d",&n);
    int c=fact(n);
    printf("%d ",c);
}
int fact(int n)
{     
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
    return (n*fact(n-1));
    }
    }    