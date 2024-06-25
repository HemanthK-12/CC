#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    while(n--)
    {
        int array_size;
        cin>>array_size;
        vector<int> strength;
        bool t=false;
        for(int i=0;i<array_size;i++)
        {
            int loc;
            cin>>loc;
            strength.push_back(loc);
        }
        int sum = accumulate(strength.begin(), strength.end(), 0);
        if(sum % 3 == 0)
        {
            cout<<"0\n";
            continue;
        } 
        else if(sum%3==2)
        {
            cout<<"1\n";
            continue;
        }
        for(int i=0;i<array_size;i++)
        {
            if((sum-strength[i])%3==0)
            {  
                cout<<"1\n";
                continue;
                t=true;
            }
        }
        if(!t)
        {
            cout<<"7676\n";
        }        
    }
}