#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"

struct node * insert_front(struct node * current, char * art, char * son){
  struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
  new->next = current;
  return new;
}

struct node * insert(struct node * current, char * art, char * son){
	struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
	if (!current){
		return new;
	}
	struct node * curr = current;
	while(curr){
		int x = strcmp(curr -> artist, art);
		int y = strcmp(curr -> song, son);
		if (x == 0 && y > 0){
			new -> next = curr;
			return new;
		}
		if (x == 0 && y < 0){
			curr = curr -> next;
		}


	}
}

void print_list(struct node * current){
  if(!current)
    return;
  while(current->next){
    printf("%s: %s |\n", current->artist, current->song);
    current = current->next;
  }
}

struct node * find(struct node * current, char * art, char * son){
  if(!current)
    return NULL;
  while(current->next){
    if(!strcmp(current->artist, art) && !strcmp(current->artist, art))
      return current;
    else
      current = current->next;
  }
}

struct node * find_first(struct node * current, char * art){
  if(!current)
    return NULL;
  while(current->next){
    if(!strcmp(current->artist, art))
      return current;
    else
      current = current->next;
  }
}
/*
struct node * ran(struct node * current){
	srand(time(NULL));
	x = rand();
}

struct node * rem(struct node * current, char * art, char * son){
  if(!current)
    return NULL;
  while(current->next){
    if(!strcmp(current->artist, art) && !strcmp(current->artist, art))
      free(current);
    else
      current = current->next;
    }
}
*/
struct node * free_list(struct node * current){
  struct node * hold;
  while(current){
    hold = current->next;
    free(current);
    current = hold;
  }
  return current;
}
