#include <cstdio>

int main()
{
	
	int n = 0, minus = 0, plus = 0, zero = 0, i = 0, num = 0;
	
	scanf("%d", &n);
	
	for(; i < n; i++)
	{
		scanf("%d", &num);
		if(num < 0) minus++;
		else if(num > 0) plus++;
		else zero++;
	}
		printf("%.6lf\n%.6lf\n%.6lf\n", ((double) plus/ n), ((double) minus / n), ((double) zero / n));
	return 0;
}
