#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(int c, char **v)
{
	(void)c;
	printf("%s\n", ft_strtrim(v[1], v[2]));
}
