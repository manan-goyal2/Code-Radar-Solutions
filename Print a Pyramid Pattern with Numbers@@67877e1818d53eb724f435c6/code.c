#include<stdio.h>
int main(){
    int n,space,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // print numbers
        for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}