#include <stdio.h>

// Declaración de funciones ensamblador
long suma(long a, long b);
long resta(long a, long b);
long multiplicacion(long a, long b);
long division(long a, long b);

int main() {
    long a = 20;
    long b = 4;

    printf("Suma: %ld + %ld = %ld\n", a, b, suma(a, b));
    printf("Resta: %ld - %ld = %ld\n", a, b, resta(a, b));
    printf("Multiplicacion: %ld * %ld = %ld\n", a, b, multiplicacion(a, b));
    printf("Division: %ld / %ld = %ld\n", a, b, division(a, b));

    return 0;
}
