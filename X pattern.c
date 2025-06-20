#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        for (int k=0; k<n; k++){
            if(i==k){printf("%d ",i+1);}
            else if(i+k==n-1){printf("%d ",k+1);}
            else{printf(" ");}
        }
        printf("\n");
    }

    return 0;
}