// Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.

// Sample Output:

//  Input number of rows: 4                                               
//        1                                                               
//       2 3                                                              
//      4 5 6                                                             
//     7 8 9 10

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input number of rows: ";
    cin>>n;
    int num=1;
    for(int i=0; i<n; i++)
    {
        for(int j=n-i; j>1; j--)
            cout<<" ";
        for(int j=0; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}   