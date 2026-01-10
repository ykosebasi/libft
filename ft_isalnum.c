/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:35:42 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/10 18:40:40 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum (int c)
{
    if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
        return 1;
    else if('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}

int main(void)
{
    int c = 'y';
    printf("%d\n", ft_isalnum(c));
}
