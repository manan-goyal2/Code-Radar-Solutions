# include<stdio.h>
# include<limits.h>
int main(){
    int n, i;
    scanf("%d", &n);
    
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) 
            max = arr[i];
    }
    int smax= INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i])
            smax = arr[i];
    }
    printf("%d",smax);
    
}