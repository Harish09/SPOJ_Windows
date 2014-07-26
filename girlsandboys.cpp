#include<stdio.h>
int min(int a , int b)
{
    return a<b?a:b;
}

int max(int a , int b)
{
    return a>b?a:b;
}
int main()
{
    int g , b , c ,d,e,f,ans;
    
    while(1)
    {
        scanf("%d%d",&b ,&g);
        if(b==-1&&g==-1)
            break;
        
        else
        {
            c=min(b,g);
            d=max(b,g);
            e=d/(c+1);
            f=d%(c+1);
            if(f==0)
                ans=e;
            else
                ans =e+1;                
            printf("%d\n",ans);                                    
        }
    }    
    return 0;
}
