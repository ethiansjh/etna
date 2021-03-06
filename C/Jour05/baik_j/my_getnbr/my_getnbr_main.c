/*
** my_getnbr.c for my_getnbr in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Fri Mar 25 15:03:45 2016 BAIK Jaehyun
** Last update Sat Mar 26 12:29:15 2016 BAIK Jaehyun
*/
int	my_put_nbr(int n);

char	my_putchar(char c);

int	my_getnbr(char *str)
{
  int	pos;
  int	signe;
  int	nbr;

  signe = 1;
  pos = 0;
  while (str[pos] != '\0' && (str[pos] == '+' || str[pos] == '-'))
    {
      if (str[pos] == '-')
	{
	  signe = signe * - 1;
	}
      pos = pos + 1;
    }
  str = str + pos;
  nbr = 0;
  pos = 0;
  while (str[pos] >= '0' && str[pos] <= '9')
    {
      nbr = nbr * 10;
      nbr = nbr - (str[pos] - '0');
      pos = pos + 1;
    }
  return (nbr * signe * - 1);
}
int	main()
{
 my_put_nbr(my_getnbr("42"));
            my_putchar('\n');
            my_put_nbr(my_getnbr("0112def123"));
            my_putchar('\n');
            my_put_nbr(my_getnbr("-350kjb45"));
            my_putchar('\n');
            my_put_nbr(my_getnbr("hgvj85khb"));
            my_putchar('\n');
            my_put_nbr(my_getnbr("+-+04trois"));
            my_putchar('\n');
            my_put_nbr(my_getnbr("--1"));
            my_putchar('\n');
  return (0);
}
