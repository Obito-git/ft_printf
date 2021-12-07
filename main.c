#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(int ac, char **av)
{
	int a = 10;
	int std, my;
	char *strnill = NULL;
	char *uninit;

	std = printf("%p\n", &a);
	my = ft_printf("%p\n", &a);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

	std = printf("%p\n", &strnill);
	my = ft_printf("%p\n", &strnill);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");


	std = printf("%p\n", -1);
	my = ft_printf("%p\n", -1);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");


	char *str = "1231231231231231";
	
	std = printf("%p\n", &str);
	my = ft_printf("%p\n", &str);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

	char strdouble[2][2];
	strdouble[0][0] = 1;
	std = printf("%p\n", &strdouble);
	my = ft_printf("%p\n", &strdouble);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

	std = printf("%p\n", &uninit);
	my = ft_printf("%p\n", &uninit);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

	std = printf("12345%p%%!@#$^&*(\t\n", &strdouble);
	my = ft_printf("12345%p%%!@#$^&*(\t\n", &strdouble);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

	std = printf("%p\n", 0);
	my = ft_printf("%p\n", 0);
	printf("my %d std %d\n", my, std);
	for (int i = 0; i < std; i++)
		printf("-");
	printf("\n");

}
