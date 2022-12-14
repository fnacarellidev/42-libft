/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnacarel <fnacarel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:53:23 by fnacarel          #+#    #+#             */
/*   Updated: 2022/12/14 20:53:32 by fnacarel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	free_matrix(void **matrix)
{
	int	i;
	int	matrix_len;

	i = 0;
	matrix_len = count_matrix(matrix);
	while (i < matrix_len)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
