#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl	sa;
		sa.complain(av[1]);
	}
	return (0);
}
