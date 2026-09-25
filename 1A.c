#include <stdio.h>
#include <math.h>
int main(){
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long width = ceil((double)n / a);
    long long length = ceil((double)m / a);
    long long flagStones = width * length;
    printf("%lld", flagStones);
}