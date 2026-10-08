#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int angka[n];
    int AngkaTerbesar, AngkaTerkecil, idxTerbesar, idxTerkecil, minimum;
    for(int i = 0; i < n; i++){
        scanf("%d", &angka[i]);
    }
    AngkaTerbesar = angka[0];
    AngkaTerkecil = angka[0];
    idxTerbesar = 0;
    idxTerkecil = 0;
    //AngkaTerbesar
    for(int k = 0; k < n; k++){
        if(angka[k] > AngkaTerbesar){
            AngkaTerbesar = angka[k];
            idxTerbesar = k;
            // printf("idxTerbesar : %d\n", idxTerbesar);
        }
    }
    //AngkaTerkecil
    for(int h = 0; h < n; h++){
        if(AngkaTerkecil >= angka[h]){
            AngkaTerkecil = angka[h];
            // printf("idxTerkecil : %d\n", idxTerkecil);
            idxTerkecil = h;
        }
    }
    minimum = idxTerbesar;
    // printf("minimum : %d\n", minimum);
    //perhitungan langkag idxTerkecil
    if(idxTerkecil > idxTerbesar){
        minimum += (n - 1) - idxTerkecil;
        // printf("minimumYA %d = (%d) - %d\n", minimum, n-1, idxTerkecil);
    }else if(idxTerkecil < idxTerbesar){
        minimum += (n - 1) - (idxTerkecil + 1);
        // printf("minimumTidak %d = (%d) - %d\n", minimum, n-1, (idxTerkecil + 1));
    }
    // printf("idxTerbesar : %d\n", idxTerbesar);
    // printf("idxTerkecil : %d\n", idxTerkecil);
    printf("%d\n", minimum);
}
/*

*/