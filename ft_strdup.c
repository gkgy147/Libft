/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grobert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:04:05 by grobert           #+#    #+#             */
/*   Updated: 2022/11/04 14:13:58 by grobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*copy;
	size_t		s1_len;

	s1_len = ft_strlen(s1) + 1;
	copy = malloc(sizeof(char) * s1_len);
	if (!copy)
		return (NULL);
	copy = ft_memcpy(copy, s1, s1_len);
	return (copy);
}
