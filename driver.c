#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
#include "array.h"

int main(){
	//-----------------LINKED LIST-------------------
	printf("TESTING LINKED LIST \n \n");
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
	printf("\n");


/*
	first = insert(first, "pink floyd", "l");
	first = insert(first, "pink floyd", "b");
	first = insert(first, "pink floyd", "z");
	first = insert(first, "ed sheeran", "blah");
	first = insert(first, "genki", "blarg");
	first = insert(first, "zedd", "blerg");

	print_list(first);
*/
	free_list(first);
	//-----------------ARRAY-------------------
	printf("TESTING LIBRARY \n \n");
	add("smash mouth", "all star");
	add("lady gaga", "pokerface");
	add("miley cyrus", "the climb");
	add("miley cyrus", "butterfly fly away");
	add("mickey mouse", "mickey mouse clubhouse");

	printf("testing search \n");
	printf("looking for lady gaga: pokerface... %s \n", search("lady gaga", "pokerface")->song);
	printf("\n");

	printf("testing search_artist \n");
	printf("looking for miley cyrus... %s \n", search_artist("miley cyrus")->artist);
	printf("\n");

	printf("testing print_letter \n");
	print_letter('m');
	printf("\n");

	printf("testing print_songs \n");
	print_songs("miley cyrus");
	printf("\n");

	printf("testing print_lib \n");
	print_lib();
	printf("\n");

	printf("testing shuffle \n");
	shuffle();
	printf("\n");

	printf("testing delete \n");
	delete("lady gaga", "pokerface");
	print_lib();
	printf("\n");

	printf("testing clear \n");
	clear();
	printf("\n");

	return 0;
}
