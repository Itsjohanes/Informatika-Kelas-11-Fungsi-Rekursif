#include <stdio.h>

int faktorial(int n){
	if(n == 1){
		return 1;
	}else{
		return (n * faktorial(n-1));
		
	}
}

int main(){
	int n;
	//meminta masukan integer n
	scanf("%d", &n);
	int hasil = faktorial(n);
	printf("%d",hasil);
	return 0;
}
