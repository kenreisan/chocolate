#include <stdio.h>
#include <stdlib.h>

unsigned long long fibo(int num){
	
	unsigned long long resultado;

	if (num < 3)
		return 1;
	else
		resultado = fibo(num - 1) + fibo(num - 2);
	return resultado;
}

int main(int argc, char const *argv[]){
	
	unsigned long long numero;

	numero = fibo(atoi(argv[1]));
	printf("fibo[%s] = %llu\n",argv[1],numero);

	return 0;
}