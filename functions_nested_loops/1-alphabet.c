/**
 * print_alphabet()- Prints lowercase alphabet followed by newline
 *
 * Description: Prints lowercase alphabet followed by newline
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
