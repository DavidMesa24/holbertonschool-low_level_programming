unsigned int _strspn(char *s, char *accept)
{
	int i, j, count, check;

	check = 0;
	if (check != 1)
	{
		for (i = 0; s[i] != '\0'; i++)
		{

			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					count++;
					check = 1;
				}
			}
		}
	return (count);
	}
}
