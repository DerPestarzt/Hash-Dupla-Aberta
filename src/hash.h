#ifndef HASHTABLE_H 
#define HASHTABLE_H

#include<stdio.h>
#include<stdlib.h>

#define hash(v, M) (v % M)
#define hash2(v, posicao, M) ((v*(posicao+1)+(M-1)+posicao) % M)

typedef struct DataTable DataTable;
typedef struct HashTable HashTable;


struct DataTable{
	int key;
	int value;
};


struct HashTable{
	DataTable *table;
	int M;
};


void Initialize(HashTable *h, int M);
void Imprime(HashTable *h);
int getValue(HashTable *h, int key);
void Insert(HashTable *h, int key, int value, int *cont);

#endif
