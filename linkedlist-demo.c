#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int data;
    struct element *next;
} Element;

typedef struct {
    Element *head;
    Element *tail;
} LinkedList;

Element * getHead(LinkedList list) {
    return list.head;
}

Element * getNext(Element *elem) {
    if(elem) {
        return elem->next;
    }
    return NULL;
}

void appendToList(int data, LinkedList *list) {
    Element **head = &(list->head);
    Element **tail = &(list->tail);
    Element * newElem = (Element *) malloc (sizeof(Element));
    newElem->next = NULL;

    newElem->data = data;

    if((!*head)) {
        newElem->next = *head;
        *tail = *head = newElem;
    }
    else {
        newElem->next = NULL;
        (*tail)->next = newElem;
        *tail = newElem;
    }
}

/*
void removeHead(LinkedList *list) {

}
*/

int main(int argc, char **argv) {
    LinkedList *list;
    int test_data = 3;
    
    if(!(list = (LinkedList *)malloc (sizeof(LinkedList)))) {
        printf("couldn't initialise linked list\n");
        exit(1);
    }
    list->head = NULL;
    list->tail = NULL;

    appendToList(test_data, list);

    printf("%d", getHead(*list)->data);
    free(getHead(*list));
    free(list);

    return 0;
}