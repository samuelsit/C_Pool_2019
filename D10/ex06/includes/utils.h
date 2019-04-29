/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssitruk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:22:27 by ssitruk           #+#    #+#             */
/*   Updated: 2019/02/26 20:36:12 by ssitruk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>

void	init_tab(int (*f[6])(int, int));
int		is_nb(char *str);
int		check_nb(int *nb1, int *nb2, char ***av);
int		badexpr(int nb1, int nb2);
int		addition(int nb1, int nb2);
int		substraction(int nb1, int nb2);
int		multiplication(int nb1, int nb2);
int		division(int nb1, int nb2);
int		modulo(int nb1, int nb2);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		check_op(char *op, int (*f[6])(int, int), int nb1, int nb2);
void	do_op(char **av);

#endif
