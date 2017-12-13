/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjacobi <jjacobi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:02:35 by jjacobi           #+#    #+#             */
/*   Updated: 2017/12/13 21:35:05 by jjacobi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct		s_coord
					t_coord;

typedef struct		s_coord
{
	int				y;
	int				x;
	int				z;
	t_coord			*right;
	t_coord			*down;
}					t_coord;

typedef struct		s_xy
{
	int				x;
	int				y;
}					t_xy;

typedef struct		s_fdf
{
	int				window_x;
	int				window_y;
	void			*mlx;
	void			*windows;
	void			*image;
	void			*imgdata;
	int				img_bits_per_pixel;
	int				img_octet_per_pixel;
	int				img_size_line;
	int				img_endian;
	int				x_offset;
	int				y_offset;
	double			y_factor;
	double			x_factor;
	double			z_factor;
	double			zoom;
	t_list			*coords;
}					t_fdf;

int					read_file(char **av, t_fdf *fdf);
void				write_error(char *str);
void				build_connections(t_list *coords);
void				treatment(t_fdf *fdf);
int					key_parser(int keycode, t_fdf *fdf);

#endif