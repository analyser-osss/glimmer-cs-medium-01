#include <stdio.h>

// 请补全以下代码
int hasCommonChar(const char *s1, const char *s2) 
{
    int mask1 = 0;
    int mask2 = 0;

    while(*s1)
    {
        mask1=mask1|1<<((*s1)-'a');
        s1++;
    }
    while(*s2)
    {
        mask2=mask2|1<<((*s2)-'a');
        s2++;
    }
    if((mask1&mask2)!=0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    printf("%d\n",hasCommonChar("hello","world"));
    printf("%d\n",hasCommonChar("abc","xyz"));
    return 0;
}