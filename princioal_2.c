#include <stdio.h>
//Joshua Emanuel De Leon Sandoval 
int main(void) {
    int numero;
    printf("Escribe un numero:\n");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Es par");
    } else {
        printf("Es impar");
    }

    return 0;
}
