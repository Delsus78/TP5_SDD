#include <stdio.h>

int display (int n){
	if (n == 1) {
		printf("%d \n", n) ;
		return 1 ;
	}
	else{
		printf("%d \n", 1+display(n-1))  ;
		return n;
	}
}

int main(int argc, char const *argv[])
{
	display(30) ;
	return 0;
}