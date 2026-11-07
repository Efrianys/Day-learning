#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int tree[10001] = {0};
	int l, m;
	scanf("%d %d", &l, &m);
	for (int i = 0;i < m;i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		for (int x = u;x <= v;x++)
		{
			tree[x] = 1;
		}
	}
		int count = 0;
		for (int x = 0;x <= l;x++)
		{
			if (tree[x] == 0)count++;
		}
		printf("%d", count);
		return 0;
}
