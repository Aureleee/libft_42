/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:13:03 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/11 21:23:16 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*sdup;
	size_t	i;

	n = 0;
	while (s1[n])
		n++;
	sdup = malloc(sizeof(char) * (n + 1));
	if (!sdup)
		return (NULL);
	i = 0;
	while (i < n)
	{
		sdup[i] = s1[i];
		i++;
	}
	sdup[n] = '\0';
	return (sdup);
}
