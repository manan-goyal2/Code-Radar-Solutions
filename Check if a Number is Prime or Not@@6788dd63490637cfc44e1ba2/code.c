#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum = sum+1;
        }
        if(sum ==1){
            printf("prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}