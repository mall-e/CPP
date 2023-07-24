#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	if (ac <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl;
	else
	{
		i = 1;
		while (av[i])
		{
			j = 0;
			while (av[i][j])
			{
				av[i][j] = toupper(av[i][j]);
				j++;
			}
			std::cout << av[i++];
			if (av[i] == NULL)
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}
