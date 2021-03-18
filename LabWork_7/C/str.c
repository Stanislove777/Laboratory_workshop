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
			if ((s[index_word] >= 'A' && s[index_word] <= 'Z') && 
				(s[i - 2] == sub[0] && s[i - 1] == sub[1]) &&
				(i - 2 != index_word))
			{
				while (index_word < i)
					printf("%c", s[index_word++]);
			}
			j = -1;
		}
	}
}

void	rep_letter(char *s)
{
	int i = 0;
	int j = 0;
	int index_word = 0;
	int curr = 0;

	while (s[i])
	{
		i++;
		j++;
		if (s[i] == ' ' || s[i] == '\0')
		{
			int flag = 0;
			index_word = i - j;
			j = index_word;
			curr = j + 1;
			while (j < i)
			{
				curr = j + 1;
				while (curr < i)
				{
					if (s[curr] == s[j])
					{
						flag = 1;
						break;
					}
					curr++;
				}
				j++;
			}
			if (flag == 0)
			{
				while (index_word < i)
					printf("%c", s[index_word++]);
				printf(" ");
			}
			j = -1;
		}
	}
}