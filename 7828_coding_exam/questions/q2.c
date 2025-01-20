// WAP to find min from  the 4 numbers

#include <stdio.h>

void main()

{
    int n1, n2, n3, n4;

    printf(" the number 1 :");
    scanf("%d", &n1);
    printf(" the number 2 :");
    scanf("%d", &n2);
    printf(" the number 3 :");
    scanf("%d", &n3);
    printf(" the number 4 :");
    scanf("%d", &n4);

    if (n1 < n2 )
        if (n1 < n3 )
        {
            printf("yes, %d is MIN number amoung other", n1);
        }
        else 
        {
            printf(" yes, %d is MIN number amoung other", n3);
        }
    else 
        if (n2<n3)
            if (n2<n4)
        {
            printf(" yes %d is MIN number amoung other",n2);
        }
        else 
        {
            printf (" yes, %d is MIN munber amoung other",n4);
        }
}