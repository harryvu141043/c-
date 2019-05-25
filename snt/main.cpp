#include <iostream>

using namespace std;
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {


         if(i%j==0)
        {
            count+=1;

        }
        }
        if(count==2){
            sum+=i;

        }
    }
    cout<<sum;
}
