#include<iostream>
using namespace std;
#define max 5

int top=-1;
int a[max];









void push(int n)
{
     a[++top]=n;
     
}


void pop(int *n)
{
     
          *n=a[top];//Returns the value that is to be deleted
          top--;
        
     
     
}


int main()
{
     
     
   char n[5]; int pos,m,si,i,j,k,temp;
    
    cin>>n>>k;
  
   for(i=0;n[i]!='\0';i++)
         push(n[i]-48);
  
    si=i;
 
   m=a[0];
   for(i=0;i<si-1;i++)
     { 
               if(a[i]>=m)
                 {        
                          pos=i;}
     }

if(si-k == 1) cout<< a[si-1];

else
  

         for(i=pos;i<pos+(si-k);i++)
            {
                      cout<<a[i];
       }
}
                  

   
