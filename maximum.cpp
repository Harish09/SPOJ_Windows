#include<iostream>
using namespace std;

int top;
int **a;
int ti;









void push(int n)
{
     a[ti][++top]=n;
     
}



int main()
{
     
     int t;
    cin>>t;

 a = new int *[t]; 
for (int count = 0; count < t; count++)
{
   a[count] = new int[5];
}
  
     char n[t][5]; int pos[t],m[t],si[t],i,j,k[t],temp;
   for(ti=0;ti<t;ti++)
 {       
  top=-1;
   
    cin>>n[ti]>>k[ti]; 
  
   for(i=0;n[ti][i]!='\0';i++)
         push(n[ti][i]-48);
  
    si[ti]=i;
 
   m[ti]=a[ti][0];
   for(i=0;i<si[ti]-1;i++)
     { 
               if(a[ti][i]>=m[ti])
                 {        
                          pos[ti]=i;}
     }


}

for(ti=0;ti<t;ti++)
{
if(si[ti]-k[ti] == 2) {cout<< a[ti][pos[ti]];cout<<endl;}

else
  
{
         for(i=pos[ti];i<pos[ti]+(si[ti]-k[ti]);i++)
            {
                      cout<<a[ti][i];
       }
  
cout<<endl;
}
}
 }                
       

   
