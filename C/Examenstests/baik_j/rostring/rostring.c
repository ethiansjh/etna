/*
** rostring.c for rostring.c in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Wed Apr  6 15:26:21 2016 BAIK Jaehyun
** Last update Thu Apr  7 01:40:09 2016 BAIK Jaehyun
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  for (i = 0; *(str + i) != '\0'; i = i + 1)
    {
      my_putchar(*(str + i));
    }
}

void	rostring(char *str)
{
  int	i;
  int	start;
  int	end;
  int	size;
  char	*tmp;

  
  j = -1;
  size = my_strlen(str);
  tmp = malloc(sizeof(*str) + 1);
  for (i = 0; str[i]; ++i)
    {
      if (str[i] != ' ' && str[i] != '\t')
	{
	  start = i;
	}
      if (
    }

int	main(int argc, char **argv)
{
  if (argc > 1)
    {
      rostring(argv[1]);
      my_putchar('\n');
    }
  return (0);
}
