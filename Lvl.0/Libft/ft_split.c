/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: omathot <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 09:25:57 by omathot       #+#    #+#                 */
/*   Updated: 2022/10/26 11:35:10 by omathot       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size(const char *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **str, int j)
{
	while (j-- > 0)
		free(str[j]);
	free(str);
}

static char	**ft_split2(char **str, int word, char c, const char *s)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = -1;
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (str[j] == NULL)
		{
			ft_free(str, j);
			return (NULL);
		}
		i += size;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		word;

	word = ft_count(s, c);
	str = malloc((word + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (ft_split2(str, word, c, s));
}
