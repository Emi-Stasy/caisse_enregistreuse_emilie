#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));
	//initialisation avec l'heure actuelle

	//generer aleatoirement un nombre entre 100 et 200000
	int montant_sous = (rand() % 19901) + 100;

	//Arrondir a 5 sous pres
	montant_sous = (montant_sous/5)*5;

	//Convertir en roupies
	double montant_rs = montant_sous / 100;

	printf("\nCaisse Enregistreuse Mu\n");
	printf("\n>>> Montant a payer: Rs%.2f\n",montant_rs);

	int paye_sous = 0;
	double paye_rs;



	while (paye_sous < montant_sous)
	{
		printf("Entrez le montant donne: ");
		scanf("%lf",&paye_rs);

		paye_sous = (int)(paye_rs * 100);

		if (paye_sous < montant_sous){
			printf("Montant Insuffisant! Il faut au moins Rs%.2f\n\n",montant_rs);
		}
	}

	return 0;

}
