#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*EXERCICIO 1:
void imprimeNum(int n)
{
    printf("o numero escolhido é: %d\n", n);
}

int main(){

int num;

printf("escreva um numero inteiro: ");
scanf("%d", &num);
imprimeNum(num);


}*/
/*EXERCICIO 2
void imprimeMes(int mes) 
{
    switch (mes)
    {
    case 1:
        printf("Janeiro\n");
        break;
    
    case 2:
        printf("Fevereiro\n");
        break; 
        
    case 3:
        printf("Marco\n");
        break; 
        
    case 4:
        printf("Abril\n");
        break;  
        
    case 5:
        printf("Maio\n");
        break;  
        
    case 6:
        printf("Junho\n");
        break;
        
    case 7:
        printf("Julho\n");
        break;
        
    case 8:
        printf("Agosto\n");
        break; 
        
    case 9:
        printf("Setembro\n");
        break;  
        
    case 10:
        printf("Outubro\n");
        break;  
        
    case 11:
        printf("Novembro\n");
        break; 
        
    case 12:
        printf("Dezembro\n");
        break;    
    }
}

int main()
{

    int Mes;

    printf("Escolha um mes (de 1 a 12): ");
    scanf("%d", &Mes);

    imprimeMes(Mes);
} */
/*EXERCICIO 3:
void imprimePiramide(int num)
{
    for (int i = 1; i <= num; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
}

int main()
{
    int nume;
    
    printf("Escreva um numero inteiro: ");
    scanf("%d", &nume);

    imprimePiramide(nume);

}*/

/*EXERCICIO 4
void imprimeRet(int linha, int coluna)
{
    printf("+");
    for (int i = 1; i < coluna; i++)
    {
        printf("-");
    }
    printf("+\n");

    for(int i = 0; i < linha; i++) {
        printf("|");
        for (int i = 1; i < coluna ; i++)
            {
                printf(" ");
            }
        printf("|\n");
    }

    printf("+");
    for (int i = 1; i < coluna; i++)
    {
        printf("-");
    }
    printf("+\n");
}

int main()
{
    int linhas;
    int colunas;
    
    printf("escreva o numero de linhas: ");
    scanf("%d", &linhas);

    printf("escreva o numero de colunas: ");
    scanf("%d", &colunas);

    imprimeRet(linhas, colunas);
}*/
/*EXERCICIO 5
float x1, y1, x2, y2, x3, y3, x4, y4;
float perimetro;

void lerCoordenadas()
{
    printf("Digite x1 e y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite x2 e y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Digite x3 e y3: ");
    scanf("%f %f", &x3, &y3);

    printf("Digite x4 e y4: ");
    scanf("%f %f", &x4, &y4);
}

void calcularPerimetro()
{
    float lado1, lado2;

    lado1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    lado2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

    perimetro = 2 * (lado1 + lado2);
}

void imprimirPerimetro()
{
    printf("Perimetro = %.2f\n", perimetro);
}

int main()
{
    lerCoordenadas();
    calcularPerimetro();
    imprimirPerimetro();

    return 0;
} */
/*EXERCICIO 6
int seg;

void horas(int seg)
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
    

}

int main()
{
    horas(seg);

    return 0;
}*/
/*EXERCICIO 7:
void tabuada(int num)
{
    printf("Escolha um numero de 1 a 9: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;

    case 2:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break; 
        
    case 3:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break; 
        
    case 4:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;
        
    case 5:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;    
    
    case 6:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;
        
    case 7:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;
        
    case 8:
        for (int i = 1; i < 10; i++)
        {
            printf("%d", num * i);
        }
        
        break;
        
    case 9:
        for (int i = 1; i < 10; i++)
        {
            printf("%d\n", num * i);
        }
        
        break;    
    default:
        break;
    }
}

int main()
{
    int num;
    tabuada(num);
} */