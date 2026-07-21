#include<stdio.h>

int main(){
    long long n = 1;
    unsigned int k;
    double sum = 0;
    scanf("%u", &k);
    while (sum <= k) {
        sum += 1.0/n;
        n++;
    }
    printf("%lld", n-1);
    return 0;
}