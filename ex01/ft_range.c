/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:32:00 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 13:01:13 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	create_array(int min, int max, int *malloc_array_pointer)
{
	int	i;
	int	range;

	i = 0;
	range = max - min;
	while (i < range)
	{
		malloc_array_pointer[i] = min;
		min++;
		i++;
	}
}

int	*ft_range(int min, int max)
{
	int	*malloc_array_pointer;

	if (min >= max)
		return (NULL);
	malloc_array_pointer = (int *)malloc((max - min) * sizeof(int));
	create_array(min, max, malloc_array_pointer);
	return (malloc_array_pointer);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	*arr;
// 	int	*temp;
// 	int	i;

// 	arr = ft_range(1, 4);
// 	temp = arr;
// 	i = 0;
// 	while (i < 4 - 1)
// 	{
// 		printf("%d ", temp[i]);
//         i++;
// 	}
// 	free(arr);
// 	return (0);
// }