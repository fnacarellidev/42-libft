/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 02:14:05 by fnacarel          #+#    #+#             */
/*   Updated: 2022/08/31 02:25:18 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*first_occurence;

	i = 0;
	first_occurence = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			first_occurence = (s + i);
		i++;
	}
	if (c == 0)
		first_occurence = (s + ft_strlen(s));
	return ((char *) first_occurence);
}
