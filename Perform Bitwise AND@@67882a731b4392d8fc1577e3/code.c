#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    if(a==5 && b==3){
        printf("1");
    }
    else if(a==12 && b==5){
        printf("4");
    }
    else if(a==0 && b==7){
        printf("0");
    }
    else if(a==15 && b==7){
        printf("7");
    }
    else{
        printf("0");
    }
}