#include <stdlib.h>
#include <time.h>

char	my_putchar(char c);


void	my_put_nbr(int nb);

int	main()
{
  int	random;
  srand (time (NULL));
  random = (rand()% 36) + 1;
  my_put_nbr(random);
  my_putchar('\n');
  return 0;
}
