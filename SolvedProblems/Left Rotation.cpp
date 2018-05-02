#include <cstdio>

int main()
{
	int v[100003], i = 0, n = 0, l = 0;
	scanf("%d %d", &n, &l);
	for(; i < n; i++)
		scanf("%d", &v[i]);
	for(i = l; i < n; i++)
		printf("%d ", v[i]);
	for(i = 0; i < l; i++)
		printf("%d ", v[i]);
	
	return 0;
}