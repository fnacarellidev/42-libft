/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 19:59:17 by fnacarel          #+#    #+#             */
/*   Updated: 2022/08/31 20:49:24 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	ptr = 0;
	if (*little == '\0')
		return ((char *) big);
	while (*(big + i) && i < len)
	{
		if (*(big + i) == *(little + 0))
		{
			j = 0;
			while (*(big + i + j) == *(little + j))
			{
				if (i + j > len)
					return (ptr);
				j++;
			}
			if (j == ft_strlen(little))
				return ((char *) big + i);
		}
		i++;
	}
	return (ptr);
}
