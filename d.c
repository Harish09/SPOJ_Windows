
 #include<stdio.h>
int main()
{
    unsigned long long ans,n,a=1,m,a=1,mod_arr[30]={2};int i;
   

    for( i=1;i<30;i++)
    {
        mod_arr[i]=(mod_arr[i-1]*mod_arr[i-1])%100000007;
    }

   for(i=0;i<30;i++)
         printf("%llu\n",mod_arr[i]);
   
   while(scanf("%llu",&n)!=EOF)
    {
    a=1;
    if(n%1000000006==0&&n!=0)
    {
        printf("1\n");
    }
    else
    {
    n=n%1000000006;
    while(n>1)
    {
              int c=0;
               m=n;
           a=1;
                        while(m>1)
                               {
                                m/=2;
                                     a*=2;
                                  c++;
                               }
        n=n-a;
        a=(a*mod_arr[c])%1000000007;
    }
    if(n==1)
    {
   n=n%1000000006;
    while(n>1)
    {    
        int c=0;
        m=n;
        a=1;
        while(m>1)
                {
                    m/=2;
                  a*=2;
                  c++;
        }
        n=n-a;
        a=(a*mod_arr[c])%1000000007;
    }
    if(n==1)
    {
        a=(a*2)%1000000007;
        a=(a-2)%1000000007;
    }
    else
    {
        a=(a-1)%1000000007;
    }
    a=(a*333333336)%1000000007;
    a++;
    printf("%llu\n",a);
    }
    }
    return 0;
}
