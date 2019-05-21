#ifndef QUEUETP_H_
#define QUEUETP_H_

#include <iostream>
#include <string>
using namespace std;

template <class T>
class QueueTP
{
private:
	struct Node
	{
		T item;
		struct Node * next;
	};
	enum { Q_SIZE = 10 };
	Node * front;
	Node * rear;
	int items;
	const int qsize;
	QueueTP(const QueueTP & q) : qsize(0) {}
	QueueTP & operator=(const QueueTP & q) { return *this; }
public:
	QueueTP(int qs = Q_SIZE);
	~QueueTP();
	bool isempty() const;
	bool isfull() const;
	int queuecount() const;
	bool enqueue(const T & item);
	bool dequeue(T & item);
};

template <class T>
QueueTP<T>::QueueTP(int qs) : qsize(qs)
{
	items = 0;
	front = rear = NULL;
}

template <class T>
QueueTP<T>::~QueueTP()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front -> next;
		delete temp;
	}
}

template <class T>
bool QueueTP<T>::isempty() const
{
	return items == 0;
}

template <class T>
bool QueueTP<T>::isfull() const
{
	return items == qsize;
}

template <class T>
int QueueTP<T>::queuecount() const
{
	return items;
}

template <class T>
bool QueueTP<T>::enqueue(const T & item)
{
	if (isfull())
	{
		cout << "Queue already full!\n";
		return false;
	}
	Node * newitem = new Node;
	newitem->item = item;
	newitem->next = NULL;
	items++;
	if (front == NULL)
	{
		front = newitem;
	}
	else
	{
		rear->next = newitem;
			
	}
	rear = newitem;
	return true;
}

template <class T>
bool QueueTP<T>::dequeue(T & item)
{
	if (isempty())
	{
		cout << "It's empty now!\n";
		return false;
	}
	else
	{
		item = front->item;
		items--;
		Node * temp = front;
		front = front->next;
		delete temp;
		if (items == 0)
		{
			rear = NULL;
		}
	}
	return true;
}

class Worker
{
private:
	string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const string & s, long n) : fullname(s), id(n) {}
	virtual ~Worker();
	virtual void Set();
	virtual void Show() const;
};

void Worker::Set()
{
	cout << "Enter worker's name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}

void Worker::Show() const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

Worker::~Worker()
{
}

#endif

