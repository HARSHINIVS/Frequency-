#include <bits/stdc++.h>
using namespace std;

int main()
{
   
    int arr[] =  {1, 2, 3, 5, 2, 9, 7, 3, 5};
     int n = sizeof(arr)/sizeof(arr[0]);

    int visited[n];

    for(int i=0; i<n; i++)
    {
        if(visited[i]!=1)
        {
           int count = 1;
           for(int j=i+1; j<n; j++)
            {
              if(arr[i]==arr[j])
              {
                 count++;
                 visited[j]=1;
              }
            }
            cout<<arr[i]<<" appears "<<count<<" times "<<endl;
        }
     }

    return 0;
}                 
