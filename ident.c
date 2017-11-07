#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int a;
int b;
int c[MAX][MAX];
char z;

void protPrintNum()
{
    for(a=0; a < MAX; a++)
    {
        for(b=0; b < MAX; b++)
        {
            printf("%d",c[a][b]);
        }
        printf("\n");
        
    }
}

int main(void)
{
    /*printf("Bem vindo ao teste de identacao.\n\n");
    getchar();

    printf("Digite dois numeros de 1 a 10.\n\n");

    scanf("%d", &a);
    scanf("%d", &b);

    scanf("%s", &z);

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
    }*/
    protPrintNum();
    return 0;
}

