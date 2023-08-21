/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luebina <luebina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 04:07:59 by luebina           #+#    #+#             */
/*   Updated: 2023/08/21 11:58:10 by luebina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		result;
	int		nbr_index;
	char	malloc_pointer;

	i = 1;
	result = 0;
	while (*nbr == '\t' || *nbr == '\n' || *nbr == '\v'
		|| *nbr == '\r' || *nbr == '\f' || *nbr == ' ')
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			i = i * -1;
		nbr++;
	}
	while ('0' <= nbr[nbr_index] && nbr[nbr_index] <= '9')
		nbr_index++;
	malloc_pointer = (char *)malloc(nbr_index * sizeof(char));
	ft_convert_base(nbr, base_from, base_to);
	return (malloc_pointer);
}
