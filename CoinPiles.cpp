#include<iostream>
using namespace std;
int main()
{
    long long a,b,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        //checks if both pile are empty
        if(a==0 && b==0) 
        {
            cout<<"YES\n";
            continue;
        }

        //check if either pile is empty
        if(a==0 || b==0)
        {
            cout<<"NO\n";
            continue;
        }

        //check sum of coins is divisible by 3 because we move 3 coins in total
        //check neither pile has more than double the coins of the other pile
        //because in the end, the coins must be 2-1 or 1-2
        if((a+b) % 3 == 0 && 2*a >= b && 2*b >= a)
        {
            cout<<"YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
    }
    return 0;
}