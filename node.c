#include "node.h"




int node_id = 0;

List_Node *create_empty_list() {
    return NULL;
}

Node* create_node(char *label, char *shape, char *style,char *color, int num_children, ...) {
    Node *node = malloc(sizeof(Node));
    node->id = node_id++;
    node->label = label;
    node->shape = shape;
    node->style = style;
    node->color = color;
    node->num_children = num_children;
    node->children = malloc(sizeof(Node*) * num_children);
    
    va_list args;
    va_start(args, num_children);
    
    for (int i = 0; i < num_children; i++) {
        node->children[i] = va_arg(args, Node*);
    }

    va_end(args);
    return node;
}

Node* create_node_array(char *label, char *shape, char *style, char *color, int num_children, Node** children) {
    Node *node = malloc(sizeof(Node));
    node->id = node_id++;
    node->label = label;
    node->shape = shape;
    node->style = style;
    node->color = color;
    node->num_children = num_children;
    node->children = malloc(sizeof(Node*) * num_children);
    
    for (int i = 0; i < num_children; i++) {
        node->children[i] = children[i];
    }

    return node;
}

void print_node(FILE *out, Node *node) {
    fprintf(out, "  node_%d [label=\"%s\"", node->id, node->label);
    if (node->shape) {
        fprintf(out, " shape=%s", node->shape);
    }
    if (node->style) {
        fprintf(out, " style=%s", node->style);
    }
    fprintf(out, "];\n");
    for (int i = 0; i < node->num_children; i++) {
        fprintf(out, "  node_%d -> node_%d;\n", node->id, node->children[i]->id);
        print_node(out, node->children[i]);
    }
}

void print_dot(Node *root) {
    FILE *out = fopen("mon_programme.dot", "w");
    fprintf(out, "digraph mon_programme {\n");
    print_node(out, root);
    fprintf(out, "}\n");
    fclose(out);
}

char* append(int n, ...){
	
	va_list va;
	va_start(va,n);
	int size;
	for (int i = 0; i < n ; i++){
		size += strlen(va_arg(va,char*)); 
	}
	va_end(va);
	char* res = malloc((size + 1)*sizeof(char));
	
	va_start(va,n);
	for (int i = 0; i < n ; i++){
		strcat(res, va_arg(va,char*));
	}
	va_end(va);
	return res;
}



List_Node* create_list(Node* node) {
    List_Node* list_node = (List_Node*) malloc(sizeof(List_Node));
    list_node->node = node;
    list_node->next = NULL;
    return list_node;
}


List_Node* add_to_list(Node* node, List_Node* list) {
    List_Node* new_list_node = create_list(node);
    new_list_node->next = list;
    return new_list_node;
}


List_Node* append_lists(List_Node* list1, List_Node* list2) {
    if(list1 == NULL) {
        return list2;
    }
    else if(list2 == NULL) {
        return list1;
    }
    else {
        List_Node* temp = list1;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = list2;
        return list1;
    }
}


int list_length(List_Node* list) {
    int count = 0;
    List_Node* temp = list;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}


Node** convert_to_array(List_Node* list) {
    int length = list_length(list);
    Node** array = (Node**) malloc(length * sizeof(Node*));
    int i = 0;
    List_Node* temp = list;
    while(temp != NULL) {
        array[i] = temp->node;
        i++;
        temp = temp->next;
    }
    return array;
}

