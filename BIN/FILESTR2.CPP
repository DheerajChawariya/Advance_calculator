#include<iostream.h>
#include<fstream.h>
#include<conio.h>
 class person
 {
 char name[10];
 int age;
 char sex;
 public:
 void input()
  {
  cout<<"enter the person name\n";
  cin>>name;
  cout<<"enter the age and sex\n";
  cin>>age>>sex;
  }
  void show()
  {
   cout<<"name="<<name<<endl;
   cout<<"age="<<age<<endl;
   cout<<"sex="<<sex<<endl;
  }
 };
void main()
{
clrscr();
 fstream file;
 file.open("obj.txt",ios::in | ios::out);
 person d[3],t;
 int i;
 for(i=0;i<3;i++)
  {
  d[i].input();
  file.write((char*)&d[i],sizeof(d[i]));
  }
  file.seekg(0);
  cout<<"data read from file\n";
  for(i=0;i<3;i++)
  {
  cout<<"\n person"<<i+1<<"\n";
  file.read((char*)&t,sizeof(t));
  t.show();
  }
  file.close();
  getch();
}

















