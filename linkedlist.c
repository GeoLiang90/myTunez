#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"

struct node * insert_front(struct node * current, char * art, char * son){
  struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
  if(!current){
    return new;
  }
  new->next = current;
  return new;
}

struct node * insert(struct node * current, char * art, char * son){
	struct node * new = (struct node *) malloc(sizeof(struct node));
	strcpy(new->artist, art);
	strcpy(new->song, son);
  //printf("%s: %s \n", new->artist, new->song);
  //If there is no list yet
  if(!current){
    return new;
  }
  struct node * prev = current;
	struct node * curr = current;
	while(curr){
		int x = strcmp(curr -> artist, art);
		int y = strcmp(curr -> song, son);
    //printf("%d", x);
    //Insertion song is less than the original
		if ((x == 0 && y > 0) || x > 0){
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
		if ((x == 0 && y < 0) || x < 0){
      //If we are the last node and our inserting song greater
      if (!(curr -> next)){
        //printf("Something was null \n");
        curr -> next = new;
        //printf("%s", curr->song);
        return current;
      }
      //if (prev != curr){
      if (curr -> next){
        prev = curr;
      }
			curr = curr -> next;
		}
	}
}

void print_list(struct node * current){
  if(!current){
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
  while(current){
    if((!strcmp(current->artist, art)) && (!strcmp(current->song, son))){
      return current;
    }
    current = current->next;
  }
}

struct node * find_first(struct node * current, char * art){
  if(!current)
    return NULL;
  while(current){
    if(strcmp(current->artist, art)==0)
      return current;
    else
      current = current->next;
  }
}

struct node * ran(struct node * current){
  struct node * curr = current;
  int len = 0;
	while(current){
		len++;
		current = current->next;
	}
	srand(time(NULL));
  int x;
	x = rand() % len;
  while(x){
    curr = curr->next;
    x--;
  }
  return curr;
}

struct node * rem(struct node * current, char * art, char * son){
  struct node * curr = current;
  struct node * tar = find(current, art, son);
  while(curr){
    if(curr == tar){
      curr = tar->next;
      free(tar);
      return curr;
    }
    else if(!curr->next){
      return current;
    }
    else if(curr->next == tar){
      curr->next = tar->next;
      free(tar);
      return curr;
    }
    else
      curr = curr->next;
  }
  return current;
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
