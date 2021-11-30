#include <stdio.h>
#include <stdlib.h>
int add (int a, int b){
	return a+b ;
}
int multiply(int a, int b){
	if (a==0 || b==0)
		return 0;

	else if (a == 1)
		return b ;

	else if (b == 1 )
		return a ;

	else{
		return  a + multiply (a, b-1) ;
		
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	int a = 5 ;
	int b = 8 ;
	printf ("%d * %d = %d \n", a , b , multiply(a,b)) ;
	return 0 ;
	
}
