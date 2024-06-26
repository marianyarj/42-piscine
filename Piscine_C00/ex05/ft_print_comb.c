/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:04:24 by made-ara          #+#    #+#             */
/*   Updated: 2023/08/15 15:08:13 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 < '8')
	{
		n2 = n1 + 1;
		while (n2 < '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				write (1, &n1, 1);
				write (1, &n2, 1);
				write (1, &n3, 1);
				n3++;
				if (n1 != '7')
					write(1, ", ", 2);
			}
			n2++;
		}		
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
