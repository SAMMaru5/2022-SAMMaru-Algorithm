#include <stdio.h>
#include <string.h>

int password,alpha;
int visited[16] = {0,};

//모음이 포함되어있는지 확인후 문자열을 출력하는 함수
void printStr(char* str)
{
    int exist = 0;

    for(int i=0;i<password;i++)
    {
        if((str[i] == 'a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            exist++;
            break;
        }
    }

    if(exist>0)
    {
        for(int i=0;i<password-1;i++)
        {
            for(int j=0;j+i<password-1;j++)
            {
                if(str[j]>str[j+1])
                {
                    char temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                }
            }
        }

        for(int k=0;k<password;k++)
        {
            printf("%c",str[k]);
        }
        printf("\n");
    }
}

void comStr(char* str,int x,int y)
{
    char temp[16];

    if(x == password)
    {
        for(int i=0;i<password;i++)
        {
            temp[i]=str[i];
        }
        printStr(temp);
        return ;
    }

    else
    {
        for(int i=y;i<alpha;i++)
        {
            if(visited[i]==0)
            {
                visited[i] = 1;
                temp[x] = str[x];
                comStr(str, x+1,i);
                visited[i] = 0;
            }
        }
    }

}

int main(void)
{
    int pwNum,alpNum;
    scanf("%d%d",&pwNum,&alpNum);

    password = pwNum;
    alpha = alpNum;
    
    char str[16];

    for(int i=0;i<alpNum;i++)
    {
        scanf(" %c",&str[i]);
    }

    comStr(str,0,0);

    return 0;
}