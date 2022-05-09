#include "Store.h"

Store& Store::operator=(const Store& other)
{
    this->name = other.name + "-assignment";
    this->profits = other.profits;
    return *this; // ew
}

bool Store::operator < (const Store& item)
    {
        return this->profits < item.profits;
    }

bool Store::operator > (const Store& item)
    {
        return this->profits > item.profits;
    }

bool Store::operator == (const Store& item)
    {
        return this->profits == item.profits;
    }

bool Store::operator!=(const Store& item)
    {
        return this->profits != item.profits;
    }

std::ostream& operator << (std::ostream& output, const Store& item)
    {
        output << item.name << " $" << item.profits;
        return output;
    }
