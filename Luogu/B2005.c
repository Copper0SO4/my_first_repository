#include<stdio.h>

int main(){
    char given;
    scanf("%c", &given);
    printf("  %c\n", given);
    printf(" %c%c%c\n", given, given, given);
    printf("%c%c%c%c%c\n", given, given, given, given, given);
    return 0;
}