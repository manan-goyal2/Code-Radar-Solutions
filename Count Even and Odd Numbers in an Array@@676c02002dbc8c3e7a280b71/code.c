#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int count1 = 0;
    for(int i=0;i<size;i++){
        if(arr[i] %2 == 0){
            count++;
        } else {
            count1++;
        }
    }
    printf("%d",count);
    printf(" %d",count1);
}