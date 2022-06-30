#include "hash.h"

int main(){
	HashTable h;
	int M = 8;

	
	Initialize(&h, M);
	// Imprime(&h);
	
	// printf("\n\n");
	Insert(&h, 64, 1000);
	Insert(&h, 11, 1001);
	Insert(&h, 20, 1002);
	Insert(&h, 53, 1003);
	Insert(&h, 27, 1004);
	Insert(&h, 7, 1005);


	
	// printf("\n\n");
	// printf("Value:%d\n", getValue(&h, 20));
	// printf("Value:%d\n", getValue(&h, 30));
	// printf("Value:%d\n", getValue(&h, 10));

	

	

	printf("\n\n");
	Imprime(&h);


	return 0;
	
}
