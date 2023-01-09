#include<iostream>

using namespace std;

int main()

{

    int a,sum=0;
    cout <<"enter the value of a";
    cin >> a;
    for(int i=2;i<=a;i++)

    {
        if(a%i==0)
        {
            cout <<"it's not a prime number";
            break;
        }
        else{
            cout<<"it's a prime number";
            break;
        }
    }
        
}