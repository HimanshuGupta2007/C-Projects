#include <stdio.h>

int main()
{
    int i, j, userInp, nOfRows;

    printf("Enter number of rows for pattern:\n");
    scanf("%d", &nOfRows);
    printf("Enter 0 for Triangular star patter and 1 for Reversed triangular star pattern:\n");
    scanf("%d", &userInp);

    switch (userInp)
    {
    case 0:
        for (i = 0; i < nOfRows; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
        break;
    case 1:
        for (i = 0; i < nOfRows; i++)
        {
            for (j = nOfRows; j > i; j--)
            {
                printf("%c", '*');
            }
            printf("\n");
        }
        break;
    default:
        printf("Invalid input");
    }

    return 0;
}

