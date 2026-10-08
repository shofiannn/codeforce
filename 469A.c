#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int pn[n];
    for(int i = 0; i < n; i++){
        pn[i] = i + 1;
    }
    int x; scanf("%d", &x);
    int px[x];
    for(int i = 0; i < x; i++){
        scanf("%d", &px[i]);
    }
    int y; scanf("%d", &y);
    int py[y];
    for(int j = 0; j < y; j++){
        scanf("%d", &py[j]);
    }
    int arrayGabungan[x+y];
    int j = 0;
    for(int i = 0; i < x+y; i++){
        if(i >= 0 && i <= x - 1){
            arrayGabungan[i] = px[i];
            // printf("i ke %d -> px = %d\n", i, px[i]);
        }else if(i >= x && i < x + y){
            arrayGabungan[i] = py[j];
            // printf("idx arrayGabungan ke %d ->  idx py ke %d => %d\n", i, j, py[j]);
            j++;
        }
    }
    // for(int i = 0; i < x+y; i++){
    //     printf("%d\n", arrayGabungan[i]);
    // }
    // printf("%d", py[0]);
    int poin = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < x + y; j++){
            // printf("idx pn ke %d : %d == idx arrayGabungan ke %d : %d\n", i, pn[i], j, arrayGabungan[j]);
            if(pn[i] == arrayGabungan[j]){
                // printf("%d == %d\n", pn[i], arrayGabungan[j]);
                poin++;
                break;
            }
        }
    }
    // for(int i = 0; i < x+y; i ++){
    //     printf("%d", arrayGabungan[i]);
    // }
    // printf("%d", arrayGabungan[2]);
    // printf("%d", poin);
    if(poin == n){
        printf("I become the guy.");
    }else{
        printf("Oh, my keyboard!");
    }
}