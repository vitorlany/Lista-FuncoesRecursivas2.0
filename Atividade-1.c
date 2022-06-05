#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;

    printf("Insira os valores: ");
    scanf("%f %f", &num1, &num2);

    float resultado = num1 - num2;

    while (resultado > num2)
    {
        resultado -= num2;
    }

    printf("Resultado: %.0f\n", resultado);
    return 0;
}