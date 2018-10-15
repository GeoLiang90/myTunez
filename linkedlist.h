struct node { 
	char name[100];
	char artist[100];
  	struct song_node *next;
};

struct node * insert_front(struct node * current, char art, char son);

struct node * insert(struct node * current, char art, char son);

void print_list(struct node * current);

struct node * find(struct node * current, char art, char son);

struct node * find_first(struct node * current, char art, char son);

struct node * ran(struct node * current);

struct node * rem(struct node * current, char art, char son);

struct node * free_list(struct node * current);
