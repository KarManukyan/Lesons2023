#include <iostream>
#include "smart_array.hpp"

int main()
{
        smart_array arr;
        arr.push_back(5);
        arr.push_back(4);
        arr.push_back(3);
        arr.push_back(2);
        arr.push_back(1);
        arr.push_back(6);
        arr.pop();
        arr.insert(2,15);
        arr.get_el(3);
        print_array(arr);
	return 0;
}
