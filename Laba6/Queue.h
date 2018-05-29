#pragma once
#include "iostream"
#include "conio.h"

using namespace std;

class Queue
{
	int *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	Queue(int count); 
	Queue(const Queue &other);  
	Queue(Queue &&other); //перемещение
	Queue &operator=(const Queue &other); 
	Queue &operator=(Queue &&other); 
	~Queue(); 
	int GetSize();
	void Push(int element); 
	int Pop(); 
	int Peek(); 
	bool CheckNoEmptyQueue(); 
	friend ostream & operator << (ostream & stream, const Queue &a); 
};
