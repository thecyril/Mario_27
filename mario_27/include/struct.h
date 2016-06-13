/*
** struct.h for struct in /home/puccio_c/rendu/Infographie/gfx_tekadventure
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri Apr 15 17:45:52 2016 cyril puccio
** Last update Sat Jun 11 14:32:33 2016 cyril puccio
*/

#ifndef		_STRUCT_H
# define	_STRUCT_H

#define SCREEN_W	1920
#define	SCREEN_H	1080

typedef struct          s_bunny_circle
{
  t_bunny_position      position;
  double                radius;
  unsigned int          color;
}                       t_bunny_circle;

typedef struct		s_list
{
  t_bunny_picture       *img;
  int			first;
  struct s_list		*next;
  struct s_list		*prev;
}			t_list;

typedef struct		s_var
{
  t_bunny_window        *win;
  t_bunny_pixelarray	*pix;
  t_bunny_picture	*sprite;
  t_bunny_picture	*sprite2;
  t_bunny_position      start;
  t_bunny_picture       **land;
  t_bunny_position      pmario;
  t_bunny_music         *music;
  t_bunny_effect	*effect;
  const t_bunny_position *mouse;
  t_list		*list;
  t_color		color;
  int			arr[9];
  unsigned int		couleur;
}			t_var;

typedef struct		s_varloop
{
  const	bool		*touche;
  const	bool		*click;
  double		sz;
}			t_varloop;

#endif
