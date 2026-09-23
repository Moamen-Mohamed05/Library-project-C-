#include"Transaction.h"
#include <iostream>
using namespace std;
Transaction::Transaction()
{
	id=0;
	customerId=0;
	bookId=0;
	issueDate=" a";
	returnDate=" a";
	 fine=0;
}
Transaction::Transaction(int i, int c, int b, const string& d1, const string& d2, float f)
{
	id=i;
	customerId=c;
	bookId=b;
	issueDate=d1;
	returnDate=d2;
	fine=f;
}
void Transaction::display() const
{
    cout << "\nID: " << id << "\nCustomer ID: " << customerId << "\nBook ID: " << bookId<< "\nIssue Date: " << issueDate << "\nReturn Date: " << returnDate << "\nFine: " << fine << endl;
}
int Transaction::getId() const
{
    return id;
}
void addTransaction(Transaction arr[], int& count)
{
    int id, cid, bid; string iDate, rDate; float fine;
    cout << "Enter ID: "; 
	cin >> id;
    cout << "Enter Customer ID: "; 
	cin >> cid;
    cout << "Enter Book ID: ";
	 cin >> bid;
	  cin.ignore();
    cout << "Issue Date: ";
	 getline(cin, iDate);
    cout << "Return Date: ";
	 getline(cin, rDate);
    cout << "Fine: ";
	 cin >> fine;
    arr[count++] = Transaction(id, cid, bid, iDate, rDate, fine);
}
void displayTransactions(const Transaction arr[], int count)
{
    for(int i=0;i<count;++i)
	arr[i].display();
}
void searchTransaction(const Transaction arr[], int count, int id)
{
    for(int i=0;i<count;++i)
        if(arr[i].getId()==id)
		{
            arr[i].display();
            return;
        }
    cout << "Transaction not found\n";
}
void deleteTransaction(Transaction arr[], int& count, int id)
{
    for(int i=0;i<count;++i)
        if(arr[i].getId()==id)
		{
            for (int j=i;j<count-1;++j)
			arr[j]=arr[j+1];
            count--;
            return;
        }
    cout << "Transaction not found\n";
}
 
