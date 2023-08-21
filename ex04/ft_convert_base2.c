/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 03:37:28 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 11:41:02 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	reverse_str(char *str, int length)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = length - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

int	int_to_str(int num, char *str)
{
	int	i;
	int	is_neg;

	i = 0;
	is_neg = 0;
	if (num < 0)
	{
		num = -num;
		is_neg = 1;
	}
	while (num > 0)
	{
		str[i++] = '0' + (num % 10);
		num /= 10;
	}
	if (is_neg)
	{
		str[i++] = '-';
	}
	reverse_str(str, i);
	return (i);
}

void	ft_convert_base(int num)
{
	char	str[12];
	int		length;

	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	length = int_to_str(num, str);
	write(1, str, length);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }