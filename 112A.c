#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char kata1[100];
    char kata2[100];
    scanf("%s", kata1);
    scanf("%s", kata2);
    int panjang1 = strlen(kata1);
    int panjang2 = strlen(kata2);
    for(int i = 0; i < strlen(kata1); i++){
        kata1[i] = tolower(kata1[i]);
        kata2[i] = tolower(kata2[i]);

        if(kata1[i] < kata2[i]){
            printf("-1");
            break;
        }else if(kata1[i] > kata2[i]){
            printf("1");
            break;
        }else if(kata1[i] == kata2[i]){
            if(i + 1 == panjang1 && i + 1 == panjang2){
                printf("0");
                break;
            }
        }
    }    
}