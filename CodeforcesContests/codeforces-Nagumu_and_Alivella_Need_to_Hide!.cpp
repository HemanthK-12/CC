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
        int rooms[array_size];
        for(int i=0;i<array_size;i++)
        {
            int loc;
            cin>>loc;
            rooms[i]=loc;
        }
        int minValue = *min_element(rooms, rooms+array_size);
        int maxValue = *max_element(rooms, rooms+array_size);

        ll minCount = count(rooms, rooms+array_size, minValue);
        ll maxCount = count(rooms, rooms+array_size, maxValue);

        cout<<(ll)(2*minCount*maxCount)<<"\n";
    }
}