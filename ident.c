#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;


int main(void)
{
    printf("Bem vindo ao teste de identacao.\n\n");
    getchar();

    printf("Digite dois numeros de 1 a 10.\n\n");

    scanf("%d", &a);
    scanf("%d", &b);

    if(a>b)
    {
        printf("Seu numero a eh: %d\n\n", a);
        printf("Seu numero b eh: %d\n\n", b);
    }
    else if(a<=b)
    {
        printf("Seu numero a eh: %d\n\n", a);
        printf("Seu numero b eh: %d\n\n", b);
    }

    while(a >= b)
    {
        if(a == b)
        {
            c = a;
            printf("O valor de c, nessas condicoes, eh: %d\n\n", c);
        }
        if(a != b)
        {
            c = a;
            printf("O valor de c, nessas condicoes, eh: %d\n\n", c);
        }
    }
    return 0;
}

