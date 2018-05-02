#include <cstdio>

inline void swap(int &a, int &b)
{
	a ^= b;
	b ^= a;
	a ^= b;
}

inline int bubble_sort(int *a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n - 1; j++) 
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
				count++;
			}
	return count;
}


int main()
{
	int n = 0, a[603] = {0}, i = 0;
	
	scanf("%d", &n);
	
	for(; i < n; i++)
		scanf("%d", &a[i]);
	
	printf("Array is sorted in %d swaps.\n", bubble_sort(a, n));
	printf("First Element: %d\n", a[0]);
	printf("Last Element: %d\n", a[n - 1]);
	
	return 0;
}
