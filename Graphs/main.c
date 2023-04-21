#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {

	Graph G;
	G.V = 0;
	EdgeList* edge_array;
	
	int to, weight;
	
	int* in_degrees;
	// new list and insert at front function
	// add edge function
	scanf_s("%d", &G.V);
	G.edges = malloc(G.V * sizeof(EdgeList));
	for (int i = 0; i < G.V; i++) {
		G.edges[i].head = NULL;
	}
	for (int i = 0; i < G.V; i++) {
		int out;
		scanf_s("%d", &out);
		for (int j = 0; j < out; j++) {
			Edge e;
			scanf_s("%d, %d", &e.to_vertex, &e.weight);
			insert_edge(&G.edges[j], e);
		}
	}
		
	in_degrees = malloc(G.V*(sizeof(int)));
	for (int v = 0; v < G.V; v++) {
		in_degrees[v] = 0;
	}


	//edge_array = malloc(G.V * sizeof(EdgeList));
	//for (int v = 0; v < G.V; v++) {

	//}

	
	//int out;
	//scanf_s("%d", &out);
	//for (int i = 0; i < out; i++) {
	//	scanf_s("%d,%d", &to, &weight);
	//	// add edge
	//}


}