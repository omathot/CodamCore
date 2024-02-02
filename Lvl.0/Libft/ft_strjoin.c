/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oscarmathot <oscarmathot@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:50:19 by omathot           #+#    #+#             */
/*   Updated: 2023/02/08 11:34:18 by oscarmathot      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *str, char *buff)
{
	int		i;
	int		j;
	char	*full;

	i = 0;
	j = 0;
	if (!str || !buff)
		return (NULL);
	full = malloc(ft_strlen(str) + ft_strlen(buff) +1);
	if (!full)
		return (free(full), NULL);
	while (str[i])
	{
		full[i] = str[i];
		i++;
	}
	while (buff[j])
	{
		full[i] = buff[j];
		i++;
		j++;
	}
	full[i] = '\0';
	free (str);
	return (full);
}
