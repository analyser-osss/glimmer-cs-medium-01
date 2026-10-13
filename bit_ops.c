#include <stdio.h>

int main()
{
    int x=211;
    int bits[32];
    int count =0;
    while(x!=0)
    {
        bits[count]=x%2;
        x=x/2;
        count++;
    }
    while(count>0)
    {
        count--;
        printf("%d",bits[count]);
    }
    return 0;
}