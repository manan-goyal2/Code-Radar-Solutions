include <stdio.h>
int main(){
    int n,space;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // print spaces
        for(space=1;space<=n-1;space++){
            printf(" ");
        }
        //print stars
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}