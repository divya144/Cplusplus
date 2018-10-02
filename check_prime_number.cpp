/*
C++ Code to check if a given number is a prime number or not
Author:Divya Gupta
Input:An integer which has to be checked
Output: Tells if input integer is prime number or not
*/
#include<iostream>
using namespace std;
int checkprime(long long int n)
{
    if(n<=1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0||n%3==0)
    {
        return 0;
    }
    int i=5;
    while(i*i<=n)
    {
        if(n%i==0||n%(i+2)==0)
            return 0;
        i=i+6;
    }
    return 1;
}
int main()
{
    long long int a;
    cout<<"Enter the number to be checked"<<endl;
    cin>>a;
    int ans=checkprime(a);
    if(ans==1)
    cout<<a<<" is a prime number"<<endl;
    else
    cout<<a<<" is not a prime number"<<endl;	
}
