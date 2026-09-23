#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
    name = "";
    age = 0;
    id = 0;
    contact = 0;
}
void Customer::add_customer()
{
    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your contact number: ";
    cin >> contact;
}
void Customer::print_info() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "ID: " << id << endl;
    cout << "Contact: " << contact << endl;
    cout << "-----------------------" << endl;
}
void Customer::edit_customer()
{
    string namval;
    int ageval, idval, contactval;
    cin.ignore();
    cout << "Enter your new name: ";
    getline(cin, namval);
    cout << "Enter your new age: ";
    cin >> ageval;
    cout << "Enter your new ID: ";
    cin >> idval;
    cout << "Enter your new contact number: ";
    cin >> contactval;
    name = namval;
    age = ageval;
    id = idval;
    contact = contactval;
}
int Customer::get_id() const
{
    return id;
}
/*void Customer::set_customer(string n, int a, int i, int c)
{
    name=n;
    age=a;
    id=i;
    contact=c;
}*/
CustomerManager::CustomerManager()
{
    count = 0;
}
void CustomerManager::add_customer()
{
    if (count>=MAX_CUSTOMERS)
	{
        cout<<"Customer list is full!"<<endl;
        return;
    }
    customers[count].add_customer();
    count++;
    cout <<"Customer added successfully!"<<endl;
}

void CustomerManager::display_all_customers() const
{
    if(count==0)
	{
        cout <<"No customers to display."<< endl;
        return;
    }
    for (int i=0;i<count;i++)
	{
        customers[i].print_info();
    }
}
void CustomerManager::search_customer(int id) const
{
    for (int i=0;i<count;i++)
	{
        if (customers[i].get_id() == id)
		{
            cout << "Customer found:\n";
            customers[i].print_info();
            return;
        }
    }
    cout << "Customer with ID " << id << " not found." << endl;
}

void CustomerManager::delete_customer(int id)
{
    for (int i=0; i<count; i++)
	{
        if (customers[i].get_id()==id)
		{
            for (int j=i;j<count-1;j++)
			{
                customers[j]=customers[j+1];
            }
            count--;
            cout << "Customer deleted successfully!" << endl;
            return;
        }
    }
    cout <<"Customer with ID "<<id<<" not found."<< endl;
}

void CustomerManager::edit_customer(int id)
{
    for (int i=0;i<count;i++)
	{
        if (customers[i].get_id() == id)
		{
            cout <<"Editing customer with ID "<<id<<":\n";
            customers[i].edit_customer();
            cout <<"Customer updated successfully!"<<endl;
            return;
        }
    }
    cout <<"Customer with ID "<<id<<" not found."<<endl;
}

