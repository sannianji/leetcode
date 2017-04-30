#include<string>
#include<iostream>
#include<limits.h>
using namespace std;
class Solution
{
public:
    int myAtoi(string str)
    {
        if(str.size()==0)
        {
            cerr<<"no string"<<endl;
            return 0;
        }
        long long result=0;
        int flag=1,a=0;
        if(str.size()==1)
            flag=2;
        if(str[0]=='-')
            {
                if(flag==2)
                   {
                       cerr<<"only a minus,no interge"<<endl;
                        return 0;
                   }
                flag=-1;
                a=1;
            }
        else if(str[a]=='+')
            {
                if(flag==2)
                    {
                        cerr<<"only a plus,no interge"<<endl;
                        return 0;
                    }
                flag=1;
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
