#include<iostream>
using namespace std;
int main()
{
    char a[1000];
    int n,tot,max=0;
    cin>>n;
    while(n--)
    {
        cin>>a;
        //cout<<a<<"\n";
        tot=a[0]-48;
        //cout<<tot<<"\n";
        for(int i=1;a[i]!='\0';i=i+2)
        {
            if(a[i]=='+')
                tot=tot+(a[i+1]-48);
            else
                tot=tot-(a[i+1]-48);
        }
        //cout<<tot<<"\n";
        if(tot>max)
            max=tot;
    }
    cout<<max;
    return 0;
}
