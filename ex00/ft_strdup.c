/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:25:28 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 12:23:45 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strdup(char *str)
{
	char	*string;
	int		length;

	length = str_length(str);
	string = (char *)malloc((length + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	ft_strcpy(string, str);
	return (string);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char	*abc;

// 	abc = ft_strdup("lahsdfljasdfajfaklsjflk;aj234235236--+==!@#$^&*");
// 	printf("%s", abc);
// 	free(abc);
// }