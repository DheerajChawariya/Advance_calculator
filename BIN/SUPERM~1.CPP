//**************************************************************************************
// HEADER FILE USED IN PROJRCT
//**************************************************************************************
#include<iostream.h>
//#include<windows.h>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
//**************************************************************************************
//CLASS USED IN PROJECT
//**************************************************************************************
class product
{
    int pro_no;
    char pro_name[50];
    float price,qty,tax,dis;
    public:
    product()
    {
        pro_no=000;
        strcpy(pro_name,"...");
        price=000;
        qty=000;
        tax=000;
        dis=000;
    }
    void creating_product()
    {
        cout<<"Please enter the product number of the product: ";
        cin>>pro_no;
        cout<<"\nPlease enter the name of the product: ";
        cin>>pro_name;
        cout<<"\nPlease enter the price of the product: ";
        cin>>price;
        cout<<"\nPlease enter the discount (%): ";
        cin>>dis;
    }
    void product_show()
    {
        cout<<"\nThe product number of the product: "<<pro_no;
        cout<<"\nThe name of the product: "<<pro_name;
        cout<<"\nThe price of the product: "<<price;
        cout<<"\nDiscount: "<<dis;
    }
    int retpro_no()
    {
        return pro_no;
    }
    float retprice()
    {
        return price;
    }
    int retdis()
    {
        return dis;
    }
    char* retname()
    {
        return pro_name;
    }
}; //CLASS ENDS HERE

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//**************************************************************************************
//FUNCTION TO WRITE IN FILE
//**************************************************************************************
void write_product()
{
    fstream file;
    product prdt;
    file.open("Store.txt",ios::out|ios::app);
    prdt.creating_product();
    file.write((char*)&prdt,sizeof(product));
    file.close();
    cout<<"\n\nThe product has been created ";
    getch();
}
//**************************************************************************************
//FUNCTION TO PRINT ALL THE PRODUCTS
//**************************************************************************************
void print_all()
{
    fstream file;
    product prdt;
    system("cls");
    cout<<"\n\n\n\t\tDISPLAY ALL RECORD!!!\n\n";
    file.open("Store.txt",ios::in);
    while(file.read((char*)&prdt,sizeof(product)))
    {
        prdt.product_show();
        cout<<"\n\n=============================\n";
        getch();
    }
    file.close();
    getch();
}
//**************************************************************************************
//FUNCTION TO PRINT SPECIFIC RECORD FROM FILE
//**************************************************************************************
void print_sp(int n)
{
    fstream file;
    product prdt;
    int flag=0;
    file.open("Store.txt",ios::in);
    while(file.read((char*)&prdt,sizeof(product)))
        {
        if(prdt.retpro_no()==n)
        {
            system("cls");
            prdt.product_show();
            flag=1;
        }
    }
    file.close();
    if(flag==0)
    cout<<"\n\nno record found";
    getch();
}
//**************************************************************************************
//FUNCTION TO EDIT RECORD OF FILE
//**************************************************************************************
void edit_product()
{
    fstream file;
    product prdt;
    int no,found=0;
    system("cls");
    cout<<"\n\n\tTo edit ";
    cout<<"\n\n\tPlease enter the product number of the product: ";
    cin>>no;
    file.open("Store.txt",ios::in|ios::out);
    while(file.read((char*)&prdt,sizeof(product)) && found==0)
    {
        if(prdt.retpro_no()==no)
        {
            prdt.product_show();
            cout<<"\n\n\n\tPlease enter the new details of product:\n\n";
            prdt.creating_product();
            int pos=-1*sizeof(prdt);
            file.seekp(pos,ios::cur);
            file.write((char*)&prdt,sizeof(product));
            cout<<"\n\n\t Record Updated";
            found=1;
        }
    }
    file.close();
    if(found==0)
    cout<<"\n\n Record not found ";
    getch();
}
//**************************************************************************************
//FUNCTION TO REMOVE RECORD OF FILE
//**************************************************************************************
void remove_product()
{
    fstream file;
    product prdt;
    int no;
    system("cls");
    cout<<"\n\n\n\tRemove Record";
    cout<<"\n\nPlease enter the product number of the product you want to remove: ";
    cin>>no;
    file.open("Store.txt",ios::in|ios::out);
    fstream file2;
    file2.open("Temp.txt",ios::out);
    file.seekg(0,ios::beg);
    while(file.read((char*)&prdt,sizeof(product)))
    {
        if(prdt.retpro_no()!=no)
        {
            file2.write((char*)&prdt,sizeof(product));
        }
    }
    file2.close();
    file.close();
    remove("Store.txt");
    rename("Temp.txt","Store.txt");
    cout<<"\n\n\tRecord Deleted ..";
    getch();
}
//**************************************************************************************
//FUCTION TO DISPLAY ALL PRODUCT PRICE LIST
//**************************************************************************************
void menu()
{
    fstream file;
    product prdt;
    system("cls");
    file.open("Store.txt",ios::in);
    if(!file)
    {
        cout<<"ERROR!!! FILE COULD NOT BE OPEN";
        cout<<"\n Go To Admin Menu to create File";
        cout<<"\n\n Program is closing ....";
        getch();
        exit(0);
    }
    cout<<"\n\n\t\tProduct MENU\n\n";
    cout<<"====================================================\n";
    cout<<"P.NO.\t\tNAME\t\tPRICE\n";
    cout<<"====================================================\n";
    while(file.read((char*)&prdt,sizeof(product)))
    {
        cout<<prdt.retpro_no()<<"\t"<<prdt.retname()<<"\t\t"<<prdt.retprice()<<"\n";
    }
    file.close();
}
//**************************************************************************************
//FUNCTION TO PLACE ORDER AND GENERATING BILL FOR PRODUCTS
//**************************************************************************************
void place_your_order()
{
    fstream file;
    product prdt;
    int order_arr[50],quan[50],c=0;
    float amt,damt,total=0;
    char ch='Y';
    menu();
    cout<<"\n============================";
    cout<<"\n PLACE YOUR ORDER";
    cout<<"\n============================\n";
    do{
        cout<<"\n\nEnter the product number of the product : ";
        cin>>order_arr[c];
        cout<<"\nQuantity in number : ";
        cin>>quan[c];
        c++;
        cout<<"\nDo You Want To Order Another Product ? (y/n)";
        cin>>ch;
    }while(ch=='y' ||ch=='Y');
    cout<<"\n\nThank You For Placing The Order";
    getch();
    system("cls");
    gotoxy(36,2);
    cout<<"-INVOICE-\n";
    cout<<"\nPr No.\tPr Name \tQuantity \tPrice\tAmount \t\tAmount after discount\n";
    for(int i=0;i<=c;i++)
    {
        file.open("Store.txt",ios::in);
        file.read((char*)&prdt,sizeof(product));
        while(!file.eof())
        {
            if(prdt.retpro_no()==order_arr[i])
            {
                amt=prdt.retprice()*quan[i];
                damt=amt-(amt*prdt.retdis()/100);
                cout<<"\n"<<order_arr[i]<<"\t"<<prdt.retname()<<"\t\t"<<quan[i]<<"\t\t"<<prdt.retprice()<<"\t"<<amt<<"\t\t"<<damt;
                total+=damt;
            }
            file.read((char*)&prdt,sizeof(product));
        }
        file.close();
    }
    gotoxy(36,10);
    cout<<"TOTAL = "<<total;
    getch();
}
//**************************************************************************************
//FUNCTION TO CREATE BOX
//**************************************************************************************
void box(void)
{

    fstream file;
    product prdt;
    int i;
    for(i=18;i<60;i++)
    {
        gotoxy(i,1);
        cout<<"*";
    }
    for(i=18;i<60;i++)
    {
        gotoxy(i,3);
        cout<<"*";
    }
    for(i=1;i<22;i++)
    {
        gotoxy(16,i);
        cout<<"*";
    }
    for(i=18;i<60;i++)
    {
        gotoxy(i,21);
        cout<<"*";
    }
    for(i=1;i<22;i++)
    {
        gotoxy(61,i);
        cout<<"*";
    }
}
//**************************************************************************************
//INTRODUCTION FUNCTION
//**************************************************************************************
void intro()
{
    system("cls");
    box();
    gotoxy(25,2);
    cout<<"|----------WELCOME----------|";
    gotoxy(32,5);
    cout<<"| SUPER MARKET |";
    gotoxy(32,6);
    cout<<"|BILLING SYSTEM|";
    gotoxy(33,10);
    cout<<"-MINI-PROJECT-";
    gotoxy(20,17);
    cout<<"MADE BY : \n";
    gotoxy(20,19);
    cout<<"COLLEGE : GRAPHIC ERA UNIVERSITY\n\t\t\t";
    getch();
}
//**************************************************************************************
//ADMINISTRATION MENU FUNCTION
//**************************************************************************************
void admin_menu()
{
    system("cls");
    box();
    char ch2;
    gotoxy(35,2);
    cout<<"ADMIN MENU";
    gotoxy(32,4);
    cout<<"1.CREATE PRODUCT";
    gotoxy(28,6);
    cout<<"2.PRINT ALL PRODUCTS";
    gotoxy(36,8);
    cout<<"3.QUERY ";
    gotoxy(32,10);
    cout<<"4.EDIT PRODUCT";
    gotoxy(32,12);
    cout<<"5.REMOVE PRODUCT";
    gotoxy(30,14);
    cout<<"6.VIEW PRODUCT MENU";
    gotoxy(30,16);
    cout<<"7.BACK TO MAIN MENU";
    gotoxy(36,18);
    cout<<"8.EXIT";
    gotoxy(25,20);
    cout<<"Please Enter Your Choice (1-7) ";
    ch2=getche();
    switch(ch2)
    {
        case '1':
            system("cls");
            write_product();
            break;
        case '2':
            print_all();
            break;
        case '3':
            int num;
            system("cls");
            cout<<"\n\n\tPlease Enter The Product No. ";
            cin>>num;
            print_sp(num);
            break;
        case '4':
            edit_product();
            break;
        case '5':
            remove_product();
            break;
        case '6':
            menu();
            getch();
        case '7':
            break;
        case '8':
            exit(0);
            break;
        default:
            admin_menu();
    }
}
//**************************************************************************************
//THE MAIN FUNCTION OF PROGRAM
//**************************************************************************************
int main()
{
    char ch;
    intro();
    do{
        system("cls");
        box();
        gotoxy(34,2);
        cout<<"MAIN MENU";
        gotoxy(32,4);
        cout<<"01. CUSTOMER";
        gotoxy(30,6);
        cout<<"02. ADMINISTRATOR";
        gotoxy(34,8);
        cout<<"03. EXIT";
        gotoxy(25,10);
        cout<<"Please Select Your Option (1-3) ";
        ch=getche();
        switch(ch)
        {
            case '1':
                system("cls");
                place_your_order();
                getch();
                break;
            case '2':
                admin_menu();
                break;
            case '3':
                system("cls");
                exit(1);
                break;
        }
    }while(ch!='3');
}
//**************************************************************************************
//END OF PROGRAM
//**************************************************************************************

