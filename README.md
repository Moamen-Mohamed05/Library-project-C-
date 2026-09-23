📚 Library Management System
A console-based Library Management System developed in C++ using Object-Oriented Programming (OOP) concepts.

The system provides basic management functionality for customers, books, and library transactions through an interactive command-line menu.

✨ Features
👤 Customer Management
Add a new customer

Display all customers

Search for a customer by ID

Edit customer information

Delete a customer

Store customer name, age, ID, and contact number

📖 Book Management
Add new books

Search for books by:

Book number

Book title

Edit book information

Delete books

Store book title, author, genre, book number, and availability

🔄 Transaction Management
Add a library transaction

Display all transactions

Search for a transaction by ID

Delete a transaction

Store:

Transaction ID

Customer ID

Book ID

Issue date

Return date

Fine

🛠️ Technologies Used
C++

Object-Oriented Programming (OOP)

Classes and Objects

Encapsulation

Inheritance

Arrays

Static Member Functions

Constructors

Getters and Setters

Header and Source Files

🧩 OOP Concepts
The project demonstrates several fundamental OOP concepts:

Encapsulation
Customer and book data members are declared as private and accessed through public member functions such as getters, setters, and management functions.

Inheritance
The project includes inheritance through the print class:

class print : public new_book

Constructors
Constructors are used to initialize objects of Customer, new_book, and Transaction.

Classes and Objects
The system is divided into multiple classes to represent different parts of the library:

Customer

CustomerManager

new_book

print

Transaction

📂 Project Structure
Library-Management-System/
│
├── main.cpp
│
├── Customer.h
├── Customer.cpp
│
├── Book.h
├── Book.cpp
│
├── Transaction.h
└── Transaction.cpp

▶️ How to Run
1. Clone the repository
git clone <repository-url>

2. Navigate to the project directory
cd Library-Management-System

3. Compile the project
Using g++:

g++ main.cpp Customer.cpp Book.cpp Transaction.cpp -o LibraryManagementSystem

4. Run the program
On Windows:

LibraryManagementSystem.exe

On Linux/macOS:

./LibraryManagementSystem

🖥️ Program Menu
The program provides an interactive menu with the following options:

1. Add Customer
2. Display all customers
3. Search Customer
4. Edit Customer
5. Delete Customer
6. Add Book
7. Search Book
8. Edit Book
9. Delete Book
10. Add Transaction
11. Display Transactions
12. Search Transaction
13. Delete Transaction
14. Exit

📌 Notes
The application is currently console-based.

Data is stored in memory using arrays during program execution.

Customer and book lists have a maximum capacity of 100 items.

Data is not persisted to a database or file, so it is lost when the program exits.

🎯 Project Purpose
This project was developed as an academic project to practice C++ programming and Object-Oriented Programming concepts through the implementation of a simple library management system.
