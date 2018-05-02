#include <cstdio>

int main()
{
	int n = 0, i = 0, j = 0;
	
	scanf("%d", &n);
	
	for(; j < n; j++)
	{
		for(i = 0; i < n; i++)
			if(i < n - j - 1)
				printf(" ");
			else
				printf("#");
		printf("\n");
	}
	return 0;
}
