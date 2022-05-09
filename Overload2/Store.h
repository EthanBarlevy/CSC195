#pragma once
#include <iostream>

	class Store {
	public:
		Store() {}
		Store(std::string name, double profits) : name{ name }, profits{ profits }{}
		Store& operator = (const Store& item); // assignment operator (this is super gross)

		bool operator < (const Store& item);
		bool operator > (const Store& item);
		bool operator == (const Store& item);
		bool operator != (const Store& item);

		friend std::ostream& operator << (std::ostream& output, const Store& item);

		std::string getName() { return name; }
		double getPrice() { return profits; }

	private:
		std::string name;
		double profits = 0;
	};