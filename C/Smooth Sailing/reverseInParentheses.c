void revstr(char *first, char *last)
{
	while (first < last)
	{
		char c = *last;
		*last = *first;
		*first = c;
		first++;
		last--;
	}
}

char * reverseInParentheses(char *s)
{
	int len = strlen(s);
	char *lastOpenBracket = strrchr(s, '(');
	while (lastOpenBracket != NULL)
	{
		char *closeBracket = strchr(lastOpenBracket, ')');
		revstr(lastOpenBracket, closeBracket - 1);
		int num = len - (closeBracket - s - 1);
		memmove(closeBracket - 1, closeBracket + 1, num);
		len -= 2;
		lastOpenBracket = strrchr(s, '(');
	}
	return s;
	
}
