#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

int main() {

	Graph G;
	int to, weight;
	int* in_degrees;

	G = new_graph();
	in_degrees = new_in_degrees(G);

	add_edges(G, in_degrees);
	
	print_graph(G, in_degrees);

	return 0;
}
