#include <stdio.h>
#include <string.h>

char stack[101];
int top = 0;

int main(void)
{
    int num;
    scanf("%d",&num);
    char pare[101];
    int check;

    while(1)
    {
        top = 0;
        check = 1;
        //scanf쓰기에 본문에쓰인 공백때문에 문자열을 제대로 못받아옴
        //gets쓰니 컴파일 에러
        gets(pare);

        if(strcmp(pare,".")==0)
        {
            break;
        }

        for(int j=0;j<strlen(pare);j++)
        {
            if((pare[j]=='(')||(pare[j]=='['))
            {
                stack[top] = pare[j];
                top++;
            }

            else if (pare[j]==')')
            {   
                if((top>0)&&stack[top-1]=='(')
                {
                    top--;
                }

                else
                {
                    check = 0;
                    break;
                }
            }

            else if(pare[j]==']')
            {
                if((top>0)&&stack[top-1]=='[')
                {
                    top--;
                }

                else
                {
                    check = 0;
                    break;
                }
            }

            else
            {
                continue;
            }
        }

        if((top == 0)&&(check==1))
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }
    }

    return 0;
}