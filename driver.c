#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

int main(){
	struct node * first;

	first = insert_front(first, "pearl jam", "e");
	first = insert_front(first, "pink floyd", "d");
	first = insert_front(first, "pink floyd", "a");

	print_list(first);

	struct node * test;
	test = insert(test, "pink floyd", "d");
	/*
	test = insert(test, "pink floyd", "a");
	test = insert(test, "pink floyd", "b");
	test = insert(test, "pink floyd", "z");
	test = insert(test, "ed sheeran", "blah");
	test = insert(test, "genki", "blarg");
	test = insert(test, "zedd", "blerg");
*/
	print_list(test);
	
	/*
	if(find(first, "pink floyd", "d"))
		printf("found pink floyd: d \n");
	if(!strcmp(find_first(first, "pink floyd")->song,"a"))
		printf("found first song of pink floyd: %s \n", find_first(first, "pink floyd")->song);
	*/
	return 0;
}
