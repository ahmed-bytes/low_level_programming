#include "header.h"
/**
 * main- Implement linked list
 * Return: 0 means success
 */

int main(void)
{
		Node *list1_head = NULL;

		list1_head = insert_node_head(list1_head, 5);
		list1_head = insert_node_head(list1_head, 3);
		list1_head = insert_node_head(list1_head, 30);
		list1_head = insert_node_tail(list1_head, 23);
		list1_head = insert_node_tail(list1_head, 10);

		print_list(list1_head);

		list1_head = delete_head_node(list1_head);
		list1_head = delete_head_tail(list1_head);

		printf("\nDeleting Nodes.... \n");
		print_list(list1_head);
		return (0);
}

void print_list(Node *head)
{
		Node *current;

		current = head;

		int i = 0;
		while (current != NULL)
		{
				printf("Node %d: %d\n", i, current->num);
				i++;
				current = current->next;
		}
}

Node *insert_node_head(Node *head, int value)
{
		Node *new_node = calloc(1, sizeof(Node));

		new_node->num = value;
		if (head == NULL)
				return new_node;

		new_node->next = head;

		return new_node;
}

Node *insert_node_tail(Node *head, int value)
{
		Node *new_node = calloc(1, sizeof(Node));

		new_node->num = value;
		if (head == NULL)
				return new_node;

		Node *current = head;
		while (current->next != NULL)
		{
				current = current->next;
		}
		current->next = new_node;
		return head;
}

Node *delete_head_node(Node *head)
{
		if (head == NULL)
				return NULL;

		Node *return_node = head->next;
		free(head);
		return return_node;
}

Node *delete_head_tail(Node *head)
{
		if (head == NULL)
				return NULL;
		else if (head->next == NULL)
		{
				free(head);
				return NULL;
		}

		Node *current = head;
		Node *prev = NULL;

		while (current->next != NULL)
		{
				prev = current;
				current = current->next;
		}
		prev->next = NULL;
		free(current);
		return head;
}
