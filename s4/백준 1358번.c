#include <stdio.h>
#include <math.h>

int main()
{
	int w, h, x, y, p;
	int x1, y1;
	int count = 0;
	scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);

	for (int i = 0; i < p; i++)
	{
		scanf("%d %d", &x1, &y1);
		double d1 = sqrt((x1 - x) * (x1 - x) + (y1 - (y + h / 2)) * (y1 - (y + h / 2)));
		double d2 = sqrt((x1 - (x+w)) * (x1 - (x+w)) + (y1 - (y + h / 2)) * (y1 - (y + h / 2)));
		if (x <= x1&&x1 <= x + w && y <= y1&&y1 <= y + h)
			count++;
		else if (d1 <= h / 2)
			count++;
		else if (d2 <= h / 2)
			count++;
	}
	printf("%d", count);

	return 0;
}
