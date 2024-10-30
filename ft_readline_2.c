#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

int main()
{
	char *input;

	while (1)
	{
		input = readline("> ");
		if (strcmp(input, "exit") == 0)
		{
			free(input);
			break;
		}
		// To replace the STDIN (0) text (user input) by *test parameter of rl_replace_line
		rl_replace_line("Line replaced with sucess", 0);
		// To say to readline that the line (user input) was replaced
		rl_on_new_line();
		// Refresh the display of the line
		rl_redisplay();
		printf("\nYou have entered: %s\n", input);
		// Add_history works, so do rl_clear_history
		add_history(input);
		free(input); // Not sure about this free, but doesn't hurt for now
	}
	return (0);
}
