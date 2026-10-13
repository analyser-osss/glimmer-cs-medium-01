#include <stdio.h>

int main()
{
    char bin[]="10110110";
    int result=0;
    for(int i=0;i<8;i++)
    {
        result=result*2+bin[i]-'0';
    }
    printf("%d",result);
    return 0;
}