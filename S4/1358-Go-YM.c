#include <stdio.h>

int main(void)
{
    int width,height,x,y,num;
    scanf("%d%d%d%d%d",&width,&height,&x,&y,&num);
    int r = height/2;
    int p_x,p_y;
    int count=0;

    for(int i=0;i<num;i++)
    {
        scanf("%d%d",&p_x,&p_y);
        if((p_x>=x)&&(p_x<=x+width))
        {
            if((p_y>=y)&&(p_y<=y+height))
            {
                count++;
            }
        }

        else if((p_x>=x-r)&&(p_x<x))
        {
            if((p_x-x)*(p_x-x)+(p_y-(y+r))*(p_y-(y+r))<=r*r)
            {
                count++;
            }
        }

        else if((p_x>x+width)&&(p_x<=x+width+r))
        {
            if((p_x-(x+width))*(p_x-(x+width))+(p_y-(y+r))*(p_y-(y+r))<=r*r)
            {
                count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}