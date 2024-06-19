#include<bits/stdc++.h>
#include<Windows.h> // Include the appropriate header file for "timeGetTime" function
using namespace std;

int main()
{
    long beginTime = timeGetTime();
    int n;
    cin >> n;
    while(n>0)
    {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << endl;
        n--;
    }
    long executionTime = timeGetTime() - beginTime;
    cout << "Execution time: " << executionTime << " ms" << endl;
    return 0;
}