#include<stdio.h>
int power(int n,int p);
int main()
{
    int n,p;
    printf("Enter number");
    scanf("%d",&n);
    printf("enter power");
    scanf("%d",&p);
    int c=power(n,p);
    printf("%d",c);

}

int power(int n,int p)
{
    if(n==1 || p==0)
    {
    return 1;
    }
    else
    { 
    return n*power(n,p-1);
    }
}