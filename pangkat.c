#include <stdio.h>


//y adalah angka y adalah pangkat
//x adalah angka yang akan dipangkatkan
int rekursif(int x, int y){
	if(y != 0){
		return (x * rekursif(x,(y-1)));
	}else{
		return 1;
	}
	
}


//Contoh Kasus bilangan yang dipangkatkan adalah 5 dan pangkatnya adalah 2 maka penyelesaiannya

//5 * 5 * 1
//25

int main(){
	printf("%d",rekursif(5,2));
	
	
}
