/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:23:27 by fnacarel          #+#    #+#             */
/*   Updated: 2022/09/02 09:55:54 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		fullbuffer;

	if (start > ft_strlen(s))
		len = 0;
	fullbuffer = (len + 1);
	substr = (char *) malloc(sizeof(*substr) * fullbuffer);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (s + start), fullbuffer);
	return (substr);
}
