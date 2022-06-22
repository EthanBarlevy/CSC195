#pragma once
#include <iostream>

namespace edb
{
	template<typename T>
	class List
	{
		struct node_t
		{
			node_t(const T& value) : _value{ value } {}

			T _value;
			node_t* _next{ nullptr };
			node_t* _prev{ nullptr };
		};

	public:
		List() {}
		List(const List& other);
		~List() { clear(); }

		List& operator = (const List& other);

		T& front() { return _head->_value; }
		T& back() { return tail()->_value; }

		void push_front(const T& value);
		void pop_front();

		void push_back(const T& value);
		void pop_back();

		void remove(const T& value);
		void reverse(); // see references for implementation
		void clear(); // search online for implementation

		bool empty() { return _head == nullptr; }
		size_t size(); // see references for implementation

		void write(std::ostream& stream); // print the list nodes to the console

	private:
		node_t* tail() {
			node_t* node = _head;
			while (node->_next) {
				node = node->_next;
			}
			return node;
		}

	private:
		node_t* _head = nullptr;
	};


	template<typename T>
	inline List<T>::List(const List& other)
	{
		node_t* node = other._head;
		while (node) {
			push_back(node->_value);
			node = node->_next;
		}
	}

	template<typename T>
	inline List<T>& List<T>::operator=(const List& other)
	{
		clear();
		node_t* node = other._head;
		while (node) {
			push_back(node->_value);
			node = node->_next;
		}

		return *this;
	}

	template<typename T>
	inline void List<T>::push_front(const T& value)
	{
		node_t* newNode = new node_t(value);
		if (_head) {
			_head->_prev = newNode;
		}
		newNode->_next = _head;
		_head = newNode;
	}
	template<typename T>
	inline void List<T>::pop_front()
	{
		if (_head == nullptr) return; 
		
		node_t* tempNode = _head;
		_head = _head->_next;
		_head->_prev = nullptr;
		delete tempNode;
		
	}
	template<typename T>
	inline void List<T>::push_back(const T& value)
	{
		node_t* newNode = new node_t(value);
		if (_head == nullptr) {
			_head = newNode;
		}
		else {
			node_t* tailNode = tail();
			tailNode->_next = newNode;
			newNode->_prev = tailNode;
		}
	}
	template<typename T>
	inline void List<T>::pop_back()
	{
		node_t* node = tail();
		if (node) {
			node_t* prev = node->_prev;
			if (prev) prev->_next = nullptr;
			if (node == _head) _head = nullptr;
			delete node;
		}
	}
	template<typename T>
	inline void List<T>::remove(const T& value)
	{
		node_t* node = _head;
		while (node) {
			if (node->_value == value) {
				node_t* prev = node->_prev;
				node_t* next = node->_next;
				
				if( prev) prev->_next = next;
				if (next) next->_prev = prev;

				if (_head == node) _head = next;
				delete node;

				node = next;
			}
			else {
				node = node->_next;
			}
		}
	}
	template<typename T>
	inline void List<T>::reverse()
	{
		node_t* node = _head;
		_head = tail();
		while (node) {
			node_t* next = node->_next;
			node->_next = node->_prev;
			node->_prev = next;
			node = next;
		}
	}
	template<typename T>
	inline void List<T>::clear()
	{
		node_t* node = _head;
		while (node) {
			node_t* newnode = node->_next;
			delete node;
			node = newnode;
		}
		_head = nullptr;
	}
	template<typename T>
	inline size_t List<T>::size()
	{
		node_t* node = _head;
		size_t count = 0;
		while (node->_next) {
			count++;
			node = node->_next;
		}
		return count;
	}
	template<typename T>
	inline void List<T>::write(std::ostream& stream)
	{
		node_t* node = _head;
		while (node) {
			stream << node->_value << " ";
			node = node->_next;
		}

		stream << std::endl;
	}
}
