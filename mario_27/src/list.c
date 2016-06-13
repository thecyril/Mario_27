/*
** list.c for list in /home/puccio_c/list
** 
** Made by cyril puccio
** Login   <puccio_c@epitech.net>
** 
** Started on  Fri May  6 17:43:36 2016 cyril puccio
** Last update Fri Jun 10 23:46:11 2016 cyril puccio
*/

#include "mario.h"

void		free_list(t_list *list)
{
  t_list	*tmp;

  while (list->first != 1)
    list = list->next;
  list = list->next;
  tmp = list;
  while (tmp->first != 1)
    {
      list = list->next;
      free(tmp);
      tmp = list;
    }
  free(tmp);
}

t_list		*add_end(t_list *list, t_bunny_picture *img)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp->img = img;
  tmp->first = 0;
  if (list == NULL)
    {
      tmp->first = 1;
      tmp->next = tmp;
      tmp->prev = tmp;
    }
  else
    {
      while (list->next->first != 1)
      	list = list->next;
      tmp->prev = list;
      tmp->next = list->next;
      list->next->prev = tmp;
      list->next = tmp;
    }
  return (tmp);
}

int		len_list(t_list *list)
{
  int		i;

  i = 0;
  while (list->first != 1)
    list = list->next;
  list = list->next;
  i++;
  while (list->first != 1)
    {
      list = list->next;
      i++;
    }
  return (i);
}

t_list          *put_in_list(t_var *var)
{
  t_list        *list;
  int   i;

  i = 0;
  list = NULL;
  while (var->land[i] != NULL)
    {
      list = add_end(list, var->land[i]);
      i++;
    }
  while (list->first != 1)
    list = list->next;
  return (list);
}
