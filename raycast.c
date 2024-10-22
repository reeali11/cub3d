/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reeali <reeali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:10:57 by reeali            #+#    #+#             */
/*   Updated: 2024/08/12 15:22:58 by reeali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

void	get_wall_hit(t_all *all, char **map)
{
	while (all->ray->hit == 0)
	{
		if (all->ray->sidedistx < all->ray->sidedisty)
		{
			all->ray->sidedistx += all->ray->deltadistx;
			all->ray->mapx += all->pl->stepx;
			all->ray->side = 0;
		}
		else
		{
			all->ray->sidedisty += all->ray->deltadisty;
			all->ray->mapy += all->pl->stepy;
			all->ray->side = 1;
		}
		if (map[all->ray->mapx][all->ray->mapy] != '0' &&
				map[all->ray->mapx][all->ray->mapy] != 'P')
			all->ray->hit = 1;
	}
}

void	get_walls(t_all *all, int y, int x, int ii)
{
	all->ray->wallx = (double)all->ray->wallx - (int)all->ray->wallx;
	all->mlx->texx = (int)(all->ray->wallx * (double)64);
	if (all->ray->side == 0 && all->ray->raydirx > 0)
		all->mlx->texx = 64 - all->mlx->texx - 1;
	if (all->ray->side == 1 && all->ray->raydiry < 0)
		all->mlx->texx = 64 - all->mlx->texx - 1;
	all->ray->step = 1.0 * 64 / all->mlx->lineheight;
	all->ray->texpos = (all->mlx->drawstart - ((WIN_HEIGHT / 2)
				+ all->ray->updown) + all->mlx->lineheight / 2)
		* all->ray->step;
	y = all->mlx->drawstart;
	while (y < all->mlx->drawend)
	{
		all->mlx->texy = (int)all->ray->texpos & (64 - 1);
		all->ray->texpos += all->ray->step;
		gettexture(all, ii);
		all->mlx->buffer[y][x] = all->ray->color;
		y++;
	}
}

void	initimgs(t_all *all)
{
	int	xx;

	xx = 0;
	all->mlx->tex = mlx_xpm_file_to_image(all->mlx
			->mlx, all->textures[0], &all->mlx->w, &all->mlx->h);
	all->mlx->text = (int *)mlx_get_data_addr(all->mlx
			->tex, &all->mlx->b, &all->mlx->h, &all->mlx->w);
	all->mlx->tex2 = mlx_xpm_file_to_image(all->mlx
			->mlx, all->textures[1], &all->mlx->w, &all->mlx->h);
	all->mlx->text2 = (int *)mlx_get_data_addr(all->mlx
			->tex2, &all->mlx->b, &all->mlx->h, &all->mlx->w);
	extra_imgs(all);
	all->mlx->buffer = malloc(sizeof(int *) * WIN_HEIGHT);
	while (xx < WIN_HEIGHT)
	{
		all->mlx->buffer[xx] = malloc(sizeof(int) * WIN_WIDTH);
		xx++;
	}
}

void	clearbuffer(t_all *all)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < WIN_HEIGHT)
	{
		j = 0;
		while (j < WIN_WIDTH)
		{
			all->mlx->buffer[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ray_cast(t_all *all, char **map)
{
	int	ii;
	int	x;
	int	y;

	ii = 0;
	x = 0;
	y = 0;
	clearbuffer(all);
	while (x < WIN_WIDTH)
	{
		initdrawing(all, x);
		initdir(all);
		get_wall_hit(all, map);
		get_player_pos(all, map, &ii);
		get_walls(all, y, x, ii);
		get_floor_ceil(all, y, x);
		x++;
	}
	drawall(all, all->mlx->buffer);
	all->pl->movespeed = 0.12;
	all->pl->rt_s = 0.055;
	return (0);
}
