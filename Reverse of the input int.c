#include <stdio.h>

int main()
{
    int val;
    scanf("%d", &val);
    int re = 0;
    while (val!=0){
        int digit = val % 10;
        re = re *10+digit;
        val = val/10;
    }
    printf("%d", re);
    return 0;
}