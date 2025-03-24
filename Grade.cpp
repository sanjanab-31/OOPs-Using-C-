// Develop a c++ program to implement a student grade tracker using arrays.Create an array to store the grades of multiple tsudents and implemenr functon to calculate the average,find the highest and lowst grades, and displlay the iverall performancce
#include<iostream>
using namespace std;
class grade
{
    private:
        int n;
        int *grades;
    public:
        void get_data();
        void display_data();
        void average();
        void highest();
        void lowest();
};
void grade::get_data()
{
    cout<<"Enter the number of students: ";
    cin>>n;
    grades = new int[n];
    cout<<"Enter the grades of students: ";
    for(int i=0;i<n;i++)
    {
        cin>>grades[i];
    }
}
void grade::display_data()
{
    cout<<"The grades of students are: ";
    for(int i=0;i<n;i++)
    {
        cout<<grades[i]<<" ";
    }
    cout<<endl;
}
void grade::average()
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=grades[i];
    }
    cout<<"The average grade is: "<<(float)sum/n<<endl;
}
void grade::highest()
{
    int max=grades[0];
    for(int i=1;i<n;i++)
    {
        if(grades[i]>max)
        {
            max=grades[i];
        }
    }
    cout<<"The highest grade is: "<<max<<endl;
}
void grade::lowest()
{
    int min=grades[0];
    for(int i=1;i<n;i++)
    {
        if(grades[i]<min)
        {
            min=grades[i];
        }
    }
    cout<<"The lowest grade is: "<<min<<endl;
}
int main()
{
    grade g;
    g.get_data();
    g.display_data();
    g.average();
    g.highest();
    g.lowest();
    return 0;
}