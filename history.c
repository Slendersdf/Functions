#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *input;

	printf("Input \"exit\" to quit the prompt, or \"clear\" to delete the history.\n");

	while (1)
	{
		input = readline("> ");

		if (strcmp(input, "exit") == 0)
		{
			free(input);
			break;
		}
		if (strcmp(input, "clear") == 0)
		{
			rl_clear_history(); // Function to clear all the history (so all the lines)
			printf("History deleted.\n");
		}
		else
		{
			add_history(input); // Function to add the line (input) in the history
			printf("Line/Command saved in history: %s\n", input);
		}
	}
	return (0);
}
