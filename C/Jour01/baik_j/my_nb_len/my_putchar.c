/*
** my_putchar.c for my_putchar in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 13:57:37 2016 BAIK Jaehyun
** Last update Mon Mar 21 18:19:50 2016 BAIK Jaehyun
*/
#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
