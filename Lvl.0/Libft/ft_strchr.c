/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:30:28 by omathot           #+#    #+#             */
/*   Updated: 2023/03/09 00:54:48 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (!str)
		return (0);
	if (str[i] == (char) c)
		return ((char *) &str[i]);
	while (i--)
		if (str[i] == (char) c)
			return ((char *)&str[i]);
	return (0);
}
