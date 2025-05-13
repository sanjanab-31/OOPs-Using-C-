#include<iostream>
#include<string>
using namespace std;
struct warehouse{
    string name;
    int quantity;
    float price;
}obj[100];

int n=0;

void AddStock()
{
    cout<< "Enter the name of the product: ";
    cin>>obj[n].name;
    cout<< "Enter the quantity of the product: ";
    cin>>obj[n].quantity;
    cout<< "Enter the price of the product: ";
    cin>>obj[n].price;
    n++;
}


void ViewStock()
{
    for(int i=0;i<n;i++)
    {
        cout<< "Product Name: "<<obj[i].name<<endl;
        cout<< "Product Quantity: "<<obj[i].quantity<<endl;
        cout<< "Product Price: "<<obj[i].price<<endl;
    }
}

void DeleteStock()
{
    string name;
    cout<< "Enter the name of the product you want to delete: ";
    cin>>name;
    for(int i=0;i<n;i++)
    {
        if(obj[i].name==name)
        {
            for(int j=i;j<n-1;j++)
            {
                obj[j]=obj[j+1];
            }
            n--;
            break;
        }
    }
}

void UpdateStock()
{
    string name;
    cout<< "Enter the name of the product you want to update: ";
    cin>>name;
    for(int i=0;i<n;i++)
    {
        if(obj[i].name==name)
        {
            cout<< "Enter the new quantity of the product: ";
            cin>>obj[i].quantity;
            cout<< "Enter the new price of the product: ";
            cin>>obj[i].price;
            break;
        }
    }
}
int main()
{
    int choice;
    do{
        cout<< "1. Add stock" << endl;
        cout<< "2. View stock" << endl;
        cout<< "3. Delete stock" << endl;
        cout<< "4. Update stock" << endl;
        cout<< "5. Exit" << endl;
        cout<< "Enter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                AddStock();
                break;
            case 2:
                ViewStock();
                break;
            case 3:
                DeleteStock();
                break;
            case 4:
                UpdateStock();
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }
    }while(choice!=5);
    return 0;
}