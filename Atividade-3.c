#include <stdio.h>
#include <stdlib.h>

int restoDivisao(float, float);

int main() {
    float num1, num2;

    printf("Insira os valores: ");
    scanf("%f %f", &num1, &num2);
    
    if (num1 > num2) {
        printf("Resultado: %i",restoDivisao(num1, num2));
    } else {
        printf("O primeiro numero deve ser maior que o segundo");
    }

    return 0;
}

int restoDivisao(float num1, float num2) {
    float subtracao = num1 - num2;
    if (subtracao < num2) {
        return subtracao;
    } else {
        restoDivisao(subtracao, num2);
    }
}