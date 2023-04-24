#pragma once

typedef struct edge {
	int to_vertex;
	int weight;
} Edge;

typedef struct edgeNode {
	Edge edge;
	struct edgeNode* next;
} *EdgeNodePtr;

typedef struct edgeList {
	EdgeNodePtr head;
} EdgeList;

typedef struct graph {
	int V;
	EdgeList* edges;
} Graph;

// Initialise the graph
Graph new_graph();
// Initialise in-degrees of graph
int* new_in_degrees(Graph G);
// Add edges to graph
void add_edges(Graph G, int* in_degrees);
// Print inputted graph
void print_graph(Graph G, int* in_degrees);
