/*
** my_rev_alpha.c for my_rev_alpha in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 21 19:57:26 2016 BAIK Jaehyun
** Last update Mon Mar 21 23:38:07 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_rev_alpha()
{
  int	i;
  
  for (i = 122; i >= 97; i--)
    {
      my_putchar(i);
    }
}
