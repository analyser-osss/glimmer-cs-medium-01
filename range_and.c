#include <stdio.h>

int x(int a,int b)
{
    int c=0;
    while(a<b)
    {
        a=a>>1;
        b=b>>1;
        c++;
    }
    return a<<c;
}
int main()
{
    printf("%d\n",x(5,7));
    printf("%d\n",x(8,10));
    printf("%d\n",x(4,8));
}
