/*
** my_strcpy.c for my_strcpy in 
** 
** Made by BAIK Jaehyun
** Login   <baik_j@etna-alternance.net>
** 
** Started on  Thu Mar 24 12:08:53 2016 BAIK Jaehyun
** Last update Thu Mar 24 18:59:50 2016 BAIK Jaehyun
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while ((*(src + i)) != '\0')
    {
      *(dest + i) = *(src + i);
      i++;
    }
  *(dest + i) = '\0';
  return (dest);
}
