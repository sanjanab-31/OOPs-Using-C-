// Write a C++ program to display Pascal's triangle like a pyramid.

// Sample Output:

//  Input number of rows: 5                                               
//           1                                                            
//         1   1                                                          
//       1   2   1                                                        
//     1   3   3   1                                                      
//   1   4   6   4   1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=n-i; j>1; j--)
            cout<<" ";
        int c=1;
        for(int j=0; j<=i; j++)
        {
            cout<<c<<" ";
            c=c*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}
