/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:12:46 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/16 22:51:53 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;
	size_t			total_size;

	total_size = count * size;
	if (size != 0 && total_size / size != count)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
// test main for ft_calloc
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main_calloc(void)
{
	size_t			n;
	unsigned char	*p1;
	unsigned char	*p2;

	n = 8;
	p1 = ft_calloc(n, 1);
	p2 = calloc(n, 1);
	if (!p1 || !p2) { printf("alloc failed\n"); return (1); }
	printf("ft_calloc memcmp= %d\n", memcmp(p1, p2, n));
	free(p1); free(p2);
	return (0);
}
*/
