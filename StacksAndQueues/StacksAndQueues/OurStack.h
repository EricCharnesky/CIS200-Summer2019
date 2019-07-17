#pragma once
#include "LinkedList.h"

using namespace std;

template <typename T>
class OurStack
{
private:
	LinkedList<T> items;
public:
	OurStack()
	{
		items = LinkedList<T>();
	}

	OurStack(const OurStack& rhs)
	{
		items = rhs.items;
	}

	void push(T data)
	{
		items.addToFront(data);
	}

	T peek()
	{
		return items.at(0);
	}

	void pop()
	{
		items.remove(0);
	}

	bool isEmpty()
	{
		return items.isEmpty();
	}
};