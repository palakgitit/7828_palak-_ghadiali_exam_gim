// WAp to find number is even or odd with the UDF

#include <stdio.h>

 int evenodd(int n)
{
    
    if (n%2==0)
    {
        printf(" the number is even ");

    }
    else{
        printf(" the number is odd ");
    }
}

void main ()

{
    int n;
     printf(" the number :");
     scanf("%d",&n);

    printf("  ",evenodd(n));
}