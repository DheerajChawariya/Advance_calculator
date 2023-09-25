#include<iostream.h>
class demo
{
 int *p;
 public:
 demo()
 {
 p=new int[3];
 for(int i=0;i<3;i++)
     p[i]=i+1;
 }
int operator [] (int x)
{
return p[x];
}
};
void main ()
{
 demo d;
 for(int i=0;i<3;i++)
     cout<<d[i]<<" ";
}
