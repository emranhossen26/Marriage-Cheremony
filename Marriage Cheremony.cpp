#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,n,taka,sum=0,sum2=0,giftn;

    string address,gift,name;

    cout<<"How Many People Invited:";
    cin>>n;
    cin.ignore();
    int flag=0;


    for(i=1; i<=n; i++)
    {
        cout <<i<<"."<< "Name:";
        getline(cin,name);
        cout <<"Amount:";
        cin>>taka;

        if(taka==0)
        {
            flag=1;
            cout<<"Gift Name:";
            cin.ignore();
            getline(cin,gift);
            cout<<"Number Of Gift:";
            cin>>giftn;
            cout << "Address:";
            cin.ignore();
            getline(cin,address);
            sum2=sum2+giftn;

        }

        else
        {

            cout <<"Address:";
            cin.ignore();
            getline(cin,address);

        }

        sum=sum+taka;

        cout <<"Total Amount:"<<sum<<endl;
        cout<<"Total gift:"<<sum2<<endl;
        cout<<endl;


    }

    return 0;
}
