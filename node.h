#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int id;
    char *label;
    char *shape;
    char *color;
    char *style;
    int num_children;
    struct Node **children; 
} Node;

typedef struct List_Node {
    Node* node;
    struct List_Node* next;
} List_Node;


List_Node *create_empty_list();
Node* create_node(char *label, char *shape, char *style,char *color, int num_children, ...);
void print_node(FILE *out, Node *node);
void print_dot(Node *root);
char* append(int n, ...);
List_Node* create_list(Node* node);
List_Node* append_lists(List_Node* list1, List_Node* list2);
List_Node* add_to_list(Node* node, List_Node* list);
int list_length(List_Node* list);
Node** convert_to_array(List_Node* list);

#endif /* NODE_H */
