/**
 * wut - takes the two strings with an increasing value to compare
 * @one: first string
 * @two: second string
 * @n: index position
 * Return: integer
*/
int wut(char *one, char *two, int n, int i)
{
	if (two[i] == '*')
	{
		i++;
	}
    else if (one[n] != two[n])
        return (0);
    else if (one[n] == two[n] && two[n] == '\0')
        return (1);
    n++;
	i++;
    return (wut(&one[n], &two[i], n, i));
}

/**
 * wildcmp - compares two strings and returns either 1 or 0.
 * @s1: first string
 * @s2: second string
 * Return: integer
*/
int wildcmp(char *s1, char *s2)
{
    return (wut(s1, s2, 0, 0));
}
