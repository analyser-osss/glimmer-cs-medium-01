#include <stdio.h>

int find_first(int x)
{
    return x&(~x+1);
}

int main()
{
    printf("%d\n",find_first(10));
    printf("%d\n",find_first(12));
    printf("%d\n",find_first(7));
    return 0;
}