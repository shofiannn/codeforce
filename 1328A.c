#include <stdio.h>
int main(){
    int t, a, b;
    scanf("%d", &t);
    int move[t];
    for(int i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        int sisa = 0;
        int hasil = 0; 
        sisa = a % b;
        if(sisa == 0){
            move[i] = 0;
        }else{
            hasil = b - sisa;
            move[i] = hasil;
        }
    }
    for(int i = 0; i < t; i++){
        printf("%d\n", move[i]);
    }
}
