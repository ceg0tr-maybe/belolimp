#include <iostream>


using namespace std;


int main()
{
    int n;
    cin>>n;


    int ol[n];


    for (int i=0;i<n;i++){
        
        
        ol[i] = i + 1;
        
        }
    int nw[n];

    if (n%2==0){  

    int j =0;
    int i = 0;

    while (i<n/2)
    {

        nw[j] =ol[i];
        i++;
        j += 2;


    }
    j = 0;

    i = 0;
    while (i<n/2+1)
    {

        nw[j-1] =ol[n-i];
        i++;
        j+=2;



    }}
    else{ 
    int j=0;
    int i=0;
    while (i<n/2+1)
    {
        nw[j] = ol[n-i-1];
        i++;
        j +=2;

    }

    j=0;
    
    i=0;

    while (i<n/2+1){
        nw[j+1] = ol[i];
        i++;
        j += 2;
    }
    }
    for (int i=n-1;i>=0;i--)
    {
        
        
    cout<<nw[i]<<" ";
        
    }
    return 0;
}
