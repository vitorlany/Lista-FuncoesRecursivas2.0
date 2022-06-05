#include <stdio.h>
#include <stdlib.h>

int calcularResto(float, float);

int main() {
    float num1, num2;

    printf("Insira os valores: ");
    scanf("%f %f", &num1, &num2);

    printf("Resultado: %i\n", calcularResto(num1, num2));
    
    return 0;
}

int calcularResto(float num1, float num2) {
    float resultado = num1 - num2;

    while (resultado > num2)
    {
        resultado -= num2;
    }

    return resultado;
}