section .text
    global suma
suma:
    ; argumentos en stacks o registros según ABI (por ejemplo en x86-64, primeros args en RDI y RSI)
    mov rax, rdi    ; primer número en RAX
    add rax, rsi    ; sumar segundo número
    ret

  #include <stdio.h>

extern long suma(long a, long b);
extern long resta(long a, long b);
extern long multiplica(long a, long b);
extern long divide(long a, long b);

int main() {
    long a = 15, b = 5;
    printf("Suma: %ld\n", suma(a, b));
    printf("Resta: %ld\n", resta(a, b));
    printf("Multiplicación: %ld\n", multiplica(a, b));
    printf("División: %ld\n", divide(a, b));
    return 0;
}  
