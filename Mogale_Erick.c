#include "main.h"

/**
 * get_sigint - handle  the crtl + c call in prompt
 * @sig: Signal handling
 */

void get_sigint(int sig)
{
	(void)sig;
	write(STDOUT_FILENO, "\nMogale_Erick_shell ", 5);
}
