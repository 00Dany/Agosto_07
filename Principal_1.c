#include <stdio.h>

int main(){
    int num1, num2, suma, resta, multiplicar, dividir;
    printf("Ingrese 2 numeros: ");
    scanf("%d", & num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", & num2);
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicar = num1 * num2;
    dividir = num1 / num2;
    printf("La suma es de: %d\n", suma);
    printf("La resta es de: %d\n", resta);
    printf("La multiplicacion es de: %d\n", multiplicar);
    printf("La divicion es de: %d\n", dividir);
}