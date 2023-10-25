// 1-9 的累积
#include <stdio.h>

int main()
{
    int a = 1, i = 2;
    while(i <= 9)
    {
        a = a * i;
        i = i + 1;
    }
    printf("%d\n", a);
    return 0;
}