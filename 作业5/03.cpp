#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string ID, bookName, author, publisher;
	
public:
	Book* next;
	Book(string _ID, string _bookName, string _author, string _publisher) :ID(_ID), bookName(_bookName), author(_author), publisher(_publisher) { next = NULL; }
	void insert(Book& newBook);
	void print();
	string getName() { return bookName; }
};

void Book::insert(Book& new_book) {
	next = &new_book;
}

void Book::print() {
	cout << "ID: " << ID << " 书名: " << bookName << " 作者: " << author << " 出版社: " << publisher << endl;
}

void printAll(Book& head) {
	Book* p = head.next;
	while (p != NULL) {
		p->print();
		p = p->next;
	}
}

void dltNode(Book& head, string _bookName) {
	Book* last=&head;
	Book* p = head.next;
	string name;
	while (p != NULL) {
		name = p->getName();
		if (name == _bookName) {
			last->next = p->next;
			return;
		}
		last = p;
		p = p->next;
	}
}


int main() {
	Book head("", "", "", ""), book1("1","a1","b1","c1"), book2("2", "a2", "b2", "c2");
	head.insert(book1);
	book1.insert(book2);

	printAll(head);

	dltNode(head, "a1");
	cout << "__________________________________\n\n删除后:\n\t";
	printAll(head);
	system("pause");


	return 0;
}