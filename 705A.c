#include <stdio.h>
int main(){
    int n; scanf("%d", &n);
    int i = 1;
    while(i <= n){
        if(i == 1){
            printf("I hate ");
        }
        else if(i % 2 == 0){
            printf("that I love ");
        }
        else if(i & 2 != 0){
            printf("that I hate ");
        }
        i++;
    }
    printf("it");
}