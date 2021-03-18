#include "lib.h"

int		check_str(char *token)
{
	int i = 0;

	while (token[i])
	{
		if (token[i] >= 'A' && token[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void	sub_str(char *s, char *sub)
{
	int i = 0;
	int j = 0;
	int index_word = 0;

	printf("%s\n", sub);

	if (ft_strlen(&sub[0]) != 2)
	{
		printf("Введена не двухбуквенная подстрока!!!\n");
		return;
	}

	while (s[i] != '\0')
	{
		j++;
		i++;
		if (s[i] == ' ' || s[i] == '\0')
		{
			index_word = i - j;
			printf("%d\n", index_word);
			if (s[index_word] >= 'A' && s[index_word] <= 'Z')
			{
				while (index_word < i)
					printf("%c", s[index_word++]);
			}
			j = 0;
		}
	}


}