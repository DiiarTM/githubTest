#include <iostream>
using namespace std;
// write a pti using array to emplement a stack and the following satck
// 1- number of element on the stack
// 2- write a function to chek if the stack is full or not
// 3- fun is empty 
// 4- push()
// 5- pop()
// 6- to reset the stack (clear)
// 7- write a function to return number of free space on the stack

static int stack[5];
static int top = -1;
int Top();
int Size();
bool isEmpty();
void push(int x);
void pop();
bool isFull();
int numOfSpace();
int main() {
	string key;
	int p;
	int i = 0;
	while (i != -1) {
		if(i == 0) {
			cout << "HOME"<<endl;
			cout << "________" << endl;
			cout << "[1]PUSH" << endl;
			cout << "[2]POP" << endl;
			cout << "[3]TOP" << endl;
			cout << "[4]isEmpty" << endl;
			cout << "[5]SIZE" << endl;
			cout << "[6]isFull" << endl;
			cin >> i;
			numOfSpace();

		}

		if (i == 1) {
			cout << "How Many Elements You Want To Add "<<endl;
			cin >> p;
			for (size_t i = 0; i < p; i++) {
				push(p);
			}
			cout << "Press any key to go back to home " << endl;
			cin >> key;
			i = 0;
		}
		if (i == 2) {
			cout << "how many elements do you want" << endl;
			cin >> p;
			pop();
			cout << "Press any key to go back home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 3) {
			cout << "the top is" << Top() << endl;
			cout << "Press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 4) {
			if (isEmpty() == true) {
				cout << "yes the stack has not element" << Top() << endl;
			}
			else{
				cout << "No the stack has" << Top() << "element(s)" << endl;
			}
			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}

		if (i == 5) {
			cout << "the stack size is " << Size() << endl;
			cout << "Press any key to go back home " << endl;
			cin >> key;
			i = 0;
		}

		if (i == 6) {
			if (isFull() == true) {
				cout << "Yes the task is full" << endl;
			}
			else {
				cout << "No the stack is not full" << endl;
			}
			cout << "Press any key to go back to home" << endl;       //shenakay
			cin >> key;
			i = 0;
		}
	}
}

int Size() {
	return top + 1;
}

bool isEmpty() {
	if (top == -1) {
		return true;
	}
	else return false;
}

void push(int x) {
	cout << "Write an element" << endl;
	cin >> x;
	top++;
	stack[top] = x;
}

void pop() {
	top--;
}

void clear() {
	top = -1;
}

bool isFull() {
	int a = sizeof stack[0];       //what is mean
	if (a == top) {
		return true;
	}
	else return false;
}

int Top() {
	return top;
}

int  numOfSpace() {
	int sum = (sizeof stack[0] - 1) - top;
	for (int i = 0; i < sizeof stack[0]; i++) {
		if (stack[i] == 0) {
			sum++;
		}
	}
	return sum;
}