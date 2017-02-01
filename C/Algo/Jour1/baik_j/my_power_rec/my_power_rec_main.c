/*
** my_power_rec.c for my_power_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 09:17:08 2016 BAIK Jaehyun
** Last update Mon Apr  4 14:33:58 2016 BAIK Jaehyun
*/
#include <stdio.h>

int     my_power_rec(int nb, int power)
{
  int	res;

  res = 0;
  if (power < 0)
    {
      return 0;
    }
  if (power == 0)
    {
      return (1); 
    }
  if (power == 1)
    {
      return (nb);
    }
  res = (nb * (my_power_rec(nb, (power - 1))));
  if (res * res > 2147483647)
    {
      return 0;
    }
  return res;
}

int	main()
{
  printf("%d\n",my_power_rec(30,100));
  return (0);
}
