#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<t+1;i++)
    {
        int n,trace=0;
        cin>>n;
        vector<vector<int> > a(n);
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                int c;
                cin>>c;
                a[j].push_back(c);
                if(j==k)
                    trace+=c;
            }
        }
        int row=0,col=0,flag=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    if(a[j][k]==a[j][l])
                    {
                        row+=1;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    {
                        flag=0;
                        break;
                    }
            }
        }
        int flag1=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n-1;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    if(a[k][j]==a[l][j])
                    {
                        col+=1;
                        flag1=1;
                        break;
                    }
                }
                if(flag1==1)
                    {
                        flag1=0;
                        break;
                    }
            }
        }
        cout<<"Case #"<<i<<": "<<trace<<" "<<row<<" "<<col<<endl;
    }
    return 0;
}
