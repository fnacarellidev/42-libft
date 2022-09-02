/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 18:11:24 by fnacarel          #+#    #+#             */
/*   Updated: 2022/08/31 19:40:06 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *) s1 + i) - *((unsigned char *) s2 + i))
		{
			if (*((unsigned char *) s1 + i) - *((unsigned char *) s2 + i) > 0)
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
//
//int main()
//{
//	char a[] = "abcdefghij";
//	char b[] = "abcdefgxyz";
//
//	printf("%d\n", ft_memcmp(a, b, 7));
//	printf("%d\n", memcmp(a, b, 7));
//}
