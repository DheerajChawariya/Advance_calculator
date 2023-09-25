#include<iostream.h>
#include<conio.h>
int count;
class widget
{
public:
widget()
{
}
widget(widget &t)
{
count++;
}
};
widget f(widget &u)
{	widget v(u);
	widget w=v;
	return w;
}
main()
{
clrscr();
widget x;
widget y=f(f(x));
cout<<count;
}