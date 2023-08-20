/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 01:12:02 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 03:45:48 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	assign_array(int min, int max, int *range)
{
	int	i;

	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	range[i] = 0;
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min + 1) * sizeof(int));
	if (*range == NULL)
		return (-1);
	assign_array(min, max, *range);
	return (max - min);
}

// #include<stdio.h>
// int	main(void)
// {
// 	int	*range;
// 	int	i;

// 	i = ft_ultimate_range(&range, 2147483640, 2147483647);
// 	printf("%d\n", i);
// 	while (*range)
// 	{
// 		printf("%d", *range);
// 		range++;
// 	}
// 	return (0);
// }