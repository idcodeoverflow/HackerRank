#include <cstdio>

int main()
{
	int min = 2147483647, max = -1, lss = -1, pls = -1, n = 0, i = 0, t = 0;
	
	scanf("%d", &n);
	
	for(; i < n; i++)
	{
		scanf("%d", &t);
		if(t > max)
		{
			max = t;
			pls++;
		}
		if(t < min)
		{
			min = t;
			lss++;
		}
	}
	printf("%d %d\n", pls, lss);
	return 0;
}
