#include "stdio.h"
#include "malloc.h"
#include "llist.h"

LList head;

void insertInt(int val)
{
  LItem *item = malloc(sizeof(LItem));
  item->payload = val;
  llInsLast(&head, item);
}

int checkEmpty()
{
  return llCheckEmpty(&head);
}

int delInt()
{
  LItem *item = llDelLast(&head);
  int val = item->payload;
  free(item);
  return val;
}


int main()
{
  int i;

  llInitHead(&head);
  for (i = 0; i < 5; i++)
    insertInt(i);

  while (!checkEmpty())
    printf("deleted %d\n", delInt());

  return 0;
}
  
  
