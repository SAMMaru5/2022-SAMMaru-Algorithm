#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	int x1, y1, x2, y2;
	int r1, r2;
	int result;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        double r = sqrt((x1-x2)*(x1-x2) + (y1 - y2) * (y1 - y2));
        int d = abs(r2 - r1);

        if (r == 0 && r1 == r2) {
            result = -1;
        }
        else if (r < r1 + r2 && d < r) {
            result = 2;
        }
        else if (r == r1 + r2 || d == r) {
            result = 1;
        }
        else {
            result = 0;
        }
        printf("%d\n", result);;
	}

	return 0;
}
