/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:37:22 by fbelando          #+#    #+#             */
/*   Updated: 2023/12/06 20:40:18 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_LIST
# define T_LIST

typedef struct	s_list
{
    struct s_list 	*next;
    void			*data;
}				t_list;

#endif
