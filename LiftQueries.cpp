#include<iostream>
using namespace std;
int main()
{
    int t,a=0,b=7,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x-a==b-x)
        {
            a=x;
            cout<<"A"<<"\n";
        }
        else if(x-a<b-x)
        {
            a=x;
            cout<<"A"<<"\n";
        }
        else
        {
            b=x;
            cout<<"B"<<"\n";
        }
    }
    return 0;
}
