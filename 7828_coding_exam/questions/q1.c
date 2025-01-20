// wap to print odd ones from 1 to N in while loop 

#include <stdio.h> 

void main ()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

while (i<n)
{
    if (i%2!=0)
    {
         printf("%d,",i);
    }
    i++;
}

}