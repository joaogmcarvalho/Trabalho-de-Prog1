#include <stdio.h>

int main()
{

//variaveis
int i, andares, pne = 0, pin, pen, pout;

//andares do predio
printf ("Quantos andares tem o predio: ");
scanf ("%d", &andares);

printf ("\n");
for (i = 0; i < andares; i++){
	if (pne < 16){
		printf ("ANDAR %d\n", i+1);
		printf ("Quantas pessoas entraram: ");
		scanf ("%d", &pin);
		pne = pne + pin;
		printf ("Quantas pessoas sairam: ");
		scanf ("%d", &pout);
		pne = pne - pout;
		printf ("Tem %d pessoas no elevador\n\n", pne);
	}
	if (pne > 15){
		printf ("Excesso de Pessoas\n");
		if (pne >= 15){
			printf ("Devem sair %d pessoas\nQuantas pessoas irao sair: ", pne - 15);
			scanf ("%d", &pout);
			printf ("\n");
			pne = pne - pout;
		}
	}
}
printf ("Chegamos ao ultimo andar.\n\nSairao %d pessoas", pne);


//pne = pin - pout;

	
getch();
return 0;
}
