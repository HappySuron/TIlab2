#include <iostream>
#include "Queue.h"

Queue::Queue(int i) {
	this->add(i);
}

Queue::Queue(const Queue& Ishodnik) {
	this->head = this->tail = NULL;
	Node* temp = Ishodnik.head;
	while (temp != NULL) {
		this->add(temp->x);
		temp = temp->next;
	}
}


Queue::~Queue() {
	Node* temp = head;
	while (temp != NULL) {
		temp = head->next;
		delete head;
		head = temp;
	}
	std::cout << "Dest" << std::endl;
}

void Queue::add(int x) {
	Node* temp = new Node;
	temp->x = x;
	temp->next = NULL;
	if (head != NULL) {
		tail->next = temp;
		tail = temp;
	}
	else {
		head = tail = temp;
	}
}

void Queue::show() {
	Node* temp = head;
	while (temp != NULL) {
		std::cout << temp->x << " ";
		temp = temp->next;
	}
	std::cout << std::endl;
}

int Queue::del() {
	if (head != NULL) {
		Node* temp = head;
		//std::cout << "Element" << head->x << " was removed" << std::endl;
		int helper = head->x;
		head = head->next;
		delete temp;
		return helper;
	}
	else {

		return 0;
	}
}


Queue& Queue::operator++(int) {
	int value;
	std::cout << "Please enter the value" << std::endl;
	std::cin >> value;
	this->add(value);
	return *this;
}

Queue& Queue::operator--(int) {
	this->del();
	return *this;
}

bool Queue::operator!() {
	if (head == NULL)
	{
		return true;
	}
	else {
		return false;
	}

}

void operator++(Queue& Q) {
	Node* temp = Q.head;
	while (temp != NULL) {
		(temp->x)++;
		temp = temp->next;
	}
}

void operator--(Queue& Q) {
	Node* temp = Q.head;
	while (temp != NULL) {
		(temp->x)--;
		temp = temp->next;
	}
}

Node* Queue::getHead() {
	return (head);
}
Node* Queue::getTail() {
	return (tail);
}

