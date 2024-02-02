/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omathot <omathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:15:02 by oscarmathot       #+#    #+#             */
/*   Updated: 2023/01/30 10:44:25 by omathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
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

char	*ft_strdup(const char *s1)
{
	int		i;
	int		size;
	char	*c;

	i = 0;
	size = 0;
	while (s1[size])
		size++;
	c = malloc(sizeof(char) * (size + 1));
	if (!c)
		return (NULL);
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
