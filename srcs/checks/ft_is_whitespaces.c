/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespaces.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:14:14 by ldutriez          #+#    #+#             */
/*   Updated: 2021/05/25 12:42:02 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_is_whitespaces(char p_c)
{
	if (p_c == '\t' || p_c == '\v' || p_c == '\n' || p_c == '\r'
		|| p_c == '\f' || p_c == ' ')
		return (true);
	return (false);
}