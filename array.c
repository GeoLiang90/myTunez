#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "linkedlist.h"

void add(char * art, char * son){
  int ind = (art)[0] - 'a';
  struct node * x = lib[ind];
  lib[ind] = insert(x, art, son);
}

struct node * search(char * art, char * son){
  int ind = (art)[0] - 'a';
  struct node * x = lib[ind];
  return find(x, art, son);
}

struct node * search_artist(char * art){
  int ind = (art)[0] - 'a';
  struct node * x = lib[ind];
  return find_first(x, art);
}

void print_letter(char let){
  print_list(lib[let - 'a']);
}

void print_songs(char * art);

void print_lib();

void shuffle();

struct node * delete(struct node * son);

void clear();
