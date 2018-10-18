#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"

struct node * insert_front(struct node * current, char * art, char * son){
  struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
  if(strlen(current->artist) == 0){
    return new;
  }
  new->next = current;
  return new;
}

struct node * insert(struct node * current, char * art, char * son){
	struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
  //If there is no list yet
  if(strlen(current->artist) == 0){
    return new;
  }

  struct node * prev = current;
	struct node * curr = current;

	while(curr){

		int x = strcmp(curr -> artist, art);
		int y = strcmp(curr -> song, son);

    //printf("%d", x);
		if (x == 0 && y > 0){
			new -> next = curr;
      //Choose between if we end up becoming first node or not
      if (curr != prev){
        prev -> next = new;
        return current;
      }
      else{
        return new;
        //We become the first element in this case
      }
		}

    //If our artist is equal but new has a greater song value, I want to move our spotlight to the next node or stop
		if (x == 0 && y < 0){
      //If we are the last node and our inserting song greater
      if (!(curr -> next)){
        //printf("Something was null \n");
        curr -> next = new;
        //printf("%s", curr->song);
        return current;
      }

      if (prev != curr){
        prev = curr;
      }
			curr = curr -> next;
		}

    //If the inserting artist greater
    if (x < 0){
      //If we are the last node and our inserting song greater
      if (!(curr -> next)){
        //printf("Something was null \n");
        curr -> next = new;
        //printf("%s", curr->song);
        return current;
      }

      if (prev != curr){
        prev = curr;
      }
			curr = curr -> next;
    }

    //If the insertion artist is less
    if (x > 0){
      new -> next = curr;
      //Choose between if we end up becoming first node or not
      if (curr != prev){
        prev -> next = new;
        return current;
      }
      else{
        return new;
        //We become the first element in this case
      }
    }

	}

}

void print_list(struct node * current){
  if(strlen(current->artist) == 0){
    return;
  }

  printf("%s: %s |\n", current->artist, current->song);

  if(current->next){
    print_list(current->next);
  }

}

struct node * find(struct node * current, char * art, char * son){
  if(!current){
    return NULL;
  }
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
