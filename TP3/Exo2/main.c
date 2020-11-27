#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int n = 2868838400;
	int i;
	printf("Valeur en octets : %d et en bits : %d \n", sizeof(n), sizeof(n) * 8);
	for (i = 0; i < (sizeof(n) * 8); i++) {
		if (i < 10) { printf(" "); }
		if (n & (1 << i)) {
			printf("%d : ON\n", i);
		}
		else {
			printf("%d : OFF\n", i);
		}
	}
	printf("Bye !\n");
	system("pause");
}