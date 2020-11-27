#include <stdio.h>
#include <stdlib.h>
#define carre(x) (x) * (x)

int main() {
	int nb = 5;
	int result = 0;
	result = carre(nb);
	printf("%d \n", result);
	result = carre(nb + 1);
	printf("%d \n", result);
}

// La macro initale ne fonctionne pas car il n'y a pas de parenthèse. Avec 5 + 1 la macro faisait donc 5 + 1 * 5 + 1 et non (5+1) * (5+1).
// Sans modifier la macro on aurait aussi pu écrire -------> result = carre((nb + 1))