/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:01:08 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/04 17:14:30 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_values(int h, int i, int j, int k)
{
	if ((i + h * 10) < (k + j * 10))
	{
		ft_putchar(h);
		ft_putchar(i);
		ft_putchar(' ');
		ft_putchar(j);
		ft_putchar(k);
		if (!(h == '9' && i == '8' && j == '9' && k == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ultimo_ciclo(int h, int i, int j, int k)
{
	while (k <= '9')
	{
		print_values(h, i, j, k);
		k++;
	}
}

void	ft_print_comb2(void)
{
	int	h;
	int	i;
	int	j;
	int	k;

	h = '0';
	while (h <= '9')
	{
		i = '0';
		while (i <= '9')
		{
			j = '0';
			while (j <= '9')
			{
				k = '0';
				ultimo_ciclo(h, i, j, k);
				j++;
			}
			i++;
		}
		h++;
	}
}
