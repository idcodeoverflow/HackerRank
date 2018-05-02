#include <stdio.h>
#include <cstring>

int main()
{
	char a[10010], b[10010];
	int count_a[200] = {0}, count_b[200] = {0}, i = 0, swaps = 0, size_a = 0, size_b = 0;
	
	scanf("%s %s", a, b);
	
	size_a = strlen(a);
	size_b = strlen(b);
	
	for(i = 0; i < size_a; i++)
		count_a[a[i]]++;
	for(i = 0; i < size_b; i++)
		count_b[b[i]]++;
	
	for(i = (int)'a'; i <= (int)'z'; i++)
		swaps += ((count_a[i] < count_b[i]) ? count_b[i] - count_a[i] : count_a[i] - count_b[i]);
	
	printf("%d\n", swaps);
	
	return 0;
}
