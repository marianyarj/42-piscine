/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ara <made-ara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:51:13 by made-ara          #+#    #+#             */
/*   Updated: 2023/08/29 12:46:09 by made-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && to_find != '\0')
	{
		while (str [i] == to_find[j])
		{
			if (j == 0)
			{
				aux = str + i;
				return (aux);
			}
			j++;
		}
		i++;
	}
	return (0);
}
