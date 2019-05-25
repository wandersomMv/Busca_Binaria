#include<stdio.h> // busca binaria

int busca(int elemento , int posicaoFinal, int posicaoInicial,int *vetor)//garantindo que o vetor esteja ordenado !!
{
	
	if(posicaoFinal==posicaoInicial)
	{
		
		return posicaoFinal;
	}
	if(vetor[(posicaoFinal+posicaoInicial)/2]<elemento)
	{
		posicaoInicial=(posicaoInicial+posicaoFinal)/2 +1;
		return busca(elemento,posicaoFinal,posicaoInicial,vetor);
	}
	posicaoFinal=(posicaoInicial+posicaoFinal)/2;
	
return busca(elemento,posicaoFinal,posicaoInicial,vetor);
	
	
}





