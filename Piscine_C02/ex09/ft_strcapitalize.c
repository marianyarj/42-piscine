/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:00:12 by made-ara          #+#    #+#             */
/*   Updated: 2023/08/24 11:26:39 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	retorno;

	i = 0;
	retorno = 1;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if ((str[i] >= '0' && str[i] <= '9'))
			retorno = 0;
		if (retorno == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			retorno = 0;
		}
		if (!(str[i] >= 'A' && str[i] <= 'Z' )
			&& !(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= '0' && str[i] <= '9'))
			retorno = 1;
		i++;
	}
	return (str);
}
