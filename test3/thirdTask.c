#include <stdio.h>
#include <stdlib.h>

typedef struct c_node
{
    int data;
    struct c_node *next;
} listNode;

void push(listNode** list, int data){
    listNode* n = malloc(sizeof(listNode));       
    n->data = data;
    n->next = *list;
    *list = n;
}

void print(listNode *cll)
{
    int first = cll->data;
    do
    {
        printf("%d ",cll->data);
        cll = cll->next;
    } while (cll->data != first);
}

void listFRee(listNode ** list){
    listNode * current = *list, *prev;
    while(current){
        prev = current;
        current = current ->next;
        free(prev);
    }
    *list = NULL;
}

int main()
{
    listNode* cll;
    cll->next = cll;
    int n;
    int read;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&read);
        push(&cll,read);
        n--;
    }
    return 0;
}

