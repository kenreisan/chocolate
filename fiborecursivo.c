/*
 * Autor: Eduardo Romero
 * Version: 1.0
 *
 * Programa para calcular los numeros de la serie de
 * Fibonacci. Se usa el metodo recursivo.
 *
 * Por las limitantes del rango de numeros que puede
 * contener un "unsigned long long" el numero de Fibonacci
 * que puede mostrar el programa es fibo[93], pero no 
 * recomiendo calcular mas allá del fibo[50].
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long long fibo(int num){
	/*
	Recibe:	Numero deseado a calcular.

	Regresa: Numero de la serie de Fibonacci.

	Calcula de manera recursiva el numero de Fibonacci.
	*/
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