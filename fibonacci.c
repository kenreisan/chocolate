/*
 * Autor: Eduardo Romero
 * Version: 1.0
 *
 * Programa para calcular los numeros de la serie de
 * Fibonacci. Se usa el metodo iterativo.
 *
 * Por las limitantes del rango de numeros que puede
 * contener un "unsigned long long" el numero de Fibonacci
 * que puede mostrar el programa es fibo93.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned long long fibonacci(int num){
    /*
     * Recibe:  Numero de la serie de Fibonacci.
     *
     * Regresa: El valor correspondiente al numero
     *          de la serie de Fibonacci.
     *
     * Los casos bases son 0 y 1, despues solo es una suma
     * numero fibo-1 y fibo-2.
     */
    unsigned long long fibo1, fibo2, fibor;

    if (num <= 0)
        return 0;
    if (num == 1)
        return 1;

    fibo1 = 0;
    fibo2 = 1;

    for (int i=2; i <= num; i++){
        fibor = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibor;
    }

    return fibor;
}

int main(int argc, char *argv[]){
    /*
     * Recibe:  El numero de la serie de Fibonacci desde la
     *          linea de comandos.
     *
     * Imprime en pantalla el numero deseado de la serie.
     */
    unsigned long long resultado;

    resultado = fibonacci(atoi(argv[1]));

    printf("fibo[%s] = %llu\n",argv[1],resultado);

    return 0;
}
