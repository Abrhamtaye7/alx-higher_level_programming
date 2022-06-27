#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/*
 * File: lists.h
 *
 * Desc: This header file contains the structure defination for
 * the linked list and some function prototypes.
 *
 * Author: Gizachew Bayness (eleccrazy)
 *
 * Date Createe: Jun 27, 2022
 */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif