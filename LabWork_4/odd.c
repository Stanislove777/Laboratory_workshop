int		odd(int a)
{
	if (a >= 10)
	{
		if (odd(a / 10) == 1)
			return (1);
		else
			return (0);
	}
	a = a % 2;
	if (a == 0)
		return (1);
	else
		return (0);
}