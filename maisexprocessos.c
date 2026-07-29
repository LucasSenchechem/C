#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
void num(int num)
{
    
    printf("Escolha um numero inteiro: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("O numero é igual a 0");
    }
    else if (num < 0)
    {
        printf("O numero é negativo");
    }
    else if (num > 0)
    {
        printf("O numero é positivo");
    }
    
}

int main()
{
    int numero;

    num(numero);
} */
/*
void maior(float num1, float num2)
{
    printf("Escreva um numero: ");
    scanf("%f", &num1);

    printf("Escreva outro numero: ");
    scanf("%f", &num2);

    if (num1 == num2)
    {
        printf("Os numeros sao iguais!");
    }
    else if (num1 > num2)
    {
        printf("O numero %f eh maior que %f", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("O numero %f eh maior que %f", num2, num1);
    }

}

int main()
{
    float num1, num2;

    maior(num1, num2);
} */

void operacao(float num)
{
    int op;
    
    printf("Escolha um numero: ");
    scanf("%f", &num);

    printf("Escolha uma operacao matematica: 1- dobro 2- metade 3- raiz quad\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%2.f", num * 2);
        break;

    case 2:
        printf("%2.f", num / 2);
        break; 
        
    case 3:
        printf("%2.f", sqrt(num));
        break;    
    
    default:
        break;
    }
}

int main()
{
    float num;

    operacao(num);
}