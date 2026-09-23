#include<string>
using namespace std;
class new_book
{
	private:

		int number;
		string title;
		string author;
		int availability;
		string genre;

	public:

		new_book();
		void set_number(int i);
		void set_title(string t);
		void set_author(string a);
		void set_availability(int av);
		void set_genre(string g);
		void add_books();

		int get_number();
		string get_title();
		string get_author();
		int get_availability();
		string get_genre();
		void edit_book();
		static void search(new_book books[],int count);
		static void delete_book(new_book books[], int &count, int book_number);
};
class print:public new_book
{
	public:
	void print_all_books() const;
};
