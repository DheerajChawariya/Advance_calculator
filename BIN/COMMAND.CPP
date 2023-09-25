#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main(int argc,char *argv[])
{
 int i;
 int s=0;
 clrscr();
 printf("argc=%d\n",argc); /*cout<<"argc="<<argc; */
 for(i=0;i<argc;i++)
 {
   printf("argv[%d]=%s\n",i,argv[i]);/*cout<<"argv["<<i<<"]="<<argv[i]<<"\n";*/
   s=s+atoi(argv[i]);
 }
printf("sum of numeric string=%d",s); //cout<<"sum of numeric string="<<s;
}



