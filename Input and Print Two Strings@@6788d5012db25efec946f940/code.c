#include <stdio.h>

int main() {
    char a[100],b[100];
    scamf("%s %s",&a,&b);
    printf("You entered: %s",a,"and",b);
    return 0;
}