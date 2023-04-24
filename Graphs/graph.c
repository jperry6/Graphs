#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

// Initialise edge
void insert_edge(EdgeList* self, Edge data) {
	EdgeNodePtr temp = malloc(sizeof * temp);

	temp->edge = data;
	temp->next = self->head;
	self->head = temp;
}
// Add edges to graph
void add_edges(Graph G, int* in_degrees) {
	for (int z = 0; z < G.V; z++) {
		EdgeNodePtr current = G.edges[z].head;
		while (current != NULL) {
			in_degrees[current->edge.to_vertex]++;
			current = current->next;
		}

	}
}
// Print graph
void print_graph(Graph G, int* in_degrees) {
	for (int g = 0; g < G.V; g++) {
		printf("Vertex %d: %d\n", g, in_degrees[g]);
	}
}
// Initialise and return a new graph
Graph new_graph() {
	Graph G;
	G.V = 0;

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
	return G;
}
// Initialises a list of in degrees
int* new_in_degrees(Graph G) {
	int* in_degrees;
	in_degrees = malloc(G.V * (sizeof(in_degrees)));
	for (int v = 0; v < G.V; v++) {
		in_degrees[v] = NULL;
	}
	return in_degrees;
}

void test_graph() {
	Graph G;
	int to, weight;
	int* in_degrees;

	G = new_graph();
	in_degrees = new_in_degrees(G);

	add_edges(G, in_degrees);

	print_graph(G, in_degrees);
}