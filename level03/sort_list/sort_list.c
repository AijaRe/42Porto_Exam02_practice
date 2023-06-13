/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arepsa <arepsa@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:19:43 by arepsa            #+#    #+#             */
/*   Updated: 2023/06/12 11:38:32 by arepsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int temp;
	t_list *head;

	head = lst;
	while (lst->next != 0)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	lst = head;
	return (lst);
}

int ascending_order(int a, int b)
{
    return (a <= b);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Create a test list: 7 -> 3 -> 9 
    t_list *list = malloc(sizeof(t_list));
    list->data = 7;
    list->next = malloc(sizeof(t_list));
    list->next->data = 3;
    list->next->next = malloc(sizeof(t_list));
    list->next->next->data = 9;
    list->next->next->next = NULL;

    // Sort the list in ascending order
    t_list *sortedListAsc = sort_list(list, ascending_order);

    // Print the sorted list
    printf("Ascending Order: ");
    t_list *current = sortedListAsc;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Free the dynamically allocated memory
    current = list;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
    }
