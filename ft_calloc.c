/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 20:57:49 by fnacarel          #+#    #+#             */
/*   Updated: 2022/08/31 22:14:50 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	else if (nmemb * size > 2147483647)
		return (NULL);
	ptr = (void *) malloc(nmemb * size);
	while (i < size * nmemb)
	{
		*((char *) ptr + i) = '\0';
		i++;
	}
	return (ptr);
}
//
//int main()
//{
//	char	*str;
//	char	*ptr;
//
//	str = (char *) ft_calloc(30, 1);
//	ptr = (char *) calloc(30, 1);
//	if (!ptr)
//		write(1, "NULL", 4);
//	else
//		write(1, str, 30);
//	if (!str)
//		write(1, "NULL", 4);
//	else
//		write(1, str, 30);
//	printf("%lu\n", sizeof(str));
//	printf("%lu\n", sizeof(ptr));
//	printf("%d\n", *str == *ptr);
//}
