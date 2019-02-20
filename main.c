#include <stdio.h>

int main(void) {
    // your code goes here

    int quant100, quant50, quant20, quant10;
    int valor;
    scanf("%d", &valor);
    if(valor < 0)
        printf("Erro de valor invalido\n");
    else if(valor == 0)
        printf("0\n");
    else
    {
        quant100 = valor / 100;
        valor %= 100;
        quant50 = valor / 50;
        valor %= 50;
        quant20 = valor / 20;
        valor %= 20;
        quant10 = valor / 10;
        valor %= 10;
        if(valor)
            printf("Erro de notas indisponíveis\n");
        else
        {

            while(quant100-- > 0)
                printf("100,00 ");
            while(quant50-- > 0)
                printf("50,00 ");
            while(quant20-- > 0)
                printf("20,00 ");
            while(quant10-- > 0)
                printf("10,00 ");
            printf("\n");
        }
    }
    // como C não le valor nulo, não achei necessário fazer essa verificação
    return 0;
}
