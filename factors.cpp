#include "header.h"

/**
 * @brief Starting point
 *
 * @param av Buildschar array
 * @return int 0
 */
int main(__attribute__((unused)) int ac, char **av)
{
	RSARef fact(av[1]);

	fact.run();

	return (0);
}