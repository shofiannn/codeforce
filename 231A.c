#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    //array angka menerima 3 angka
    int angka[3];
    int poin = 0;
    if(n >= 1 && n <= 1000){
        //for untuk kelompok
        for(int i = 0; i < n; i++){
            //for untuk array angka
            for(int j = 0; j < 3; j++){
                //j = 0 -> angka[0]
                scanf("%d", &angka[j]);
            }
            int anjay = angka[0] + angka[1] + angka[2];
            if(anjay >= 2 && anjay <= 3){
                poin += 1;
            }
        }
        printf("%d", poin);
    }
}