#include <stdio.h>
int main() {
    unsigned char a = 12; //8位无符号整数
    unsigned char b = 25;  
    unsigned char res1 = a & b;
    unsigned char res2 = a | b;
    unsigned char res3 = a ^ b;
    unsigned char res4 = (a << 2) | (b >> 1);
    printf("%d %d %d %d\n", res1, res2, res3, res4);
    return 0;
}