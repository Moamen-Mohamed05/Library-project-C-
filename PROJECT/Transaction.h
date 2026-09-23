#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<string>
using namespace std;
class Transaction
{
	private:
    int id;
    int customerId;
    int bookId;
    string issueDate;
    string returnDate;
    float fine;

public:
    Transaction();
    Transaction(int i, int c, int b, const string& d1, const string& d2, float f);
    void display() const;
    int getId() const;
    
	
	
};
void addTransaction(Transaction[], int&);
void displayTransactions(const Transaction[], int);
void searchTransaction(const Transaction[], int, int);
void deleteTransaction(Transaction[], int&, int);

#endif
