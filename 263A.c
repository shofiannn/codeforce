#include <stdio.h>
#include <math.h>

int main(){
    int posisi = 0;
    int matriks[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriks[i][j]);
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matriks[i][j] == 1){
                posisi += abs(2 - i);
                posisi += abs(2 - j);
            }
        }
    }
    printf("%d", posisi);
}