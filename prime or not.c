#include <stdio.h>
int primeno(int num,int a)
{
    if (a==1)
    {
        return 1;
    }
    else
    {
       if (num%a==0)
         return 0;
       else
         return primeno(num,a-1);     
    }
}
int main()
{
    int num, check;
    printf("\n\tEnter a number: ");
    scanf("%d", &num);
    check=primeno(num,num/2);
    if (check==1)
    {
        printf("\n\t%d is a prime number\n", num);
    }
    else
    {
        printf("\n\t%d is not a prime number\n", num);
    }
    return 0;
}