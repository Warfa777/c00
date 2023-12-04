/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sliberat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:54:19 by sliberat          #+#    #+#             */
/*   Updated: 2023/12/03 17:54:40 by sliberat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char numero[12]; // un int contiene 4byte quindi massimo 11 cifre e il -
    int i = 0;
    
    if (nb < 0) //se il numero e´ negativo aggiungi un meno dietro e rendilo positivo
    {
        write(1, "-", 1);
        nb = -nb;
    }
	
	while (nb > 0) // se e´ positivo guarda le singole cifre del numero
	{
	   numero[i] = '0' + (nb % 10); // la cifra all' indice e' il resto di nb
	   nb /= 10; // poi lo divido per 10 per analizzare la potenza di 10 successiva
	   write(1, &numero[i], 1);
	   i++;
	}
}

int main()
{
	int numero = 342;
	ft_putnbr(numero);
	return 0;
}
