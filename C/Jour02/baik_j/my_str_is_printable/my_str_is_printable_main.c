/*
** my_str_is_printable.c for my_str_is_printable in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Tue Mar 22 21:21:59 2016 BAIK Jaehyun
** Last update Wed Mar 23 00:50:36 2016 BAIK Jaehyun
*/
void my_putchar(char c);

int	my_str_is_printable(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= ' ' || str[i] > '~' || str[i] > 32)
	{
	  my_putchar('1');
	}
      else
	{
	  my_putchar('0');
	  return (-1);
	}
      i++;
    }
  my_putchar('1');
  return (-1);
}

int main()
{
  char str[10] = {'b','o','n','%','\a'};
  my_str_is_printable(str);
  my_putchar('\n');
  return (0);
}
