/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 16:59:17 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/10 17:00:13 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    if ('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}

int main(void)
{
int c = '2';
printf("%d\n", ft_isdigit(c));
}