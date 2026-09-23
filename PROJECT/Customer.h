#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;
class Customer
{
private:
    string name;
    int age;
    int id;
    int contact;

public:
	Customer();
    void add_customer();
    void print_info() const;
    void edit_customer();
    int get_id() const;
   // void set_customer(string n, int a, int i, int c);
};

class CustomerManager
{
private:
    static const int MAX_CUSTOMERS = 100;
    Customer customers[MAX_CUSTOMERS];
    int count;

public:
    CustomerManager();
    void add_customer();
    void display_all_customers() const;
    void search_customer(int id) const;
    void delete_customer(int id);
    void edit_customer(int id);
};


#endif
