#include "hash.h"

int main(){
	HashTable h;
	int M = 41;
	int cont = 0;
	
	Initialize(&h, M);
	
	Insert(&h, 64, 1001, &cont);
	Insert(&h, 11, 1002, &cont);
	Insert(&h, 20, 1003, &cont);
	Insert(&h, 53, 1004, &cont);
	Insert(&h, 27, 1005, &cont);
	Insert(&h, 7, 1006, &cont);
	Insert(&h, 8, 1007, &cont);
	Insert(&h, 9, 1008, &cont);
	Insert(&h, 65, 1001, &cont);
	Insert(&h, 12, 1002, &cont);
	Insert(&h, 21, 1003, &cont);
	Insert(&h, 54, 1004, &cont);
	Insert(&h, 28, 1005, &cont);
	Insert(&h, 81, 1006, &cont);
	Insert(&h, 87, 1007, &cont);
	Insert(&h, 91, 1008, &cont);
	Insert(&h, 29, 1005, &cont);
	Insert(&h, 35, 1006, &cont);
	Insert(&h, 13, 1007, &cont);
	Insert(&h, 88, 1008, &cont);
	Insert(&h, 23, 1008, &cont);

	

	

	printf("\n\n");
	Imprime(&h);
	printf("\n\n");
	printf("Contador de Conflitos: %d\n", cont);


	return 0;
	
}
