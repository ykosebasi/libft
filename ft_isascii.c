/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykosebas <ykosebas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:43:56 by ykosebas          #+#    #+#             */
/*   Updated: 2026/01/10 18:42:53 by ykosebas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isascii(int c)
{
   if (0 <= c && c <= 127)
        return 1;
    else
        return 0; 
}

int main(void)
{
    int c ='a';
    printf("%d\n", ft_isascii(c)); 
    return 0;
}