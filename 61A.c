#include <stdio.h>
#include <string.h>
int main(){
    char str1 [100], str2 [100], strHasil [100];
    scanf("%s %s", &str1, &str2);
    for(int i = 0; i < strlen(str1); i++){
        if (str1[i] == str2[i]){
            str1[i] = '0';
        }else if (str1[i] != str2[i]){   
            str1[i] = '1';
        }
    }
    printf("%s", str1);
}