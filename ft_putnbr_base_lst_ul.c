#include "libft.h"

static int		ft_digitlen_base(unsigned long n, unsigned long baselen)
{
	unsigned long		ret;

	ret = 0;
	while (n != 0)
	{
		n = n / baselen;
		ret++;
	}
	return (ret);
}

t_list			*ft_putnbr_base_lst_ul(unsigned long n, unsigned long baselen, char *base, t_list **li)
{
	unsigned long		len;
	unsigned long		i;

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
