#include<iostream>
#include<limits.h>
using namespace std;
class Solution
{
public:
    int result(int x)
    {
        long long res=0;
        while(x)
            {
                res=res*10+x%10;
                x/=10;
            }
        return (res>INT_MAX||res<INT_MIN)?0:res;
    }   
};
int main()
{
    int x;
    Solution Solution1;
    while(1){
    cin>>x;
    cout<<Solution1.result(x)<<endl;
    }
}
