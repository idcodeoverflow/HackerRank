#include <cstdio>

int main()
{
	int values[26] = {0}, max = 0, i = 0;
	char str[12];	
	
	for(; i < 26; i++)
		scanf("%d", &values[i]);
	
	scanf("%s", str);
	
	for(i = 0; str[i] != ((char)00); i++)
		if(values[str[i] - 'a'] > max)
			max = values[str[i] - 'a'];
	
	printf("%d\n", i * max);
		
	return 0;
}
