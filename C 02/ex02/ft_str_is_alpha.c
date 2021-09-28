/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:05:25 by sspina            #+#    #+#             */
/*   Updated: 2021/09/15 16:11:00 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	n;
	int	nope;

	nope = 1;
	n = 0;
	while (str[n])
	{
		if ((str[n] >= 65 && str[n] <= 90) || (str[n] >= 97 && str[n] <= 122))
			nope = 1;
		else
			return (0);
		n++;
	}
	return (nope);
}
