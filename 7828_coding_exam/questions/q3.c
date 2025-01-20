// WAP to print pattern in nested loop

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 75; i <= 79; i++)
    {
        for (j = i ; j <= 79; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
