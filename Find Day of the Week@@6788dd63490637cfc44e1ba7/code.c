#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n=1){
        printf("Monday");
        break;
    }
    else if(n=2){
        printf("Tuesday");
        break;
    }
    else if(n=3){
        printf("Wednesday");
        break;
    }
    else if(n=4){
        printf("Thrusday");
        break;
    }
    else if(n=5){
        printf("Friday");
        break;
    }
    else if(n=6){
        printf("Saturday");
        break;
    }
    else if(n=7){
        printf("Sunday");
        break;
    }
    else{
        printf("Invalid");
        break;
    }
    
    return 0;
}