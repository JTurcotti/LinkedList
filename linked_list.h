#include <stdio.h>
#include <stdlib.h>

typedef char data_t;

struct node {
  struct node *next;
  data_t data;
};

void print_list(struct node *);

struct node *create_list(data_t);

struct node *insert_front(struct node *, data_t);
struct node *insert_end(struct node *, data_t);

struct node *free_list(struct node *);
