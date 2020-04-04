#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<t+1;i++)
    {
        string s;
        cin>>s;
        int n=s.length();
        int st=0;
        string res="";
        for(int j=0;j<n;j++)
        {
            if(st==0)
            {
                while(st!=((int)s[j]-48))
                {
                    st+=1;
                    res+="(";
                }
                res+=s[j];
            }
            else if((j!=0)&&(s[j]==s[j-1]))
            {
                res+=s[j];
            }
            else if((j!=0)&&(s[j]>s[j-1]))
            {
                while(st!=((int)s[j]-48))
                {
                    st+=1;
                    res+="(";
                }
                res+=s[j];
            }
            else if((j!=0)&&(s[j]<s[j-1]))
            {
                while(st!=((int)s[j]-48))
                {
                    st=st-1;
                    res+=")";
                }
                res+=s[j];
            }
            else
                continue;
        }
        while(st!=0)
        {
            st=st-1;
            res+=")";
        }
        cout<<"Case #"<<i<<": "<<res<<endl;
    }
    return 0;
}
