int		odd(int a)
{
	if (a >= 10)
	{
		if (odd(a / 10) == 1 && odd(a % 10) == 1)
			return (1);
		else
			return (0);
	}
	if (a % 2 == 0)
		return (1);
	else
		return (0);
}