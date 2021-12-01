#include<iostream>
using namespace std;


static int stack[5];
static int top = -1;
int Size();
int Top();
bool isEmpty();
bool isFull();
void Push(int x);
void Pop();
void Clear();
int nomOfSpace();

int main() {
	String key;
	int p;
	int i = 0;
	while (i != -1) {
		if (i == 0) {
			cout << "HOME " << endl;
			cout << "-------------------" << endl;

			cout << "Please, enter [1] for a size" << endl;
			cout << "Please, enter [2] for a top" << endl;
			cout << "Please, enter [3] for a isEmpty or not" << endl;
			cout << "Please, enter [4] for a isFull or not" << endl;
			cout << "Please, enter [5] for a push an element" << endl;
			cout << "Please, enter [6] for pop an element" << endl;
			cout << "Please, enter [7] for clear" << endl;
			cout << "Please, enter [8] for nomOfSpace" << endl;
			cin >> i;

		}

		if (i == 1) {
			cout << "the size of the stack is >> " << Size() << endl;

			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 2) {
			cout << "the top of the stack is >> "Top() << endl;

			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 3) {
			if (isEmpty() == true) {
				cout << "the stack is empty" << endl;
			}
			else { cout << "the stack is not empty" << endl; }

			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 4) {
			int a = sizeof stack[0];
			if (a == top) {
				cout<<"the stack is full"
			}
			else {
				cout << "the stack is not full" << endl;
			}
			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 5) {
			int x;
			cout << "how many elements do you want to push" << endl;
			cin >> x;
			for (int i = 0; i < x; i++) {
				Push(x);
			}
			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 6) {
			cout << "how many elements do want to pop" << endl;
			cin >> p;
			Pop();
			
			cout << "press any key to go back to home" << endl;
		cin >> key;
		i = 0;
		}
		if (i == 7) {
			cout << "the stack is clearing" << endl;
			Clear();
			cout << "press any key to go back to home" << endl;
			cin >> key;
			i = 0;
		}
		if (i == 8) {
			cout << "the number of the space in our stack is  >> " >> nomOfSpace() >> endl;
		}
		


	}


}

int Size() {
	return (sizeof stack[0] + 1);
}
int Top() {
	return top + 1;
}
bool isEmpty() {
	if (top == -1)
		true;
	else
		false;
}
bool isFull() {
	int a = sizeof stack[0];
	if (a == top) {
		true;
	}
	else
		false;
}
void Push(int x) {
	if (isFull == true) {
		cout << "the stack is full you can not push an element" << endl;
	}
	else {
		cout << "write the element that you want to push" << endl;
		cin >> x;
		top++;
		stack[top] = x;
	}
}
void Pop() {
	top--;
}
int Clear() {
	return top = -1;
}
int noOfSpace() {
	int sum = size() - (top + 1);
	return sum;
}
