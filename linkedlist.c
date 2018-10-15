#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

void print_list(struct node * current){
  if(!current)
    return;
  while(current){
    printf("%d \n", current->i);
    current = current->next;
  }
}

struct node * insert_front(struct node * current, int add){
  struct node * new = (struct node *) malloc(sizeof(struct node));
  new->i = add;
  new->next = current;
  return new;
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
