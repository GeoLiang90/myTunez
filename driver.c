#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

int main(){
	struct node * first;

	printf("testing insert_front \n");
	first = insert_front(first, "pearl", "j");
	first = insert_front(first, "pink", "k");
	first = insert_front(first, "pearl jam", "e");
	print_list(first);
	first = free_list(first);
	print_list(first);
	printf("\n");

	printf("testing insert \n");
	first = insert(first, "pearl jam", "k");
	first = insert(first, "pearl jam", "j");
	print_list(first);
	printf("\n");

	printf("testing find \n");
	print_list(find(first, "pearl jam", "k"));
	printf("\n");
	printf("testing find_first \n");
	print_list(find_first(first, "pearl jam"));
	printf("\n");

	printf("testing random \n");
	print_list(ran(first));
	printf("\n");

	printf("testing remove \n");
	first = rem(first, "pearl jam", "j");
	print_list(first);


/*
	first = insert(first, "pink floyd", "l");
	first = insert(first, "pink floyd", "b");
	first = insert(first, "pink floyd", "z");
	first = insert(first, "ed sheeran", "blah");
	first = insert(first, "genki", "blarg");
	first = insert(first, "zedd", "blerg");

	print_list(first);
*/


	return 0;
}
