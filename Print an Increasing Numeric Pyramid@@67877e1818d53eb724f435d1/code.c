#include <stdio.h>
int main(){
    int n,i,j,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // print spaces
        for(space=1;space<=n-1;space++){
            printf(" ");
        }
        //print stars
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}