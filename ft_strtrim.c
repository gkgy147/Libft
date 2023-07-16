/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:53:46 by grobert           #+#    #+#             */
/*   Updated: 2022/11/04 20:25:40 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*static int	in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (s1[end] && in_set(s1[end], set))
		end--;
	if (end == 1)
		return (ft_substr(s1, start, 0));
	return (ft_substr(s1, start, (end - start + 1)));
}*/

//find and cut head&tail of string by use strrchr
//use malloc (len is index)
static char	*ft_start(char *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (s1 + i);
}

static size_t	ft_end(char *s1, char const *set)
{
	size_t	len;
	char	*str;

	str = ft_start(s1, set);
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len]) == NULL)
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*i;
	char	*r;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	i = ft_start(str, set);
	r = malloc(ft_end(str, set) + 2);
	if (!r)
		return (NULL);
	ft_strlcpy(r, i, ft_end(str, set) + 2);
	return (r);
}
