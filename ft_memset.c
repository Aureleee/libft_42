/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:21:54 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/11 23:45:51 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
1