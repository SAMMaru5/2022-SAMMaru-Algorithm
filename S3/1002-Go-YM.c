/*  원에 속해있지 않을경우
    r1+r2>중심거리  -> 2
         =          -> 1
         <          -> 0

    원에 속해있을 경우
    r2-r1>중심거리  -> 0 
         =          -> 1
         <          -> 2
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num;
    int x1,y1,r1;
    int x2,y2,r2;
    double dis;

    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d%d%d",&x1,&y1,&r1);
        scanf("%d%d%d",&x2,&y2,&r2);

        dis = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        //두 원이 동일할 경우
        if(((x1==x2)&&(y1==y2))&&(r1==r2))
        {
            printf("%d\n",-1);
            continue;
        }

        int max = (r1>r2)?r1:r2;
        int min = (r1>r2)?r2:r1;

        //한 원안에 원이 속해있을 경우
        if(max>dis)
        {
            if(dis>(max-min))
            {
                printf("%d\n",2);
                continue;
            }

            else if(dis<(max-min))
            {
                printf("%d\n",0);
                continue;
            }

            else
            {
                printf("%d\n",1);
                continue;
            }
        }

        //원과 원이 속해있지 않은 경우
        else
        {
            if(dis>(max+min))
            {
                printf("%d\n",0);
                continue;
            }

            else if(dis<(max+min))
            {
                printf("%d\n",2);
                continue;
            }

            else
            {
                printf("%d\n",1);
                continue;
            }
        }
    }

    return 0;
}