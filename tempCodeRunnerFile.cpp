#include<stdio.h>
int main(){
    int n;
    printf("enter a numbber ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}