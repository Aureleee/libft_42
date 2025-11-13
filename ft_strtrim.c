/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:45:59 by ahabbard          #+#    #+#             */
/*   Updated: 2025/11/13 14:56:07 by ahabbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, const char *s2)
{
	size_t	start;
	size_t	end;
	char	*substr;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(s2, s1[start]))
		// will return NULL pointer is not find, else
		start++;
	end = ft_strlen(s1);
	while (s1[end] && ft_strchr(s2, s1[end]))
		end--;
	if (start - end > 0)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		return (substr);
	}
	substr = ft_substr(s1, start, end);
	return (substr);
}
/* we need to trim the frist sequence of character present in s2
 * we need to handel the bellow cases:
 * if s1 = NULL -> NULL
 * if s2 = NULL -> copy of s2
 * if start > end -> malloc = 0
 */