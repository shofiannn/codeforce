#include <stdio.h>
#include <math.h>
int main() {
	long long n;
	scanf("%lld", &n);
	if (n %  2 == 0){
		long long minimalPotong = n / 2;
		printf("%lld", minimalPotong);
	}else if(n == 1){
		printf("0");
	}else{
		printf("%lld", n);
	}
	return 0;	
}
/*

n = 2 -> 1
n = 4 -> 2
n = 8 -> 4
n = 16 -> 8

n = 5 -> 5
n = 6 -> 6

*/
