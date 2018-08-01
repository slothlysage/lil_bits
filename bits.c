#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "bits.h"

void	print_bits(char c, char *s)
{
	char	p;

	for (int i = 7; i >= 0; i--)
	{
		p = (((c >> i) & 1) == 1) ? ('1') : ('0');
		write(1, &p, 1);
	}
	printf(" <--%s flag was turned on!\n", s);
}

int 	main(int ac, char **av)
{
	char flags;
	char newflags = 0;

	if (ac != 2)
		printf("put in a number from 0-255");
	else {
		flags = (short)atoi(av[1]);
		if (CHECK_FIRST(flags))
		{
			ASSIGN_FIRST(newflags);
			print_bits(newflags, "first");
		}
		if (CHECK_SECOND(flags))
		{
			ASSIGN_SECOND(newflags);
			print_bits(newflags, "second");
		}
		if (CHECK_THIRD(flags))
		{
			ASSIGN_THIRD(newflags);
			print_bits(newflags, "third");
		}
		if (CHECK_FOURTH(flags))
		{
			ASSIGN_FOURTH(newflags);
			print_bits(newflags, "fourth");
		}
		if (CHECK_FIFTH(flags))
		{
			ASSIGN_FIFTH(newflags);
			print_bits(newflags, "fifth");
		}
		if (CHECK_SIXTH(flags))
		{
			ASSIGN_SIXTH(newflags);
			print_bits(newflags, "sixth");
		}
		if (CHECK_SEVENTH(flags))
		{
			ASSIGN_SEVENTH(newflags);
			print_bits(newflags, "seventh");
		}
		if (CHECK_EIGHTH(flags))
		{
			ASSIGN_EIGHTH(newflags);
			print_bits(newflags, "eighth");
		}
		printf("Input flag: %d, Output flag: %d\n", flags, newflags);
	}
	return (1);	 
}
