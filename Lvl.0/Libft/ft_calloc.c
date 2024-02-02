/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: omathot <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 12:59:02 by omathot       #+#    #+#                 */
/*   Updated: 2022/10/18 11:09:36 by omathot       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(sizeof(char) * (count * size));
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
