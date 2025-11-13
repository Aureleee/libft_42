#include "libft.h"

char *ft_strtrim(char const *s1, const char *s2)
{
	size_t start;
	size_t end;
	char *substr;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(s2, s1[start])) //will return NULL pointer is not find, else
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
