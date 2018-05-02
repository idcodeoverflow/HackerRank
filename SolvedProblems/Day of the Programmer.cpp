#include <cstdio>

int main()
{
	char non_leap[] = "13.09.", leap[] = "12.09.", russ_year[] = "26.09.";
	int n = 0;
	scanf("%d", &n);
	if(n > 1918)
	{
		if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
			printf("%s%d\n", leap, n);
		else
			printf("%s%d\n", non_leap, n);
	}
	else if(n == 1918)
		printf("%s%d\n", russ_year, n);
	else
	{
		if(n % 4 == 0)
			printf("%s%d\n", leap, n);
		else
			printf("%s%d\n", non_leap, n);
	}
	return 0;
}
