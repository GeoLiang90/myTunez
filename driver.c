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

	first = insert(first, "pink floyd", "d");
/*
	first = insert(first, "pink floyd", "a");
*/
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
	/*
	if(find(first, "pink floyd", "d"))
		printf("found pink floyd: d \n");
	if(!strcmp(find_first(first, "pink floyd")->song,"a"))
		printf("found first song of pink floyd: %s \n", find_first(first, "pink floyd")->song);
	*/
	return 0;
}
