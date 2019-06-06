#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void 	ft_putstr(char *str);
size_t	ft_strlen(char *s);

int main ()
{
	char mystr[];
	mystr[] = "hello";
	
	ft_strlen(mystr);
	return (0);

}


size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		return(i);
	}

}

