// min_max
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout <<"Enter size of array = ";
    cin >> n;
    cout <<"Enter elements of array = "<<endl;
    for(int i = 0 ; i<n; i++ )
    {
        cout << "Enter element arr["<<i<<"] = ";
        cin >> arr[i];
    }

    int ans = INT16_MAX;
     for(int i = 0 ; i<n; i++ )
     {
        if(arr[i]<ans)
        {
            ans = arr[i];
        }
     }
     cout <<"Minimum element of array = "<< ans << endl;


     for(int i = 0 ; i<n; i++ )
     {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
     }
     cout <<"Minimum element of array = "<< ans;
   return 0;
}