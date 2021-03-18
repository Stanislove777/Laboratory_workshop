#include "lib.h"

int 	main(int argc, char const *argv[])
{
	char s[] = "String for Me exampl, open Door and window";
	printf("%s\n", s);
	char *token = strtok(s, " ");
	char s2[] = "";

	while (token != NULL)
	{
		if (check_str(token) == 0)
		{
			printf("%s\n", token);
		}
		token = strtok(NULL, " ");
	}

	printf("B: слова с большой буквы и окончанием подстроки: \nВведите двухбуквенную подстроку: ");
	scanf("%s", s2);
	sub_str("Str for Me", &s2[0]);
	return 0;
}