#include "linked_list.h"
#include <string.h>

int main() {
  struct node *my_list = create_list('\0');
  char *apple = "apple pie";
  int i = strlen(apple) - 1;
  while (i >= 0)
    my_list = insert_front(my_list, apple[i--]);

  print_list(my_list);
  printf("\n");
  return 0;
}
  
