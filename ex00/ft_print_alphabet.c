#include <unistd.h>

void ft_putcher(char c) {
	write(1, &c, 1);
}

void ft_print_alphabet(void) {
	int count;
	count=97;
	while (count<=122)
	{
		ft_putcher(count);
		count++;
	}
}
int main(void){
	ft_print_alphabet();
	return(0);
}
