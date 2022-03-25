#include <iostream>
#include "Queue.h"
#include "XYZ.h"

using namespace std;


void actioniolly(Queue &q) {
	int feedbackAY;
	int id = 0;
	int helper = 1;
	int helper2;
	int helper3;
	while (helper == 1) {
		cout << "1 - Adding the element --- q+" << endl;
		cout << "2 - Removing the element --- q-" << endl;
		cout << "3 - Show me a queue --- mine" << endl;
		cout << "4 - Check if empty --- !" << endl;
		cout << "5 - Increese by one --- +q" << endl;
		cout << "6 - Decreese by one --- -q" << endl;
		cin >> feedbackAY;
		cout << endl;
		switch (feedbackAY)
		{
		case 1: {
			//cout << "Please enter the value ";
			//cin >> helper2;
			//q.add(helper2);
			q++;
			cout << endl;
			break;
		}
		case 2: {
			//helper2 = q.del();
		//	cout << "The " << helper2 << " was removed";
			q--;
			cout << endl;
			break; 
		}
		case 3: {q.show();
			cout << endl;
			break; 
		}
		case 4: {
			if (!q) cout << "is empty" << endl;
			else cout << "is not empty" << endl;
			break;
		}

		case 5: {
			++q;
			q.show();
			break;
		}
		case 6: {
			--q;
			q.show();
			break;
		}
		case 0: {
			helper = 0;
			cout << endl; break;
		}
		default: {
			cout << "You are stupid tost" << endl; break;
			cout << endl; break;

		}
		}
	}
}

void koordi(XYZ &k1, XYZ &k2) {
	int helper = 1;
	int helper2;
	int feedbackKR;
	while (helper == 1) {
	cout << "1 - set x - mine" << endl;
	cout << "2 - set y - mine" << endl;
	cout << "3 - set z - mine " << endl;
	cout << "4 - Show koordi - mine " << endl;
	cout << "5 - Add other element - a+b" << endl;
	cout << "6 - Minus value / value minus --- a-b / b-a" << endl;
	cout << "7 - Compare --- > --- < --- >= --- <= --- == --- !=" << endl;
	cin >> feedbackKR;
	cout << endl;
		switch (feedbackKR)
		{
		case 1: {
			cout << "Enter X value" << endl;
			cin >> helper2;
			k1.setX(helper2);
			break;
		}
		case 2: {
			cout << "Enter Y value" << endl;
			cin >> helper2;
			k1.setY(helper2);
			break;
		}
		case 3: {
			cout << "Enter Z value" << endl;
			cin >> helper2;
			k1.setZ(helper2);
			break;
		}
		case 4: {
			cout << k1;
			break;
		}
		case 5: {
			
			cout << "We need to create new element" << endl;
			cout << "Enter X value" << endl;
			cout << "Enter Y value" << endl;
			cout << "Enter Z value" << endl;
			cin >> k2;
			cout << endl;
			cout << "Great now we will plus them" << endl;
			cout << k1;
			cout << k2;
			XYZ summa;
			summa = k1 + k2;
			cout << summa;
			break;
		}
		case 6: {
			cout << k1 << endl << "Please enter the value";
			int value;
			cin >> value;
			XYZ helper = k1 - value;
			cout << "XYZ - value -->  " << helper;
			helper = value - k1;
			cout << "value - XYZ -->  " << helper;
			break;
		}
		case 7: {
			cout << k1 << endl;
			cout << "We need to make an element for compaiment" << endl;
			cout << "Enter X value" << endl;
			cout << "Enter Y value" << endl;
			cout << "Enter Z value" << endl;
			cin >> k2;
			cout << "7 - Compare " << endl;

			cout << endl;
			cout << k1 << k2;
			cout << endl;

			k1 < k2;
			k1 > k2;
			k1 <= k2;
			k1 >= k2;
			k1 == k2;
			k1 != k2;
			
			break;
		}
		case 0: {
			helper = 0;
			cout << endl; break;
		}
		default: {
			cout << "You are stupid tost" << endl; break;
			cout << endl; break;

		}
		}
	}
}



/*void queuCh(Queue pql) {
	cout << &pql << endl;
	(&pql)->show();
}*/


int main() {
	Queue pq(5);
	XYZ k1(1,2,3);
	XYZ k2;
	int count;
	int feedback;
	cout << "What are we working with" << endl;
	cout << "1 - Queue" << endl;
	cout << "2 - XYZ" << endl;
	cin >> feedback;
	switch (feedback)
	{
	case 1:
		actioniolly(pq);
		break;
	case 2:
		koordi(k1, k2);
		break;
	default:
		cout << "U R stupid sandwitch";
		break;
	}
	
}

