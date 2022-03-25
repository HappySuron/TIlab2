#pragma once
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H

struct Node
{
	int x;
	Node* next;
};

class Queue
{
	Node* head, * tail;
protected:
	int size;
	Node* getHead();
	Node* getTail();
public:
	Queue() : head(NULL), tail(NULL) {};
	Queue(const Queue& Ishodnik);
	explicit Queue(int i);
	~Queue();
	void add(int x);
	int del();
	void show();
	Queue & operator++(int);
	Queue& operator--(int);
	bool operator!();

	friend void operator++(Queue& Q);
	friend void operator--(Queue& Q);
};
#endif // ! QUEUE_H

