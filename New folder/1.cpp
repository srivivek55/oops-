#include<iostream>
using namespace std;
void printmenu()
{
    static int i;
    int a;
    cout<<"Enter your choice"<<endl;
    cout<<"1 to enter name"<<endl<<"2 to print name"<<endl<<"3 to delete name"<<endl<<"4 to exit"<<endl;
    cin>>a;
    cin>>i;
    switch(a)
    {
        case 1:
        {
         insertname(*i);
        }
        case 2:
            {
                printlist(*j);
            }
    }
}
void printlist(char*s[],int *a);
{
    for(int x=0;x<=a;x++);
    {
        cout<<s[x}<<endl;
    }
}
void insertname(char *s[],int *a);
{
for (int j=0;j<=a;j++)
{
    cin>>s[j];
}
void deletename(char *s[],int *a);
void main()
{
    char ch;
    do
    {
    int  a,b,c;
    printmenu();
    cout<<"do you want to cintinue?"<<endl;
    gets(ch);
    }while(ch==Y||ch==y)

}
