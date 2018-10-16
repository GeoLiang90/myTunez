#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linkedlist.h"

struct node * insert_front(struct node * current, char art, char son){
  struct node * new = (struct node *) malloc(sizeof(struct node));
  new->artist = art;
	new->song = son;
  new->next = current;
  return new;
}

struct node * insert(struct node * current, char art, char son){
	
}

void print_list(struct node * current){
  if(!current)
    return;
  while(current){
    printf("%s: %s | ", current->artist, current->song);
    current = current->next;
  }
}

struct node * find(struct node * current, char art, char son){

}

struct node * find_first(struct node * current, char art, char son){

}

struct node * ran(struct node * current){
	srand(time(NULL));
	x = rand();
}

struct node * rem(struct node * current, char art, char son){

}

struct node * free_list(struct node * current){
  struct node * hold;
  while(current){
    hold = current->next;
    free(current);
    current = hold;
  }
  return current;
}
