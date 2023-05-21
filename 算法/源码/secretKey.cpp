








/* secret key */
#include<stdio.h>
#include<string.h>
#include<iostream>
struct Node {
   int data;
   struct Node *next;
};

int main() {
  struct Node *head, *s, *q, *t;
  int n,m,count=0,i;
  printf("输入monkey个数n m号:");
  scanf("%d,%d",&n,&m);
  for (i = 1; i <= n; i++)
    {
      s = (struct Node *)malloc(sizeof(struct Node));
      s->data=i;
      s->next=NULL;
      if (i == 1)
      {
        head = s, q = head;
      }
      else
      {
        q->next=s;
        q=q->next;
      }
    }
  q->next=head;
  printf("出队前:");
  q = head;
  while (q->next != head)
    {
      printf("%d ",q->data);
      q=q->next;
    }
  printf("%d\n",q->data);
  printf("出队后:");
  q=head;
  do {
    count++;
    if (count == m-1)
    {
      t = q->next;
      q->next = t->next;
      count = 0;
      printf("%d ",t->data);
    }
    q=q->next;
  } while (q->next!=q);
    printf("%d\n",q->data);
  system("pause");
  return 0;
}