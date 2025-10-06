int	ft_atoi(const char *ptr)
{
	int	i;
	int	sign;
	int	res;
	
	i = 0;
	sign = 1;
	res = 0;

	while (ptr[i] >= 9 && ptr[i] <= 13 || ptr[i] == ' ')
		i++;
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
