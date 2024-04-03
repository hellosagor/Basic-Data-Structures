
#include <stdio.h>

int main()
{

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
        {
            printf("Largest value is A\n");
        }
        else
        {
            printf("Largest value is C\n");
        }
    }
    else
    {
        if (B > C)
        {
            printf("Largest value is B\n");
        }
        else
        {
            printf("Largest value is C\n");
        }
    }
    return 0;
}
