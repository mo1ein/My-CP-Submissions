#include<bits/stdc++.h>
using namespace std;
int main()
{
    int index=-1,indeX=-1;
    string s;
    char f;
    cin>>s;

    f=s[s.size()-1];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2==0 && s[i]>=f)
        {
            if(i>=index)
                index=i;
        }
        else if(s[i]%2==0 && s[i]<f)
        {
            indeX=i;
            break;
        }
    }

    if(indeX!=-1)
    {
        swap(s[indeX],s[s.size()-1]);
        cout<<s;
    }
    else if(index!=-1)
    {
        swap(s[index],s[s.size()-1]);
        cout<<s;
    }
    else
        cout<<-1;
}
