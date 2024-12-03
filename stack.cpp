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
	int size();
	void reverseStack();
};

int Stack::size(){
		int size = top + 1;
		return size;
	}

bool Stack::push(int x){
	a[++top] = x;

	//cout << x << " was push on the stack" << endl;

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
	if (top < 0) {
        cout << "Stack Underflow" << endl;
        return 0; 
    }
    return a[top--];
} 

bool Stack::isEmpty(){

	return (top < 0);
}

void reverseStack(Stack &currentStack){

	Stack tempStack;

	while (!currentStack.isEmpty()) {
        tempStack.push(currentStack.peek());
        currentStack.pop();
    }
    currentStack = tempStack;
}

void printStack(Stack &originalStack){

	if (originalStack.isEmpty())
		return;

	int x = originalStack.peek();
	originalStack.pop();

	cout << x << ' ' << endl;

	printStack(originalStack);

	originalStack.push(x);
}

int main(){

	class Stack s;

	s.push(10);
	s.push(20);
	s.push(911);

	cout << s.size() << endl;

	cout << "Original Stack:" << s.peek() << endl;

	reverseStack(s);

	cout << "Reversed Stack:" << s.peek() << endl;

	printStack(s);

	return 0;
}




