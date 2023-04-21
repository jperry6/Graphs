#include <stdio.h>
#include <stdlib.h>
#include "graph.h"

//EdgeList new_edge_list() {
//	EdgeList* temp;
//	temp->head = NULL;
//	//temp = malloc(G.V * sizeof(EdgeList));
//	return *temp;
//}
//Graph new_graph() {
//	Graph temp;
//	temp.V = 0;
//
//
//	return temp;
//}

void insert_edge(EdgeList* self, Edge data) {
	EdgeNodePtr temp = malloc(sizeof * temp);

	temp->edge = data;
	temp->next = self->head;
	self->head = temp;
}