#include "stdlib.h"
#include "stdio.h"

typedef int Item;
typedef struct node node_t, *link;

struct node
{
    Item val;
    link next;
};

link newNode(link next, Item val){
    link x = (link) malloc(sizeof *x);
    if(x==NULL)
        return NULL;
    else{
        x->val = val;
        x->next = next;
    }
    return x;
}

link listInsHead(link h, Item val){
    h = newNode(h, val);
    return h;
}

link listInsTail(link *hp, Item val){



    
}



link printList(link h){
    while(h != NULL){
        fprintf(stdout, "%d ", h->val);
        h = h->next;
    }
}

int main()
{

link head = NULL;
Item d = 10;

for (int i = 0; i < 10; i++)
{
    head = listInsHead(head, d);
    d--;
}



printList(head);
    return 0;
}
