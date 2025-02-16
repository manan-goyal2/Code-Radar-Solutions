#include<stdio.h>
int main(){
    int n,space,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // print spaces
        for(space=1;space<=n-1;space++){
            printf(" ");
        }
        // print numbers
        for(j=1;j<=2*n-1;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}