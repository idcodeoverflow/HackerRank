#include <cstdio>

int main()
{
	int n = 0, i = 0, val = 0;
	
	scanf("%d", &n);
	
	while(n--)
	{
		scanf("%d", &val);
		if(val > 37 && 5 - (val % 5) < 3)
			val += 5 - (val % 5);
		printf("%d\n", val);
	}
	return 0;
}
