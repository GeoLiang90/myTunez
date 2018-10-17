#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
	struct node * first = malloc(sizeof(struct node));
	first = insert_front(first, "pearl jam", "e");
	first = insert_front(first, "pink floyd", "d");
	print_list(first);
}
