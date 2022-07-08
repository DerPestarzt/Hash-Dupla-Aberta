# Tabela Hash: Endereçamento aberto por hash dupla

![Linguagem C](https://img.shields.io/badge/Linguagem-C-green.svg)


<h1> Problema</h1>

Implementação de duas tabelas hash: i) endereçamento fechado e; ii) endereçamento aberto por hash dupla. O trabalho deve receber diretamente no seu código um vetor de no mínimo 20 valores inteiros, os quais serão utilizados como entrada  para as duas estruturas que, por sua vez, são criadas com o dobro do tamanho do vetor (i.e., número primo maior que esse valor dobro). Feito isso, como resultado da execução deve-se apresentar o número de colisões ocorridas para ambas as estruturas quando o mesmo vetor é armazenado. Por fim, contemplar no README.mb uma breve discussão dos motivos que levaram uma estrutura a apresentar melhores resultados. .
<br></br>

<h1>Implementação </h1>
<h2>Funções</h2>
Para a implementação foram desenvolvidas as funções <code>Initialize</code>, <code>Imprime</code> e <code>Insert</code>  <code>Initialize</code>.
<h2>Initialize</h2>
A função <code>Initialize</code> é implementada para criar a lista que será utilizada para hash, setar (-1) para todas as posições definindo que elas estão sem chaves e zerando o seu valor.
<ul>

```   C
void Initialize(HashTable *h, int M){
	h->table = (DataTable*) malloc (M * sizeof(DataTable));

	for(int i=0; i<M; i++){
		h->table[i].key   = -1;
		h->table[i].value = 0;
	}
	h->M = M;
}
 ```
<br></br>
<h2>Imprime</h2>
A função <code>Imprime</code> printa as chaves e valores.
<br></br>

```   C
void Imprime(HashTable *h){
	for(int i=0; i<h->M; i++)
		printf("KEY:%d - VALUE:%d\n", h->table[i].key, h->table[i].value);
	printf("\n");
}
 ```
<h2>Insert</h2>
A função <code>Insert</code> realiza o calculo da Hash dupla <code>(v, posicao, M) ((v*(posicao+1)+(M-1)+posicao) % M)</code> e verifica se a posição não tem uma chave e valor, caso já tenha adiciona um conflito ao contador, se não tiver os insere.
<br></br>

```   C
void Insert(HashTable *h, int key, int value, int *cont){
	int idx = hash(key, h->M);
	int aux = idx;
	
	while (h->table[idx].key != -1){
		(*cont)++;
		idx = hash2(key, idx, h->M);
		if (idx == aux){
			printf("OPENED HASH IS FULL!\n");
			return;
		}
	}		
	h->table[idx].key   = key;
	h->table[idx].value = value;
}
 ```
<h1>Resultados </h1> 
Ao criar inserir 20 Chaves e valores em uma Hash Dupla de 41 posições (o primeiro numero primo maior que o dobro do tamanho do vetor) obtemos: 

<p align = 'center' ><img src="https://user-images.githubusercontent.com/56900319/177898481-91d47346-b6bb-4fe8-9a2a-2f1ec937e5f7.png" width = "60%"></p>



Sendo printado chave, valor e quantidade de colisões que aconteceram na execução.
# Compilação e Execução


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
