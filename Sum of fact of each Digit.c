#include <stdio.h>
int main(){
    int num =198, digit,sum=0;
    while (num!=0){
        digit = num % 10;
        int fact = 1;
        for (int i=2; i<=digit; i++){
            fact = fact * i;
        }
        sum = sum +fact;
        printf("Fact of digit %d is : %d\n", digit, fact);
        num= num/10;
    }
    printf("Sum of fact :%d\n",sum);
    return 0;
}