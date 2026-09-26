#include <stdio.h>
#include <math.h>
int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int mililiters = k * l;
    int drink = mililiters / nl;
    int slice = c * d;
    int salt = p / np;
    int minimal1 = fmin(drink, slice);
    int minimal2 = fmin(minimal1, salt);
    int toasts = minimal2 / n;
    printf("%d", toasts);
}