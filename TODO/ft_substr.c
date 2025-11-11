/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:46:02 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/11 22:27:05 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		subs = ft_calloc(1, sizeof(char));
		if (!subs)
			return (NULL);
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (new_len > len)
			new_len = len;
		subs = malloc(new_len + 1);
		if (!subs)
			return (NULL);
		subs[new_len] = '\0';
		while (new_len-- > 0)
			subs[new_len] = s[start + new_len];
	}
	return (subs);
}
