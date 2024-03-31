#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(void)
{
    int a,cnt=0;
    
    cin>>a;
    string k[a];
    int check[a];
    for(int i=0;i<a;i++)
    {
        cin>>k[i];
        if(k[i][cnt]==0)
        {
            check[i]=cnt;
            cnt=0;
        }
        else
            cnt++;
    }
    for(int i=0;i<a;i++)
    {
        cout<<k[i][0]<<k[i][cnt]<<endl;
    }
}

    
