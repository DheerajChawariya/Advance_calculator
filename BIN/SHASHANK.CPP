#include<iostream.h>
#include<conio.h>
#include<string.h>
int main()
{
char str[50],word[50][10];
clrscr();
int i,j=0,count=0;
cout<<"enter string";
cin.getline(str,50);
for(i=0;str[i]!=NULL;i++)
{
 if(str[i]==' '||str[i]=='\0')
 {
   word[count][j]=NULL;
   j=0;
   count++;
 }
 else
 {
  word[count][j]=str[i];
  if(str[i+1]==NULL)
       word[count][j+1]=NULL;
  j++;
 }
}
/*
for(i=0;i<=count;i++)
cout<<word[i]<<endl;
*/
for(i=0;i<count/2 ;i++){
cout<<strrev(word[i])<<" " ;
cout<<word[count-i]<<" ";
}

if(count%2==0)
{
cout<<strrev(word[i]);
 }
 }
