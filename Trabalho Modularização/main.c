#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int ex01();

int ex02();
void Expressao();

int ex03();
void Expressao2();
int count;
float S;

int ex04();
void Expressao3(int S,int count);

int ex05();
int Expressao4(int S);

int ex06();
int Expressao5(int count);

int main()
{
    int op;
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));
    do
    {
        system("CLS");
        printf("0 - Sair do programa\n");
        printf("1 - Exercício 01\n");
        printf("2 - Exercício 02\n");
        printf("3 - Exercício 03\n");
        printf("4 - Exercício 04\n");
        printf("5 - Exercício 05\n");
        printf("6 - Exercício 06\n");
        printf("\n- Escolha: ");
        scanf("%i", &op);
        switch (op)
        {
        case 0:
            break;
        case 1:
            ex01();
            break;
        case 2:
            ex02();
            break;
        case 3:
            ex03();
            break;
        case 4:
            ex04();
            break;
        case 5:
            ex05();
            break;
        case 6:
            ex06();
            break;
        default:
            printf("Numero invalido");
        }
        system("pause");
    }
    while (op != 0);
}

//1. em um programa principal
int ex01()
{
    // serie fibonacci
    int count, first_term = 0, second_term = 1, next_term, i;
    float aux;
    // denominador
    int den = 2, sinal = 1;

    setlocale(LC_ALL,"portuguese");

    printf("Digite um numero:\n");
    scanf("%i",&count);

    for ( i = 0 ; i <= count ; i++ )
    {
        // inicio fibonacci
        if ( i <= 1 )
        {
            next_term = i;
        }
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }
        aux = (next_term / den) * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        S = S + aux;

    }
    printf("O resultado é: %f\n", S);
}

//2. utilizando um procedimento
int ex02()
{
    Expressao();
    return 0;
}

void Expressao()
{
    int count, first_term = 0, second_term = 1, next_term, i;
    int den = 2, sinal = 1;
    float aux;

    printf("Digite um número:\n");
    scanf("%i",&count);

    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }

        aux = next_term / den * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        S = S + aux;
    }
    printf("O resultado é: %f\n", S);
}

//3. utilizando procedimento variáveis globais N e S
int ex03()
{
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número:\n");
    scanf("%i",&count);

    Expressao2();
    return 0;
}

void Expressao2()
{
    int first_term = 0, second_term = 1, next_term, i;
    int den = 2, sinal = 1;
    int aux;

    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }

        aux = next_term / den * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        S = S + aux;
    }
    printf("O resultado é: %f\n", S);
}

//4. utilizando procedimento passando N como parâmetro e retornando o valor de S  em um
//outro parâmetro
int ex04()
{
    int count, S;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número:\n");
    scanf("%i",&count);

    Expressao3(S, count);

    printf("O resultado é: %f\n", S);
    return 0;
}

void Expressao3(int S,int count)
{
    int first_term = 0, second_term = 1, next_term, i;
    int den = 2, sinal = 1;
    int aux;

    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }

        aux = next_term / den * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        S = S + aux;
    }
}

//5. utilizando função retornando o valor de  S e a variável global N
int ex05()
{
    int S;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número:\n");
    scanf("%i",&count);

    Expressao4(S);

    printf("O resultado é: %f\n", S);
    return 0;
}

int Expressao4(int S)
{
    int first_term = 0, second_term = 1, next_term, i;
    int den = 2, sinal = 1;
    int aux;

    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }

        aux = next_term / den * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        S = S + aux;
    }
}

//6. utilizando função passando N como parâmetro e retornando o valor de S
int ex06()
{
    int count, S;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número:\n");
    scanf("%i",&count);

    Expressao5(count);
    S = Expressao5(count);
    printf("O resultado é: %f\n", S);
    return 0;
}

int Expressao5(int count)
{
    int first_term = 0, second_term = 1, next_term, i;
    int den = 2, sinal = 1;
    int aux, C;

    for ( i = 0 ; i < count ; i++ )
    {
        if ( i <= 1 )
            next_term = i;
        else
        {
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
        }

        aux = next_term / den * sinal;
        den = den + 2;
        sinal = sinal * (-1);
        C = C + aux;
    }
    return C;
}
