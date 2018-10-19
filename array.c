#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"
#include "linkedlist.h"
#include <time.h>

void add(char * art, char * son){
  int ind = art[0] - 'a';
  lib[ind] = insert(lib[ind], art, son);
}

struct node * search(char * art, char * son){
  int ind = art[0] - 'a';
  struct node * x = lib[ind];
  return find(x, art, son);
}

struct node * search_artist(char * art){
  int ind = art[0] - 'a';
  struct node * x = lib[ind];
  return find_first(x, art);
}

void print_letter(char let){
  struct node * x = lib[let - 'a'];
  while(x && (x->artist[0] == let)){
      printf("%s: %s |\n", x->artist, x->song);
      x = x->next;
  }
}

void print_songs(char * art){
  int ind = art[0] - 'a';
  struct node * x = find_first(lib[ind], art);
  while(strcmp(x->artist,art)==0){
      printf("%s: %s |\n", x->artist, x->song);
      x = x->next;
  }
}

void print_lib(){
  int x = 0;
  while(x < 26){
    if(lib[x])
      print_letter(x + 'a');
    x++;
  }
}

void shuffle(){
  struct node * y;
  struct node * son;
  srand(time(NULL));
  int x =(int) rand() % 26;
  son = ran(lib[x]);
  y = insert(y,son -> artist,son ->song);

  for (int i = 0; i < 4; i++){
    int z = (int)rand() % 26;
    son = ran(lib[z]);
    y = insert(y,son -> artist, son ->song);
  }
  print_list(y);
}

struct node * delete(char * art, char * son){
  int ind = art[0] - 'a';
  lib[ind] = rem(lib[ind], art, son);
}

void clear(){
  int x = 0;
  while(x < 27){
    lib[x] = free_list(lib[x]);
    x++;
  }
}
