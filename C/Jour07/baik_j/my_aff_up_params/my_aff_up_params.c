/*
** my_aff_up_params.c for my_aff_params in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Mon Mar 28 13:42:22 2016 BAIK Jaehyun
** Last update Mon Mar 28 14:18:26 2016 BAIK Jaehyun
*/

void	my_putchar(char c);

void	my_putstr(char *str);

char	*my_strupcase(char str[]);

void	my_aff_up_params(int nbr, char **arg)
{
  int	i;

  i = 0;
  while (i < nbr)
    {
      my_putstr(my_strupcase(*(arg + i)));
      my_putchar('\n');
      i = i + 1;
    }
}
