/*
** my_fibo_rec.c for my_fibo_rec in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Apr  4 12:45:20 2016 BAIK Jaehyun
** Last update Mon Apr  4 21:14:10 2016 BAIK Jaehyun
*/

int	my_fibo_rec(int nb)
{
  if (nb < 0 || nb > 46 || nb == 0)
    {
      return (0);
    }
  else if (nb == 1)
    {
      return (1);
    }
  else
    {
      return (my_fibo_rec(nb - 1) + my_fibo_rec(nb - 2));
    }
}
