#include <stdio.h>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int luas = M * N;
    if(luas % 2 == 0){
        int domino = luas / 2;
        printf("%d", domino);
    }else {
        int domino = luas / 2;
        printf("%d", domino);
    }
}