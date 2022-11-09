#include "stdlib.h"
#include "stdio.h"

typedef int Item;
typedef struct node node_t, *link;

struct node
{
    Item val;
    link next;
};

link newNode(Item val, link next){
    link x = (link) malloc(sizeof *x);
    if(x==NULL)
        return NULL;
    else{
        x->val = val;
        x->next = next;
    }
    return x;
}

int main()
{






    return 0;
}
