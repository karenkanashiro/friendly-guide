/* Imagine v como um vetor de inteiros. Apresente algoritmos recursivos para calcular:
- o elemento máximo do vetor
- a soma dos elementos do vetor
- a media dos elementos do vetor*/
#include <stdio.h>
int vetor[10], maiornum=0;

int maior(int n)
{
    if (n==0)
        return maiornum;
    else if (vetor[maiornum]<vetor[n])
    {
        maiornum=n;
    }
    maior(n-1);
}

void main()
{
    int cont=0, i=0;
    printf("Digite a quantidade de elementos: ");
    scanf("%d%*c",&i);
    printf("\n Digite os elementos: ");
    for (cont=0;cont<i;cont++)
    {
        scanf("%d%*c",&vetor[i]);
    }
    maior(i--);
    printf("Maior num, com indice %d e eh %d",maiornum,vetor[maiornum]);
}
