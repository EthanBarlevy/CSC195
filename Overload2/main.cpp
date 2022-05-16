#include "Store.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<Store*> stores;
	stores.push_back(new Store("Wallmart", 10));
	stores.push_back(new Store("Target", 12));
	stores.push_back(new Store("Costco", 14));

	for (auto store : stores) {
		cout << *store << endl;
	}

	
	for (size_t i = 0; i < stores.size(); i++) {
		for (size_t j = 0; j < stores.size(); j++) {
			if (i == j) continue;

			if (*stores[i] < *stores[j]) { cout << *stores[i] << " is less than " << *stores[j] << endl; }
			else if (*stores[i] > *stores[j]) { cout << *stores[i] << " is greater than " << *stores[j] << endl; }
			else if (*stores[i] == *stores[j]) { cout << *stores[i] << " is equal to " << *stores[j] << endl; }
		}
	}
	

	stores.clear();
}