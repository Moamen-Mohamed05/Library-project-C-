#include"Book.h"
#include"Customer.h"
#include"Transaction.h"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	CustomerManager manager;
    new_book books[100]; 
    Transaction transactions[100];
    int transactionCount=0 ;
    int choice,count =0,size=100,id;
    
    do
	{
        cout << "Library Management System\n";
        cout << "1. Add Customer\n";
        cout << "2. Display all customers\n";
        cout << "3. Search Customer\n";
        cout << "4. Edit Customer\n";
        cout << "5. Delete Customer\n";
        cout << "6. Add Book\n";
        cout << "7. Search Book\n";
        cout << "8. Edit Book\n";
        cout << "9. Delete Book\n";
        cout << "10. Add Transaction\n";
        cout << "11. Display Transactions\n";
        cout << "12. Search Transaction\n";
        cout << "13. Delete Transaction\n";
        cout << "14. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
		{
            case 1:
                manager.add_customer(); //Single inheritance
                break;
            case 2:
           manager.display_all_customers();
            	break;
			case 3:
                cout << "Enter ID to search: ";
                cin >> id;
                manager.search_customer(id);
                break;
            case 4:
                cout << "Enter ID to edit: ";
                cin >> id;
              	manager.edit_customer(id);  
                break;
            case 5:
                cout << "Enter ID to delete: ";
                cin >> id;
                manager.delete_customer(id);
                break;
            case 6:
                if (count<size) 
			    {
                books[count].add_books();
                count++;
                }
				else 
			    {
                    cout << "Maximum book limit reached.\n";
                }
                break;
            case 7:
                new_book::search(books, count);
                break;
            case 8:
                {
                int book_number;
                cout << "Enter the book number to edit: ";
                cin >> book_number;

                bool found = false;
                for (int i = 0; i < count; i++) 
                {
                    if (books[i].get_number() == book_number) 
                    {
                        books[i].edit_book();
                        found = true;
                        break;
                    }
                }
                if (!found) 
                {
                    cout << "Book not found.\n";
                }
                break;
                }
            case 9:
                {
                int book_number;
                cout << "Enter the book number to delete: ";
                cin >> book_number;
                new_book::delete_book(books, count, book_number);
                break;
                }
            case 10:
                addTransaction(transactions, transactionCount);
                break;
            case 11:
                displayTransactions(transactions, transactionCount);
                break;
            case 12:
                {
                    int transactionId;
                    cout << "Enter Transaction ID to search: ";
                    cin >> transactionId;
                    searchTransaction(transactions, transactionCount, transactionId);
                }
                break;
            case 13:
                {
                    int transactionId;
                    cout << "Enter Transaction ID to delete: ";
                    cin >> transactionId;
                    deleteTransaction(transactions, transactionCount, transactionId);
                }
                break;
            case 14:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout<<"Entre 1 to rerun or any other key to exit: ";cin>>choice;
    }while(choice==1);
    return 0;
}
