#include <stdio.h>

int main()
{

//variaveis
int i, j, vetA[10], vetB[15], maxA = 0, maxB = 0;

//obtencao dos valores - VETOR A
printf ("Coloque os valores do vetor A: \n");
for (i = 0; i < 10; i++){
	printf ("Valor %d: ", i+1);
	scanf ("%d", &vetA[i]);
}

//obtencao dos valores - VETOR B
printf ("Coloque os valores do vetor B: \n");
for (i = 0; i < 15; i++){
	printf ("Valor %d: ", i+1);
	scanf ("%d", &vetB[i]);
}
printf ("\n");

//percorrer vetor A
for (i = 0; i < 10; i++){
	if (vetA[i] > maxA) maxA = vetA[i];
}
printf ("O maior valor do vetor A: %d\n", maxA);

//percorrer vetor B
for (i = 0; i < 15; i++){
	if (vetB[i] > maxB) maxB = vetB[i];
}
printf ("O maior valor do vetor B: %d\n\n", maxB);

//se possuem o mesmo valor maximo
if(maxA == maxB){
	printf ("Ambos os vetores possuem os valores maximos");
}
if(maxA > maxB){
	printf ("O maior valor esta no vetor A: ", maxA);	
}
if(maxB < maxA){
	printf ("O maior valor esta no vetor B: ", maxB);	
}

//quantos elementos semelhantes possuem
printf ("\n\nEsses elementos sao comuns em ambos vetores:\n ");
for (i = 0; i < 10; i++){
	for (j = 0; j < 15; j++){
		if (vetA[i] == vetB[j]){
			printf ("%d ", vetA[i]);
			i++;
		}
	}
}
getch();
return 0;
}
