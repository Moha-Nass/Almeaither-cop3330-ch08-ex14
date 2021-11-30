/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mohammed Almeaither
 */

#include <iostream>
#include<string>
using namespace std;

// we don't use const in function because we can't change the vlaue inside function
// const is used only for those variables whose values need to be fixed and don't
// need any modification


// when we modify const value program will give error.
void fun(const int a)
{
    cout<<"displaying value of variable with const\t";
    cout<<a<<endl<<endl;

}
void fun(const int age, string firstname, string lastname )
{
    cout<<"dispayiong first and last name with age cosntatn"<<endl;
    cout<<firstname<<" "<<lastname<<" "<<age<<endl<<endl;
}
int main()
{
    int a;
    a = 45;
    fun(a);
    fun(a,"John","Mayer");



    return 0;
}
