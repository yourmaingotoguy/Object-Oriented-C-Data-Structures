#pragma once
#include "Stack.h";

class Stack {
	char *v;
	int top;
	int max_size;
public:
	class Underflow { };
	class Overflow { };
	class Bad_size { };

	Stack(int s);
	~Stack();

	void push(char c);
	char pop();
};