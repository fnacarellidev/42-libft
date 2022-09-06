/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:17:41 by fnacarel          #+#    #+#             */
/*   Updated: 2022/09/06 16:55:36 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}
//
//int main()
//{
//	t_list *node1;
//	t_list *node2;
//	t_list *node3;
//
//	node1 = malloc(sizeof(t_list));
//	node2 = malloc(sizeof(t_list));
//	node3 = malloc(sizeof(t_list));
//
//	node1 -> next = node2;
//	node2 -> next = node3;
//	node3 -> next = 0;
//
//	printf("%d\n", ft_lstsize(node1));
//}
