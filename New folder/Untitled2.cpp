#include<iostream>
#include<stdio.h>
using namespace std;
int name(char* given_name)
{
    int count=0;
    while(*given_name!='\0')
    {
        count++;
        given_name++;
    }
    return count;
}
int main()
{
    int a;
    char given_name[50];
    cout<<"Enter the string "<<endl;
    gets(given_name);
    a=name(given_name);
    cout<<"Length of the string is "<<endl<<a;
    return 0;
}





