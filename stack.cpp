#include <iostream>
#include <stack>

using namespace std;

#define MAX 10

class Stack {

	int top;

public:

	int a[MAX];

	Stack() {top = -1;}
	bool push(int x);
	bool isEmpty();
	int peek();
	int pop();
};

bool Stack::push(int x){
	a[++top] = x;

	cout << x << " was push on the stack" << endl;

	return true;
}

int Stack::peek(){

	if (top < 0){
		cout << "Stack is empty" << endl;
		return 0;
	}else
	{
		int x = a[top];
		return x;
	}
}

int Stack::pop(){
	int x = a[top--];

	return x;
}

bool Stack::isEmpty(){

	return (top < 0);
}

int main(){

	class Stack s;

	s.push(10);
	s.push(20);
	cout << s.peek();

	while(!s.isEmpty()){
		cout << s.peek() << endl;

		s.pop();
	}

	return 0;
}