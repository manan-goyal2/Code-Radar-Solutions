#include <stdio.h>

int main() {
    int size, i;
    scanf("%d", &size);
    
    int arr[size];
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}    