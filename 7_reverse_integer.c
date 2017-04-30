#include<stdio.h>
int main()
{
    int x;
    while(1){
    scanf("%d",&x);
    if(x>-10&&x<10)
         printf("%d\n",x);
    else{
    int flag=1;
    if(x<0)
        {
            flag=-1;
            x*=flag;
        }   
    int result=0;
    for(int a;x>0;x/=10)
    {
        result*=10;
        a=x%10;
        result+=a;
    }
    printf("%d\n",result*flag);
    }
    }
    return 0;
}
