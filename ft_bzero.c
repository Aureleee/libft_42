/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:48:32 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/10 20:19:23 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	index;
	char	*ptr;

	ptr = (char *)str;
	index = 0;
	while (index < n)
	{
		ptr[index] = '\0';
		index++;
	}
}
