#include<stdio.h>
int main(){
    int n,space,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // print spaces
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        // print numbers
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}