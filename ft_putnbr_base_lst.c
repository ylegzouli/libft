#include "libft.h"

static int		ft_digitlen_base(int n, int baselen)
{
	int		ret;

	ret = 0;
	while (n != 0)
	{
		n = n / baselen;
		ret++;
	}
	return (ret);
}

t_list			*ft_putnbr_base_lst(int n, int baselen, char *base, t_list **li)
{
	int		len;
	int		i;

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
