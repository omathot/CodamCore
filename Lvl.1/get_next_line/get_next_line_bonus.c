/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omathot <omathot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:47:48 by omathot           #+#    #+#             */
/*   Updated: 2023/02/03 09:53:31 by omathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_line(int fd, char *str)
{
	int		bytes_read;
	char	buffer[BUFFER_SIZE + 1];

	bytes_read = 1;
	if (!str)
		str = ft_strdup("\0");
	if (!str)
		return (NULL);
	buffer[0] = '\0';
	while (!ft_strchr(buffer, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(str), NULL);
		buffer[bytes_read] = '\0';
		str = ft_strjoin(str, buffer);
		if (!str)
			return (NULL);
	}
	if (!str[0])
		return (free(str), NULL);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buff;

	if (fd < 0 || BUFFER_SIZE < 0 || BUFFER_SIZE > INT_MAX)
		return (NULL);
	str = read_line(fd, str);
	if (!str)
		return (NULL);
	buff = get_current(str);
	if (!buff)
	{
		free (str);
		str = NULL;
		return (NULL);
	}
	str = manage_buff(str);
	return (buff);
}

char	*get_current(char *str)
{
	size_t	i;
	char	*current;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i += 2;
	else
		i += 1;
	current = malloc(i);
	if (!current)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		current[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		current[i++] = '\n';
	current[i] = '\0';
	return (current);
}

char	*manage_buff(char *str)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	j = ft_strlen(&str[i]);
	new_str = malloc(j + 1);
	if (!new_str)
		return (free(str), NULL);
	ft_strcpy(new_str, str + i);
	free(str);
	return (new_str);
}

char	*ft_strcpy(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	if (!s2)
		return (NULL);
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
