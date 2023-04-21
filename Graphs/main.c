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

	in_degrees = malloc(G.V * (sizeof(in_degrees)));
	for (int v = 0; v < G.V; v++) {
		in_degrees[v] = 0;
	}
	for (int z = 0; z < G.V; z++) {
		EdgeNodePtr current = G.edges[z].head;
		while (current != NULL) {
			in_degrees[current->edge.to_vertex]++;
			current = current->next;
		}

	}
	for (int g = 0; g < G.V; g++) {
		printf("Vertex %d: %d\n", g, in_degrees[g]);
	}

	return 32;
}
