#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void 	ft_putstr(char *str);
size_t	ft_strlen(char *s);
void	ft_putnbr(int n);

size_t i;

int main ()
{
	char *mystr="Mashudubele";
	
	ft_putnbr(ft_strlen(mystr));
	return (0);
}


size_t	ft_strlen(char *s)
{

	i = 0;
	while (s[i] != '\0')
		i++;
		return(i);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	 i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}
