#include "lib.h"

int 	main(int argc, char const *argv[])
{
	printf("A: Вывести слова в которых нет заглавных латинских букв\n");

	char s1[] = "String for Me exampl open Door and window";
	printf("%s\n", s1);
	char *token = strtok(s1, " ");
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
	sub_str("String for Me exampl open Door and window", &s2[0]);

	printf("\nC: Вывод слов с уникальными символами: \n");
	rep_letter("String foor Mee exampl open Door and window");
	return 0;
}