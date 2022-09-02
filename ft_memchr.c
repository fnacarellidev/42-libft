/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 03:20:48 by fnacarel          #+#    #+#             */
/*   Updated: 2022/08/31 17:19:31 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*first_occurence_address;

	first_occurence_address = 0;
	i = 0;
	c = (unsigned char) c;
	while ((*((char *) s) + i) && i < n)
	{
		if (*(((unsigned char *) s) + i) == c)
			return ((void *) s + i);
		i++;
	}
	return ((void *) first_occurence_address);
}
