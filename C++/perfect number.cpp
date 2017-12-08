#include <iostream>
using namespace std;
int main()
{
    int i, j, start, end, sum;
    cout<<"Enter lower limit: ";
    cin>>start;
    cout<<"Enter upper limit: ";
    cin>>end;
    cout<<" Perfect numbers are: \n" ;
    for(i=start; i<=end; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            cout<<i<<",";
        }
    }
    return 0;
}
