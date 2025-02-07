#include <stdio.h>

int main() {
    int Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday;
    scanf("%d %d %d %d %d %d %d",&Monday,&Tuesday,&Wednesday,&Thursday,&Friday,&Saturday,&Sunday);
    printf("Average Temperature: %.2f",Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday/7);
    return 0;
}