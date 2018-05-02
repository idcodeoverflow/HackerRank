#include <cstdio>

int main()
{
	int triplets[2][3], i = 0, sum_a = 0, sum_b = 0;
	
	for(; i < 3; i++)
		scanf("%d", &triplets[0][i]);
	
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &triplets[1][i]);
		if(triplets[0][i] < triplets[1][i])
			sum_b++;
		else if(triplets[0][i] > triplets[1][i])
			sum_a++;			
	}
	printf("%d %d\n", sum_a, sum_b);
	return 0;
}
