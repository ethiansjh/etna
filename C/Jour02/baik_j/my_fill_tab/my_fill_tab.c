/*
** my_aff_tab_num.c for my_aff_tab_num in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 10:29:39 2016 BAIK Jaehyun
** Last update Wed Mar 23 00:53:53 2016 BAIK Jaehyun
*/
void	my_putchar(char c);

int	*my_fill_tab()
{
  static int	tab[100];
  int	i;

  for (i = 0; i != 100; i = i + 1)
    {
      tab[i] = i + 1;
    }
  return (tab);
}
