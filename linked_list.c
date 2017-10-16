#include "linked_list.h"

struct node *get_end(struct node *node) {
  while (node->next)
    node = node->next;
  return node;
}

void print_list(struct node *node) {
  printf("{");
  do {
    printf("%c, ", node->data);
    node = node->next;
  } while (node);
  printf("\b\b}");
}

struct node *create_list(data_t data) {
  struct node *node = malloc(sizeof(struct node));
  node->data = data;
  return node;
}

struct node *insert_front(struct node *node, data_t data) {
  struct node *front = malloc(sizeof(struct node));
  front->next = node;
  front->data = data;
  return front;
}

struct node *insert_end(struct node *node, data_t data) {
  struct node *end = malloc(sizeof(struct node));
  end->data = data;
  get_end(node)->next = end;
  return node;
}

struct node *free_list(struct node *node) {
  if (node->next)
    free_list(node->next);
  free(node);
  return node;
}
  
