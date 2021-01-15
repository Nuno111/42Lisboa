#include <unistd.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    if (n == 0)
        return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
