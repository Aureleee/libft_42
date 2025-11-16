/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:19 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/16 21:43:31 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenint(int i)
{
	size_t	lenght;

	lenght = 0;
	if (!i)
		return (1);
	while (i)
	{
		i /= 10;
		lenght++;
	}
	return (lenght);
}

static void	ft_pos_itoa(long n, char *dst, int start, int length)
{
	dst[length] = 0;
	while (length > start)
	{
		length--;
		dst[length] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	len_n;
	char	*str;
	int		start;
	long	num;

	start = 0;
	num = n;
	len_n = ft_lenint(n);
	if (num < 0)
	{
		num = -num;
		len_n++;
		start = 1;
	}
	str = malloc(len_n + 1);
	if (!str)
		return (NULL);
	if (start)
		str[0] = '-';
	ft_pos_itoa(num, str, start, len_n);
	return (str);
}

/* #include <stdio.h>

int	main(int a, char **b)
{
	int		i;
	int		value;
	char	*res;

	i = 1;
	while (i < a)
	{
		value = atoi(b[i]);
		res = ft_itoa(value);
		printf("input:\t%d\tres:%s\n", value, res);
		free(res);
		i++;
	}
	return (0);
} */
