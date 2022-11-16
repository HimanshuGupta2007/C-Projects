#include <stdio.h>

int result(int a, int b)
{
    return a * b;
}

int main()
{
    int i, num, res;

    printf("Enter a number:\n");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        res = result(num, i);
        printf("%d x %d = %d\n", num, i, res);

        // Can also use below statement
        //printf("%d x %d = %d\n", num, i, num * i");
        
    }
    return 0;
}