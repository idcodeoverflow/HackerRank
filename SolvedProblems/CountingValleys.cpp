#include <cstdio>

int main()
{
	char sequence[1000002];
	int n = 0, count = 0, i = 0, control = 0, height = 0;
	
	scanf("%d", &n);
	scanf("%s", sequence);
	
	for(; i < n; i++)
	{
		height = ((sequence[i] == 'U') ? 1 : -1);
		if(control >= 0 && control + height < 0)
		{
			count++;
		}
		control += height;
	}
	printf("%d\n", count);
	return 0;
}
