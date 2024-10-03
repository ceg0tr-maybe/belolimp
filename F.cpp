#include <iostream>
#include <string>


using namespace std;


int main()
{
    int n;
    cin>>n;

    string st[n];
    

    for(int i=0;i<n;i++)
    {
        cin>>st[i];
        
    }
    int a[26]={};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<st[i].size();j++)
        {
            a[int(st[i][j])-'a']++;
        }}
        
    int nm;
    int m=a[0];

    for(int i=1;i<26;i++)
    {
        if(a[i]>m)
        {
            m=a[i];nm=i;
            
        }}
    int AN=n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<st[i].size();j++)
        {
            if(st[i][j]==(nm+'a'))
                {
                    AN--;break;}
            }}
    cout<<AN;
    return 0;
}
