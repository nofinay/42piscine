/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypreedee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:14:19 by ypreedee          #+#    #+#             */
/*   Updated: 2023/06/10 18:21:16 by ypreedee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE      1
# define FALSE     0
# define SUCCESS   0
# define EVEN_MSG  "I have an even number of agrument.\n"
# define ODD_MSG   "I have an odd number of agruments.\n"
# define EVEN(x)   (x % 2 == 0)

typedef int			t_bool;
#endif
