#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	std::string	string;
	int			i;
	int			j;

	i = 1;
	j = 0;
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
	while (argv[i])
	{
		if (argv[i][j] == '\0')
		{
			j = 0;
			i++;
			// string += ' ';
			continue ;
		}
		string += toupper(argv[i][j]);
		j++;
	}
	std::cout << string << std::endl;
	return (0);
}