/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:12:46 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:11:09 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
// test main for ft_calloc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int main_calloc(void)
{
	size_t n = 8;
	unsigned char *p1 = ft_calloc(n, 1);
	unsigned char *p2 = calloc(n, 1);
	if (!p1 || !p2) { printf("alloc failed\n"); return 1; }
	printf("ft_calloc memcmp= %d\n", memcmp(p1, p2, n));
	free(p1); free(p2);
	return 0;
}
*/
