/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:17:59 by dpestana          #+#    #+#             */
/*   Updated: 2022/02/09 20:17:59 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

size_t	ft_strlen(const char *s)
{
	int	inc;

	inc = 0;
	while (*(s + inc) != '\0')
		inc++;
	return ((size_t)inc);
}
