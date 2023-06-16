#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}
/*
void	to_upper(void *ch)
{
	char *c;

	c = (char *)ch;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	t_list *list = malloc(sizeof(t_list));
	char *data1 = malloc(sizeof(char));
	char *data2 = malloc(sizeof(char));
	*data1 = 'b';
	*data2 = 'A';
	list->data = data1;
	list->next = malloc(sizeof(t_list));
	list->next->data = data2;
	list->next->next = NULL;

	printf("Before: %c\n", *(char *)list->data);
	printf("Before 2: %c\n", *(char *)list->next->data);
	ft_list_foreach(list, to_upper);
	printf("After: %c\n", *(char *)list->data);
	printf("After 2: %c\n", *(char *)list->next->data);

	free(data1);
    free(data2);
    free(list->next);
    free(list);
	return(0);
}*/