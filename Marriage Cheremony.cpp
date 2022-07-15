#include<bits/stdc++.h>
using namespace std;

int main()
{

    int i,n=200,taka,sum=0,count=0;

    string address,gift,name;


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

            cout << "Address:";
            cin.ignore();
            getline(cin,address);

            count++;

        }

        else
        {

            cout << "Address:";
            cin.ignore();
            getline(cin,address);

        }

        sum=sum+taka;

        cout <<"Total Amount:"<<sum<<endl;
        cout<<"Number of gift:"<<count<<endl;
        cout<<endl;

    }

    return 0;
}