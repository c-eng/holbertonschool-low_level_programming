/**
 * print_name - Prints a name
 * @name: Name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
