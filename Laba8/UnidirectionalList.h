#pragma once
#include "Node.h"
template<typename T>
class UnidirectionalList
{
	Node<T> *head;
	Node<T> *tail;
	int size = 0;
public:
	UnidirectionalList(); 
	UnidirectionalList(const UnidirectionalList &other);  
	UnidirectionalList(UnidirectionalList &&other); 
	UnidirectionalList &operator=(const UnidirectionalList &other); 
	UnidirectionalList &operator=(UnidirectionalList &&other); 
	~UnidirectionalList(); 
	int GetSize();
	Node<T> *Find(int number);
	void Push(T element, int number);  
	T Remove(int number);  
	T Peek(int number);  
	bool CheckNoEmptyList();  
	friend ostream & operator << <T>(ostream & stream, const UnidirectionalList<T> &a); 
};
template<typename T>
UnidirectionalList<T>::UnidirectionalList()
	: head(NULL)
{
	head = new Node<T>;
	tail = new Node<T>;
	head->next = tail;
}
template<typename T>
UnidirectionalList<T>::~UnidirectionalList()
{
	Node<T> *node = head;
	while (node->next != tail)
	{
		Node<T> *deleteNode = node;
		node = node->next;
		delete deleteNode;
	}
	delete node;
	delete tail;
}
template<typename T>
UnidirectionalList<T>::UnidirectionalList(const UnidirectionalList &other) 
{
	Node<T> oldOldNode = other.head;
	head = other.head;
	tail = other.tail;
	size = other.size;
	Node<T> newOldNode = head;
	while (newOldNode->next != tail)
	{
		Node<T> *newNewNode;
		newOldNode->next = newNewNode;
		newOldNode = newOldNode->next;
		oldOldNode = oldOldNode->next;
		newOldNode->data = oldOldNode->data;
	}
	newOldNode->next = tail;
}
template<typename T>
UnidirectionalList<T>::UnidirectionalList(UnidirectionalList &&other) 
{
	head = other.head;
	tail = other.tail;
	size = other.size;
	other.head = nullptr;
}
template<typename T>
UnidirectionalList<T> &UnidirectionalList<T>::operator=(const UnidirectionalList &other) 
{
	if (this == &other)
	{
		return *this;
	}
	delete head;
	delete tail;
	head = new Node<T>;
	tail = new Node<T>;
	Node<T> *node = head;
	while (node->next != tail)
	{
		Node<T> *newNode = new Node<T>;
		Node<T> *oldNode = node->next;
		node->next = newNode;
		newNode->data = oldNode->data;
	}
	node->next = tail;
}
template<typename T>
UnidirectionalList<T> &UnidirectionalList<T>::operator=(UnidirectionalList &&other) 
{
	if (this == &other)
	{
		return *this;
	}
	delete head;
	head = other.head;
	other.head = nullptr;
}
template<typename T>
int UnidirectionalList<T>::GetSize()
{
	return this->size;
}
template<typename T>
Node<T> *UnidirectionalList<T>::Find(int number)
{
	Node<T> *node = head;
	for (int i = 0; i < number; i++)
	{
		node = node->next;
	}
	return node;
}
template<typename T>
void UnidirectionalList<T>::Push(T element, int number)  
{
	Node<T> *previousNode = this->Find(number);
	Node<T> *nextNode = previousNode->next;
	Node<T> *newNode = new Node<T>;
	newNode->data = element;
	previousNode->next = newNode;
	newNode->next = nextNode;
	size++;
}
template<typename T>
T UnidirectionalList<T>::Remove(int number)  
{
	if ((size > 0) && (number > 0) && (number <= size))
	{
		Node<T> *oldNode = this->Find(number);
		Node<T> *nextNode = oldNode->next;
		Node<T> *previousNode = this->Find(number - 1);
		T element = oldNode->data;
		previousNode->next = nextNode;
		delete oldNode;
		size--;
		return element;
	}
	return 0;
}
template<typename T>
T UnidirectionalList<T>::Peek(int number)  
{
	Node<T> *node = this->Find(number);
	return node->data;
}
template<typename T>
bool UnidirectionalList<T>::CheckNoEmptyList()  
{
	return (size > 0);
}
template<typename T>
ostream & operator << (ostream & stream, const UnidirectionalList<T> &a) 
{
	UnidirectionalList<T> b = a;
	stream << "=====\n";
	for (int i = 0; i < b.size; i++)
	{
		stream << "| " << b.Remove() << "\n";
	}
	stream << "=====\n";
	return stream;
}

