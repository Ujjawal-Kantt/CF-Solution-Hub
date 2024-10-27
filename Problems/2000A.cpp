#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string str = to_string(a);
        string temp = "";
        temp = str[1]+str[0];
        if(temp!="10"){
            cout<<"NO"<<endl;
            return;
        }
        else if (temp=="10" and str[2]=='0'){
            cout<<'NO'<<endl;
            return ;
        }
        for (int i=2;i<str.size();i++){

        }
    }
}