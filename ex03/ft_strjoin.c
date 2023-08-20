/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 02:01:29 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 03:42:09 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	assign_memory(char **strs, char *malloc_pointer, char *sep)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (strs[0][i])
	{
		malloc_pointer[j] = strs[0][i];
		if (strs[0][i + 1] != '\0')
		{
			while (sep[k])
			{
				j++;
				malloc_pointer[j] = sep[k];
				k++;
			}
		}
		k = 0;
		i++;
		j++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*malloc_pointer;
	int		sep_index;

	sep_index = 0;
	if (size == 0)
	{
		malloc_pointer = (char *)malloc(1);
		malloc_pointer[0] = '\0';
		return (malloc_pointer);
	}
	while (sep[sep_index])
		sep_index++;
	malloc_pointer = (char *)malloc(size * (sep_index + 1) - sep_index);
	assign_memory(strs, malloc_pointer, sep);
	return (malloc_pointer);
}

// #include<stdio.h>
// int main() {
//     char strs[] = "abcd";
// 	char *ptr = strs;
//     char sep[] = "-|-";
//     char *result = ft_strjoin(4, &ptr, sep);

//     if (result != NULL) {
//         printf("Concatenated String: %s\n", result);
//         free(result); // メモリ解放
//     } else {
//         printf("Memory allocation error\n");
//     }
//     return 0;
// }