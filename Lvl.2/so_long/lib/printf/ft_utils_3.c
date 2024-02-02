/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omathot <omathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:02:33 by omathot           #+#    #+#             */
/*   Updated: 2022/12/21 11:04:53 by omathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*make_zero(char *str)
{
	str[0] = 48;
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	k;

	k = n;
	i = ft_count(k);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (k == 0)
		return (make_zero(str));
	if (k < 0)
	{
		str[0] = '-';
		k *= -1;
	}
	while (k > 0)
	{
		str[i--] = (k % 10) + '0';
		k /= 10;
	}
	return (str);
}
