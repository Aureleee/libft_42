/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:20:50 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/16 21:48:44 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* // test main for ft_memcpy
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst1[16];
	char dst2[16];
	const char *src = "HelloWorld";
	ft_memcpy(dst1, src, 11);
	memcpy(dst2, src, 11);
	printf("ft_memcpy: dst=\"%s\" | memcpy: dst=\"%s\"\n", dst1, dst2);
	return (0);
} */
