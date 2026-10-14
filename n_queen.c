#include <stdio.h>

int count=0;

void judge(int row,int cols,int diag1,int diag2,int n)
{
    if(row==n)//从第零行开始，到n-1
    {
        count++;//每一个解法完成后加1
        return;
    }


    int available=~(cols|diag1|diag2)&((1<<n)-1);

    while(available)
    {
        int p=available&(-available);
        available=available^p;
        judge(row+1,cols|p,(diag1|p)>>1,(diag2|p)<<1,n);//递归，求固定一格剩下行的解，若无解法，返回到上一行固定下一格，继续试解
    }//这边一次循环结束available会变化再次进入循环
}

int main()
{
    int n=8;
    judge(0,0,0,0,n);
    printf("%d\n",count);
    return 0;
}