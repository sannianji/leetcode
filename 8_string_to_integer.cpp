#include<string>
#include<iostream>
#include<limits.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string str)
    {
        long long result=0;
        int flag=1,a=0;
        if(str[0]=='-')
            {
                flag=-1;
                a=1;
            }
        for(;a<str.size();a++)
        {
            if(str[a]-'0'<10)
                result=result*10+str[a]-'0';
            else
                {
                    cerr<<"error"<<endl;
                    return 0;
                }
        }
        return (result<INT_MIN||result>INT_MAX)?0:result*flag;
    }
};
int main()
{
    string s;
    Solution solution;
    while(1)
        {
            cin>>s;
            cout<<solution.myAtoi(s)<<endl;
        }
}
