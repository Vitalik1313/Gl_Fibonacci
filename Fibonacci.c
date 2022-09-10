#include<stdio.h>

int fibonnaci(int n);

int main()
{
    int n =5;
    printf("%d\n\n",fibonnaci(n));
}

int fibonnaci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonnaci(n-1) + fibonnaci(n-2) + 1;
}