#include <stdio.h>
#include <math.h>
int main(){
    int Y, W, pembilang, penyebut, denominator;
    scanf("%d %d", &Y, &W);
    int theMax = fmax(Y, W);
    int sisa = 6 - theMax + 1;
    denominator = 6;
    if(denominator % sisa == 0){
        pembilang = 1;
        penyebut = 6 / sisa;
        printf("%d/%d", pembilang, penyebut);
    }else if(sisa % 2 == 0 && denominator % 2 == 0){
        pembilang = sisa / 2;
        penyebut = denominator / 2;
        printf("%d/%d", pembilang, penyebut);
    }else{
        printf("%d/%d", sisa, denominator);
    }
}