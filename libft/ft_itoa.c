/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchiang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 16:43:01 by jchiang-          #+#    #+#             */
/*   Updated: 2018/12/12 20:14:55 by jchiang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*s;
	size_t		len;
	int			nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 0;
	nb = n;
	while (nb /= 10)
		len++;
	len = (n < 0) ? len + 2 : len + 1;
	if (!(s = ft_strnew(len)))
		return (0);
	nb = (n < 0) ? -n : n;
	s[--len] = nb % 10 + '0';
	while (nb /= 10)
		s[--len] = nb % 10 + '0';
	if (n < 0)
		s[0] = '-';
	return (s);
}
