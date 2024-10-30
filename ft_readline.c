#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

int	main(void)
{
	// char *readline(const char *prompt) //

	char *input;	// Temporary variable to be easier to free

	input = readline("> ");		// The prompt is "> "
	printf("%s\n", input);
	free(input);
	return (0);
}
