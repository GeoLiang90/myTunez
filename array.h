#ifndef ARRAY_H
#define ARRAY_H
struct node * lib[27];

void add(char * art, char * son);

struct node * search(char * art, char * son);

struct node * search_artist(char * art);

void print_letter(char let);

void print_songs(char * art);

void print_lib();

void shuffle();

struct node * delete(char * art, char * son);

void clear();

#endif
