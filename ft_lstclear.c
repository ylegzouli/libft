#include "libft.h"

void	ft_lstclear(t_list **alst, void (*del)(void *))
{
	t_list	*lst;

	while (*alst)
	{
		lst = *alst;
		*alst = (*alst)->next;
		del(lst->content, lst->content_size);
		free(lst);
	}
}
