#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    int x1,y1,x2,y2;
    int c_num;
    int c_x,c_y,r;
    int count;

    for(int i=0;i<num;i++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&c_num);

        count = 0;

        for(int j=0;j<c_num;j++)
        {
            scanf("%d%d%d",&c_x,&c_y,&r);

            if((c_x-x1)*(c_x-x1)+(c_y-y1)*(c_y-y1) < r*r)
            {
                if((c_x-x2)*(c_x-x2)+(c_y-y2)*(c_y-y2) < r*r)
                {
                    continue;
                }
                count++;
            }

            else if((c_x-x2)*(c_x-x2)+(c_y-y2)*(c_y-y2) < r*r)
            {
                if((c_x-x1)*(c_x-x1)+(c_y-y1)*(c_y-y1) < r*r)
                {
                    continue;
                }
                count++;
            }
        }

        printf("%d\n",count);
    }


    return 0;
}