/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 17:27:54 by asantiag          #+#    #+#             */
/*   Updated: 2019/03/02 17:58:44 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int beg;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
	{
		beg = nb;
		while (power > 1)
		{
			nb = nb * beg;
			power--;
		}
		return (nb);
	}
}
