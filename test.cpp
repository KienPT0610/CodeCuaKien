#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        for (int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i%2==0)
                    cnt++;
                if((n/i)%2==0)
                    cnt++;
            }  
        }
        if(sqrt(n) == (int)sqrt(n) && cnt > 0)
            cnt--;
        cout<<cnt<<endl;    
    }   
    return 0;
}