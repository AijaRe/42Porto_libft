#include <stdio.h>

/*two counters and j > 0 condition to control repeated chars*/
static int	count_strs(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	strs;
	
	i = 0;
	j = 0;
	strs = 0;
	
	while (s[i] != '\0')
	{
		while (s[i + j] != '\0' && s[i + j] != c)
			j++;
		if (j > 0)
		{
			i = i + j;
			j = 0;
			strs++;
		}
		else
			i++;
	}
	return (strs);
	/*while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] == c)
			i++;
		}
		i++;
	}
	return (j);*/
}
int	main(void)
{
	printf("%d\n", count_strs("..let.me.test..a...you", '.'));
}
