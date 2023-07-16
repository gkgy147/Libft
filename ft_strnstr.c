/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:21:06 by grobert           #+#    #+#             */
/*   Updated: 2022/11/03 20:52:24 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (haystack[i] == *needle && len - i >= nlen
			&& ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
