#include <cstdio>

int main()
{
	int v[102] = {0}, i = 0, n = 0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &i);
		v[i]++;
	}
	for(i = 0; i < 100; i++)
		if(v[i] == 1)
		{
			printf("%d\n", i);
			break;
		}
	return 0;
}