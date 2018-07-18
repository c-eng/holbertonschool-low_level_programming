#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatanates args with \n seperators
 * @ac: argument count
 * @av: argument list
 *
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int c, a_i, len = 0, cur_len = 0;
	char *maomao;

	if (ac > 1 && av)
	{
		for (c = 1 ; c < ac ; c++)
		{
			for (a_i = 0 ; av[c][a_i] != '\0' ; a_i++)
				;
			len += (a_i + 1);
		}
		printf("allocated %d bytes", len);
		maomao = malloc(sizeof(char) * len);
		if (maomao)
		{
			for (c = 1 ; c < ac ; c++)
			{
				for (a_i = 0 ; av[c][a_i] != '\0' ; a_i++)
				{
					maomao[a_i + cur_len] = av[c][a_i];
				}
				maomao[a_i + cur_len] = '\n';
				cur_len += (a_i + 1);
			}
			printf(" and used %d bytes\n", cur_len);
			return (maomao);
		}
	}
	return ('\0');
}
