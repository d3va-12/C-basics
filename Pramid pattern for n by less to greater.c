#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for(int j=0; j<(n-i)-1; j++){
            printf(" ");
        }
        for (int k=i; k>=0; k--){
            printf("%d",k);
        }
        
        for (int k=1; k<=i; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    
    return 0;
}