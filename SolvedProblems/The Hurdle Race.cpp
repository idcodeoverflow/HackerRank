#include <cstdio>

int main()
{
	int n = 0, k = 0, max = 0, i = 0, val = 0;
	scanf("%d %d", &n, &k);
	
	for(; i < n; i++)
	{
		scanf("%d", &val);
		if(val > max)
			max = val;
	}
	
	val = ((k - max > 0) ? 0 : max - k);
	
	printf("%d\n", val);
	
	return 0;
}
