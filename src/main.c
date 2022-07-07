#include "hash.h"

int main(){
	HashTable h;
	int M = 41;

	
	Initialize(&h, M);
	
	Insert(&h, 64, 1001);
	Insert(&h, 11, 1002);
	Insert(&h, 20, 1003);
	Insert(&h, 53, 1004);
	Insert(&h, 27, 1005);
	Insert(&h, 7, 1006);
	Insert(&h, 8, 1007);
	Insert(&h, 9, 1008);
	Insert(&h, 65, 1001);
	Insert(&h, 12, 1002);
	Insert(&h, 21, 1003);
	Insert(&h, 54, 1004);
	Insert(&h, 28, 1005);
	Insert(&h, 81, 1006);
	Insert(&h, 87, 1007);
	Insert(&h, 91, 1008);
	Insert(&h, 29, 1005);
	Insert(&h, 35, 1006);
	Insert(&h, 13, 1007);
	Insert(&h, 88, 1008);
	Insert(&h, 23, 1008);

	

	

	printf("\n\n");
	Imprime(&h);


	return 0;
	
}
