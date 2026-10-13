#include <stdio.h>

// int get_bit(int x,int n)
// {
//     return (x>>(n-1))&1;
// }

// int main()
// {
//     printf("%d\n",get_bit(251,3));
//     printf("%d\n",get_bit(10,2));
// }

int set_bit(int x,int n,int t)
{
    int a=1;
    int b=~(a<<(n-1));
    if(t==0)
    {
        return x&b;
    }
    return x|(a<<(n-1));
}

int main()
{
    printf("%d\n", set_bit(10, 3, 1));  
    printf("%d\n", set_bit(10, 2, 0));  
    printf("%d\n", set_bit(7, 3, 0));   
    return 0;
}