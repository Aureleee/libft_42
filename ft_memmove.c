/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:21:51 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 22:19:28 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (n-- > 0)
			d[n] = s[n];
	return (dest);
}

/* 
// test main for ft_memmove
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char a1[32] = "1234567890";
	char b1[32] = "1234567890";
	ft_memmove(a1 + 2, a1, 6); 
	memmove(b1 + 2, b1, 6);
	printf("forward overlap: ft=\"%s\" | lib=\"%s\"\n", a1, b1);

	char a2[32] = "1234567890";
	char b2[32] = "1234567890";
	ft_memmove(a2, a2 + 2, 6); 
	memmove(b2, b2 + 2, 6);
	printf("backward overlap: ft=\"%s\" | lib=\"%s\"\n", a2, b2);
	return 0;
} */

