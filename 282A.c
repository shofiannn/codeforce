#include <stdio.h>
int main(){
    int n, x;
    x = 0;
    scanf("%d", &n);
    //var operasi termasung string karena terdapat ukuran datanya di dalam []
    char operasi[4];
    if(n >= 1 && n <= 150){
        for(int i = 0; i < n; i++){
            scanf("%s", operasi);
            if(operasi[1] == '+' ){
                x += 1;
            }else if(operasi[1] == '-'){
                x -= 1;
            }
        }
    }
    printf("%d", x);
}