/*write a pti useing array to empelment a stak and the following stak
1-number of element on the stak
2- write a function to chek if the stak is full or not
3- fun   is empty()
4- push ()
5-pop()
6-to reset the stak(clear)
7-write a fucntion to return number of free space in the stak*/
#include<iostream>
using namespace std;
int stak[5];
int top = -1;
int Top();
int size();
bool isEMPTY();
void  push(int p);
void pop();
void clear();
bool isFull();
int numofsoace();
int main() {


	string key;

	int p;
	int i = 0;
	while (i != -1) {
		if (i == 0) {
			cout << "  HOME  " << endl;
			cout << " ------------ " << endl;
			cout << "  [1] PUSH   " << endl;
			cout << "  [2] POP  " << endl;
			cout << "  [3] TOP  " << endl;
			cout << "  [4] isEMPTY  " << endl;
			cout << "  [5] SIZE  " << endl;
			cout << "  [6] isFULL  " << endl;
			cout << "  [7] num of space  " << endl;
			cin >> i;

		}
		if (i == 1) {
			cout << " how many elemnts do want to push   " << endl;
			cin >> p;
			for (int i = 0; i < p; i++)
			{
				push(p);
			}

			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}if (i == 2) {
			pop();
			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}if (i == 3) {
			cout << " the top is    " << Top() << endl;


			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}
		if (i == 4) {
			if (isEMPTY() == true) {
				cout << "stack is empty    " << endl;
			}
			else {
				cout << "NO the stak has   " << Top() << " element(s)" << endl;
			}

			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}
		if (i == 5) {

			cout << "the stak size is  " << size() << endl;


			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}if (i == 6) {
			if (isFull() == true) {
				cout << "YES the stak is FULL " << endl;
			}
			else
				cout << "NO the stak is NOT FULL " << endl;



			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}
		if (i == 7) {
			cout << numofsoace() << endl;
			cout << "pres any key to go back to home   " << endl;
			cin >> key;
			i = 0;
		}
	}



}
int size() {
	return (sizeof stak[0] + 1);
}
bool isEMPTY() {
	if (top == -1)
		return true;
	else
		return false;
}
void  push(int p) {
	int x;
	if (isFull() == true || p >= numofsoace())
		cout << "you can't push" << endl;
	else
		cout << "write an element " << endl;
	cin >> x;

	top++;
	stak[top] = x;
}
void pop() {
	top--;
}
void clear() {
	top = -1;
}
bool isFull() {
	int a = sizeof stak[0];
	if (a == top) {
		return true;
	}
	else
		return false;
}
int Top() {
	return top + 1;
}
int numofsoace() {

	int sum = size() - (top + 1);
	return sum;
}