#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct node { 
	char artist[100];
	char song[100];
  	struct node *next;
};

struct node * insert_front(struct node * current, char * art, char * son);

struct node * insert(struct node * current, char art, char son);

void print_list(struct node * current);

struct node * find(struct node * current, char art, char son);

struct node * find_first(struct node * current, char art, char son);

struct node * ran(struct node * current);

struct node * rem(struct node * current, char art, char son);

struct node * free_list(struct node * current);

#endif
