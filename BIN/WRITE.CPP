#include"iostream.h"
#include<conio.h>
main()
{
clrscr();
 char str[20];
 cout<<"enter string";
 cin>>str;
 for(int i=0;str[i]!=NULL;i++)
 {
  cout.write(str,i+1)<<"\n";
 }

 /*
 for(int i=0;str[i]!=NULL;i++)
 {
  for(int j=0;j<=i;j++)
  {
   cout<<str[j];
  }
 cout<<"\n";
 }
 */
 getch();
+}