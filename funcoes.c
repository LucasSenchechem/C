#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


/*EXERCICIOS 1:
int conta()
{
    int a, b, c;
    int loop = 0;
    
    printf("Escreva 3 numeros inteiros maiores que 1 espacados: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);


    for (int i = b; i <= c; i++)
    {
       if (i % a == 0)
       {
        loop = loop + i;
       }
    }
    
    return loop;

}

int main()
{
    int v1, v2, v3;
    int resultado = conta(v1, v2, v3);
    printf("%d", resultado);

}
    */

/*EXERCICIO 2:
int horas(int seg)
{
    int hora = 0;
    int min = 0;
    int segs = 0;

    printf("Escreva quantos segundos deseja calcular: ");
    scanf("%d", &seg);

    if (seg % 3600 == 0)
    {
       hora = seg / 3600;

       printf("Os segundos formam %d horas complestas", hora);
    }
    else if (seg % 3600 != 0)
    {
        hora = seg / 3600;
        min = (seg % 3600) / 60;
        segs = seg % 60;

        printf("Os segundos formam %d horas, %d minutos e %d segundos\n", hora, min, segs);
    }
    
    return hora min segs;
}

int main()
{
    int segundos;
    
    horas(segundos);

    return 0;
}    
*/
/*EXERCICIO 3:
int carac(int num)
{
    int mil = 0;
    int dez = 0;
    int a = 0;
    
    dez = num % 100;
    mil = num / 100;

    a = dez + mil;

    if ((a*a) == num)
    {
        return 1;
    }
    else return 0;
    
     
}

int main()
{
    int num1;

    printf("Escreva um numero de 4 digitos: ");
    scanf("%d", &num1);
    
    carac(num1);

}
*/
/*EXERCICIO 4:
int nota(int n1, int n2, int n3)
{
    char letra;
    float mediaA = 0;
    float mediaP = 0;

    printf("Selecione qual media voce quer: aritimetica(A) ou ponderada(P)\n");
    scanf(" %c", &letra);
    
    switch (letra)
    {
    case 'A':
        mediaA = (n1 + n2 + n3) / 3;
        printf("%2.f", mediaA);
        
        return mediaA;
        break;
    
    case 'P':
        mediaA = (n1*5 + n2*3 + n3*2) / 3;
        printf("%2.f", mediaP);
        
        return mediaP;
        break;    
    
    default:
        return 0;
        break;
    }
}

int main()
{
    int not1, not2, not3;
    
    printf("digite as 3 notas do aluno: ");
    scanf("%d %d %d", &not1, &not2, &not3);

    nota(not1, not2, not3);
}*/

/*EXERCICIO 5:
int fat(int num)
{
   int fatorial = 1;
   
   for (int i = num; i >= 1; i--)
   {
    fatorial = i * fatorial;
   }
   
   return fatorial;
}

int main()
{
    int num1;
    
    printf("Escreva um numero: ");
    scanf("%d", &num1);

    int resultado = fat(num1);
    printf("O resultado eh: %d", resultado);

}*/
/*EXERCICIO 6:
int primo(int num)
{
    int div = 0;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            div++;
        }    
    }

    if (div <= 2)
        {
            printf("O numero eh primo!");
        }
        else
        {
            printf("O numero nao eh primo!");
        }
    
    return num;   
}

int main()
{
    int num1;
    
    printf("Escreva um numero inteiro: ");
    scanf("%d", &num1);

    primo(num1);

} */
/*EXERCICIO 7:
float media(float num1, float num2, float num3)
{
    float media = (num1 + num2 + num3) / 3;

    return media;
}

int main()
{
    float not1, not2, not3;

    printf("Escreva 3 numeros: ");
    scanf("%f %f %f", &not1, &not2, &not3);

    float resultado = media(not1, not2, not3);
    printf("a media dos numeros eh: %2.f", resultado);
} */