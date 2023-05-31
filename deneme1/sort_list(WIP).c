#include "list.h"
#include <stdio.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list tmp;
	t_list *i = lst;
	while (i->next)
	{
		if( !cmp (i->data,i->next->data) )
		{
			tmp.data = lst -> data;
			lst->data = lst->next->data;
			lst->next->data = tmp.data;
			sort_list(lst, cmp);
		}
		i = i->next;
	}


	return lst;
}

int	ascending(int a, int b)
{
	return (a<=b);
}

int main()
{
	t_list *lst;

	t_list a;
	a.data = 31;

	t_list b;
	b.data = 30;

	t_list c;
	c.data = 12;

	a.next = &b;
	b.next = &c;
	c.next=0;

	lst = &a;

	sort_list(lst, ascending);

		while(lst->data,lst)
		{
			printf("%d\n",lst->data);
			lst = lst->next;
		}

}
