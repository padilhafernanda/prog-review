#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node{
	int value; // grau 
	
};	

struct Grafo{
	int num_v;
	int max_l;
	int iswtd;  // ponderado
	int isdig;  // digrafo 
	Node *vertice;
};	

