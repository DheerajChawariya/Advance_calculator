 

Phone DIRECTORY PROGRAM
IN CPP using linked list and
FILE HANDLING

-->Save data in file

-->add new number

-->delete any number from current list
-->search and modify

-->see all list (reading from file )

-->see current numbers added

By DJVprogrammers

 

 

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

Code:

//Phore directory program using linked list and file handling

#include<iostream>
#include<fstream>
#include<co nio. h>
using namespace std;
fstream myfile;
struct clients

t

//parts of a node.
string name;

string mumber,
string cnic;
clients* link;

clients)

class directory

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

{
//pointers to handle the lnklist
chents *start,*cur,*temp;

public:

directoryO)

//function to create nodes
creat_file (string nstring numstring cn)
t
/create Ist node...
if(start==NULL)
t
start=new clients;
start->link=NULL;
start->name=n;
start->number= num;

start->cnic=cn,

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

myfile.open ("directory.txt",ios::out | ios:app);

myfile<<"Name_: _"<<start->name<<"__|_ CNIC:_"<<start->cnic<<"__|_ Phone

Number_: "<<start->number<<end];
myfile.closeQ;
}

/Ko create new node..

else

cur=start;
while(cur->link!=NULL)
t

cur=cur->link ;

$

temp=new clients;
temp->name=n;

temp->nmumber=num;

temp->cnic=cn;

temp->link=NULL;
cur->link=temp;

myfile.open ("directory.txt",ios::out | ios:app);

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

myfile<<"Name_: "<<temp->name<<"__ | CNIC:_"<<temp->cnic<<"__| Phone

Number:_"<<temp->number<<end1,;

myfile.closeQ;

void terminating file(string n)
t
cur=start;

if(start->name==n)

temp=start;

start=start->link ;

delete temp;

while(cur->name!=n)
{
if(cur->link==NULL)

t
https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

cout<<"Any case of"*<<n<<" does not exist"<<end];

return ;

temp=cur,
cur=cur->link ;

5

temp->link=cur-> link;
dekte cur;

5

//prmt data of the lnklist.
void print_nowQ

t

int c;

cout<<"Person #"<<" --->Name \tNumber \tCNIC"<<endl;

for(c=1;cur->link !=NULL;c++)

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

cout<<"Person "<<c<<" ---> "<<cur->name<<"\t"<<cur->numb er<<"\t"<<cur->cnic<<endh

cur=cur->link;

cout<<"Person "<<c<<" ---> "<<cur->name<<"\t"<<cur->numb er<<"\t"<<cur->cnic<<endh

void search(string n)

cur=start;

while(cur!=NULL)

if(cur->name==n)

char mod;

cout<<"\nit DATA FOUND

cout<<"Name : "<<cur->name<<end];

cout<<"CNIC : "<<cur->cnic<<end];

cout<<"Phone # : "<<cur->number<<endl;

cout<<"\nDo You want to modify Phone Number (y/n) : ";

cin>>mod;

ifmod=='y' || mod=="Y')

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

cout<<"Enter New Phone Number ";
cin>>cur->number;

cout<<"\nit Data Updated

$
cur=cur->link;
$
if(cur==NULL)

cout<<"\n\t DATA NOT FOUND

/Athis function reads the data from file
string s;
myfile.open("directory.txt",ios::m);
while(! myfile.cofQ)

t

nyfile>>s;

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

cout<<s<<endk
}
myfile.close(Q);

directory 11;

int nooffiles,ip,ch;

string nomen;

 

cout<<"\n\t

 

cout<<"\t\t\t PHONE DIRECTORY SYSTEM\n",

 

 

cout<<"\n\t

 

 

cout<<"\n\tl- SAVE NUMBERS\n";

cout<<"\n\t2- CAN SEARCH AND UPDATE THE NUMBER\n";

https/Aweb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

cout<<"\nlt3- WHEN A NUMBER IS OFF,,, YOU CAN DELETE IT FROM YOUR
DIRECTORY\n":

cout<<"\ntt4-CAN SEE ALL THE LIST ANY TIME\n";

cout<<"\n\t

 

 

cout<<"\n\t

NUMBERs \n"<<end],;

 

 

 

/fno. of files.

cout<<"\thow many numbers you want to save"<<endl;

cin>>nooffiles;

/create/save data of each memeber....function call pass data..

forG=1;1<=nooffiles;i++)

t

cout<<"\n\tEnter Name \t";

//getline (cin, n);

cin>>n;

cout<<"\n\tEnter Phone number \t";
ci>>nm;

cout<<"\n\tEnter CNIC \t";
cin>>cne;

ll .creat_file(n,nm,cnc);
https//Aveb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

system("CLS");

cout<<"\n\nWhat You want to do with your cases now"<<end];
cout<<"\nl-Save new phone number\n";
cout<<"2-Delete any number"<<endl;
cout<<"3-Search and Modify"<<end 1;
cout<<"4-See All list"*<<endl;
cout<<"5-Exit\n"<<endl;
cin>>ch,
system("CLS");

switch(ch)

case 1:

 

cout<<"\n\t SAVE NEW
NUMBER: \n\n";

 

 

 

cout<<"Enter Data to nsert new person's data"<<endl,

cout<<"\nEnter Name \t";

//getline (cin, n);
https//Aveb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

 

cin>>n,

cout<<"\nEnter Phone number \t";

cin>>nm;

cout<<"Enter CNIC \t"s

cin>>cnc;

ll .creat_file(n,nm,cnc);

cout<<"Number of "<<n<<" has been Saved in your phone directory "<<endl,
break;

case 2:

 

 

cout<<"\n\t DELETE
NUMBER: \n\n";

 

 

cout<<"\nEnter name of person whose number you want to dekte\n"<<end1,;

/gethne(cin,n);

ci >n,

ll terminating file(n);

cout<<"\nNumber of "<<n<<" Has been removed from your list"<<end];
break;

case 3:

 

SEARCH AND UPDATE

cout<<"Enter NAME of Person to search it from list\t";

https//Aveb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

cin>>n;
ll.search(n);
break;

case 4:

 

cout<<"\nit PRINTING ALL
\n\n";

 

 

11.printQ;
break;

case 5:

 

 

now \n\n";
ll .print_nowQ;
break;
default:
"<<endl,
$
$
while(ch!=5);
cout<<"\nTHANK YOU"<<endl;
getchQ;
$

https//Aveb. facebook.com/DJVpro grammers

 
Program.codes.cpp@gmail.com. https://programcodescpp.wixsite.com/programcodes

 

Website:

https///pro gramcodescpp. wixsite.com/pro gramcodes

Email:

Program.codes.cpp@gmail.com

 

Facebook Page:

https//Aweb. facebook.com/DJVpro grammers

YouTube Channel

https/Av ww. youtube.co m/channel/UC fizosx-OfkFJ6R-oF619-A?view_as=subscriber

https//Aveb. facebook.com/DJVpro grammers

 
