/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:44:11 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/10 17:44:13 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isprint(int c)
{
    if (126 >= c && c >= 32)
        return 0;
    else
        return 1;
}

int main(void)
{
int c = '\t';
printf("%d\n", ft_isprint(c));
}