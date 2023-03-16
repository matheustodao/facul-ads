#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    /* // ========= Ex. 1
    int firstNumber;
    printf("Digite qualquer numero: ");
    scanf("%d", &firstNumber);

    if (firstNumber > 20) {
        printf("Numero escolhido foi maior que 20 \n Numero escolhido foi %d", firstNumber);
    };*/

    /* // ========= Ex. 2
    int randomNumber;
    printf("Digite algum numero: ");
    scanf("%d", &randomNumber);

    printf(randomNumber > 20 && randomNumber < 90
        ? "Numero esta entre 20 e 90"
        : "Numero nao esta entre o esperado");
    */

    /* // ========= Ex. 3
    int firstNumber;
    int secondNumber;
    int total;

    printf("Digite valor 1: ");
    scanf("%d", &firstNumber);

    printf("Digite valor 2: ");
    scanf("%d", &secondNumber);

    total = firstNumber + secondNumber;

    if (total > 10) {
        printf("O resultado foi %d", total);
    };*/

    /*// ======= Ex. 4
    int firstNumber;
    float total;

    printf("Digite um numero para saber Raiz Quadrada: ");
    scanf("%d", &firstNumber);

    _Bool isNegative = firstNumber < 0;
    total = isNegative ? pow(firstNumber, 2) : sqrt(firstNumber);

    if (isNegative) {
        printf("Quadrado do numero %d e %.0f", firstNumber, total);
    } else {
        printf("Raiz quadrada do numero %d e %.0f", firstNumber, total);
    }; */

    /* // ===== Ex. 5
    int numberOne;

    printf("Digite um numero: ");
    scanf("%d", &numberOne);

    if ((numberOne % 3) == 0) {
        printf("O numero e multiplo de 3");
    } else {
        printf("O numero e nao multiplo de 3");
    }; */

        // ===== Ex. 6
    int numberOne;

    printf("Digite um numero: ");
    scanf("%d", &numberOne);

    if (((numberOne % 3) == 0) && ((numberOne % 7) == 0)) {
        printf("O numero e multiplo de 3");
    } else {
        printf("O numero e nao multiplo de 3");
    };



    return 0;
}
