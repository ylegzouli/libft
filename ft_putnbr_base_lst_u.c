#include "libft.h"

static int		ft_digitlen_base(unsigned int n, unsigned int baselen)
{
	unsigned int		ret;

	ret = 0;
	while (n != 0)
	{
		n = n / baselen;
		ret++;
	}
	return (ret);
}

t_list			*ft_putnbr_base_lst_u(unsigned int n, unsigned int baselen, char *base, t_list **li)
{
	unsigned int		len;
	unsigned int		i;

	i = 0;
	len = ft_digitlen_base(n, baselen);
	if (n == 0)
		return (ft_lstnew(NULL));
	while (i < len)
	{
		ft_lstadd_front(li, ft_lstnew_malloc(&base[n % baselen], 1));
		n = n / baselen;
		i++;
	}
	return (*li);
}
