#ifndef MAIN_H
#define MAIN_H

// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures
typedef struct node
{
		int num;
		struct node *next;
} Node;

// Prototypes
void print_list(Node *head);
Node *insert_node_head(Node *head, int value);
Node *insert_node_tail(Node *head, int value);
Node *delete_head_node(Node *head);
Node *delete_head_tail(Node *head);

#endif
