#include"Book.h"
#include<iostream>
#include<string>
using namespace std;
new_book::new_book()
{
number=0;
title=" ";
availability=0;
genre=" ";
author=" ";	
}
void new_book::set_number(int i)
{
	number=i;
}
void new_book::set_title(string t)
{
	title=t;
}
void new_book::set_genre(string g)
{
	genre=g;
}
void new_book::set_availability(int av)
{
	availability=av;
}
void new_book::set_author(string a)
{
	author=a;
}
int new_book::get_number()
{
	return number;
}
string new_book::get_title()
{
	return title;
}
string new_book::get_author()
{
	return author;
}
int new_book::get_availability()
{
	return availability;
}
string new_book::get_genre()
{
	return genre;
}
void new_book::add_books()
{
    int num, av;
    string t, a, g;

    cout << "\nEnter book number: ";
    cin >> num;
    cin.ignore();
    cout << "\nEnter book title: ";
    getline(cin, t);
    cout << "\nEnter author name: ";
    getline(cin, a);
    cout << "\nEnter genre: ";
    getline(cin, g);
    cout << "\nEnter availability (how many books available): ";
    cin >> av;

    set_number(num);
    set_title(t);
    set_author(a);
    set_genre(g);
    set_availability(av);
}
void new_book::search(new_book books[],int count)
{
	int y;bool found=false;
	cout<<"Entre 1 to search for books informations by book number:\n";
	cout<<"Entre 2 to search for books informations by book title:\n";cin>>y;
		if(y==1)
		{
			int n;
			cout<<"Entre the book number: ";cin>>n;
			for(int i=0;i<count;i++)
			{
				if(books[i].get_number()==n)
				{
					cout<<"The book number= "<<books[i].get_number()<<"\n";
					cout<<"The book title= "<<books[i].get_title()<<"\n";
					cout<<"The book author= "<<books[i].get_author()<<"\n";
					cout<<"The book genre= "<<books[i].get_genre()<<"\n";
					cout<<"The book availability= "<<books[i].get_availability()<<"\n";
				    found=true;
					break;
				}
				if(!false) cout<<"Elment not found\n";
			}
		}
		
		else if(y==2)
		{
			string ti;
			cout<<"Entre the book title: ";cin>>ti;
			for(int i=0;i<count;i++)
			{
				if(books[i].get_title()==ti)
				{
					cout<<"The book number= "<<books[i].get_number()<<"\n";
					cout<<"The book title= "<<books[i].get_title()<<"\n";
					cout<<"The book author= "<<books[i].get_author()<<"\n";
					cout<<"The book genre= "<<books[i].get_genre()<<"\n";
					cout<<"The book availability= "<<books[i].get_availability()<<"\n";
				    found=true;
				}
				if(!false) cout<<"Elment not found\n";
			}
		}
		
}
void new_book::edit_book() {
    int choice;
    cout << "\nWhat would you like to edit?" << endl;
    cout << "1. Title" << endl;
    cout << "2. Author" << endl;
    cout << "3. Genre" << endl;
    cout << "4. Availability" << endl;
    cin >> choice;
    cin.ignore();
    switch (choice)
	{
    case 1:
        cout << "Enter new title: ";
        getline(cin, title);
        break;
    case 2:
        cout << "Enter new author: ";
        getline(cin, author);
        break;
    case 3:
        cout << "Enter new genre: ";
        getline(cin, genre);
        break;
    case 4:
        cout << "Enter new availability: ";
        cin >> availability;
        break;
    default:
        cout << "Invalid choice." << endl;
    }
}
void new_book::delete_book(new_book books[], int &count, int book_number)
{
    bool found = false;
    for (int i = 0; i < count; i++)
	{
        if (books[i].get_number() == book_number)
		{
            for (int j = i; j < count - 1; j++)
			{
                books[j] = books[j + 1];
            }
            count--;
            found = true;
            cout << "Book deleted successfully.\n";
            break;
        }
    }

    if (!found)
	{
        cout << "Book not found.\n";
    }
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
