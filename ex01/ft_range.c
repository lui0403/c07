/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:32:00 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 03:46:34 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	create_array(int min, int max, int *malloc_array_pointer)
{
	int	i;

	i = 0;
	while (min < max)
	{
		malloc_array_pointer[i] = min;
		min++;
		i++;
	}
	malloc_array_pointer[i] = 0;
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

// 	arr = ft_range(3, 5);
// 	temp = arr;
// 	while (*temp)
// 	{
// 		printf("%d ", *temp);
//         temp ++;
// 	}
// 	free(arr);
// }