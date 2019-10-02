#include<iostream>
using namespace std;
int main()
{
    int a[]={6,2,5,5,4,5,6,3,7,6};     //match sticks in a number from 0-9
    //int b[]={1,7,4,2,3,5,0,6,9,8};   //increasing order of no.'s with min sticks
    int t,z,c;
    cin>>t;
    char s[100];

    while(t--)
    {
        cin>>s;
        c=0;
        for(int i=0;s[i]!='\0';i++)
            c=c+a[s[i]-'0'];
        if(c%2==0)
        {
            z=c;
            for(int i=z;i>0;i=i-2)
                cout<<"1";
        }
        else
        {
            z=c-3;
            cout<<"7";
            for(int i=z;i>0;i=i-2)
                cout<<"1";
        }
        cout<<"\n";
    }
    return 0;
}
