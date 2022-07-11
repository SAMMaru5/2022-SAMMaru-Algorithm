#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2;
	int x, y, r;
	int n, p;
	int count;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		scanf("%d", &p);
		count = 0;
		for (int j = 0; j < p; j++)
		{
			scanf("%d %d %d", &x, &y, &r);
			double d1 = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
			double d2 = sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2));

			if (d1 < r && d2 > r)
				count++;
			else if (d1 > r && d2 < r)
				count++;

		}
		printf("%d\n", count);
	}
	return 0;
}
