#include<stdio.h>
int main()
{
    int n,m,q,c=0,tc=0,r,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        q=i;
        c=0;
        tc=0;
        while(q!=0)
        {
            c=c+i;
            r=q%10;
            if(r!=0&&i%r==0)
            tc=tc+i;
            q=q/10;
        }
        if(c==tc)
        printf("%d ",i);
    }
}