#include <stdio.h>
int main(){
    int k, n, lolos;
    lolos = 0;
    scanf("%d %d", &n, &k);
    int score[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &score[i]);
    }
    int batas = score[k-1];
    for(int j = 0; j < n; j++){
        if(score[j] >= batas && score[j] > 0){
            lolos += 1;
        }
    }
    printf("%d\n", lolos);
}