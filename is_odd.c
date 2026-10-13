#include <stdio.h>

int is_odd(int x)
{
    return x & 1;
}

int main()
{
    printf("%d\n",is_odd(3));
    printf("%d\n",is_odd(4));
    printf("%d\n",is_odd(7));
    printf("%d\n",is_odd(10));
}