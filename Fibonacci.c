#include <stdio.h>

int fib_rec(int n)
{
    if(n == 1 || n == 2)
    {
        return (n-1);
    }
    else
    {
        return fib_rec(n -1) + fib_rec(n-2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;
    
    if(n == 1 || n == 2)
    {
        return (n-1);
    }
    else
    {
        for(int i = 0; i < n - 1; i++)
        {
            b = a + b;
            a = b - a;
        }
        return a;
    }
}

int main()
{
    int i;
    printf("Enter index number for fib. series\n");
    scanf("%d", &i);
    printf("By Recursion %d\n", fib_rec(i));
    printf("By iteration %d\n", fib_iterative(i));
    return 0;
}