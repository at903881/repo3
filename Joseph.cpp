//Joseph problem
/////////////////LIBRARIES///////////////////
#include<bits/stdc++.h>
using namespace std;
/////////////////////CLASSES//////////////////

//////////////U D FUNCTIONS//////////////////////////////
int place(int total,int k);
////////////////MAIN///////////////////////////////////
int main()
{
    int n,k;
    cin>>n>>k;//14 2
    cout<<place(n,k);



}

/////////////////////////OUTPUT///////////////////////////////
//13
/////////////////////////FUNCTIONS//////////////////////////////
int place(int total,int k)
{
    if(total==1)
    {
        return 1;
    }
    else
    {
        int z=(place(total-1,k)+k)%total;
        if(z==0)
        {
            return total;
        }
        else
        {
            return z;
        }
    }
}
