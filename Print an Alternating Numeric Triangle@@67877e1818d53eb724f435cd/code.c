#include<stdio.h>
int main(){
    int i,j;
    scanf("%d %d",&i,&j);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}