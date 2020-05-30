//with an array, size is static.  With a vector, size is dynamic
// ex: int items[] = {12,14}
// ex: std:vector<int> items = {12, 14}
//items.push_back(100)  => adding the value 100 to the vector "items"
//items[2]  => grabbing index #2 (aka "100")
//items.size()  => return size of vector "item"
//items{items.size() - 1}  => grabbing last index in vector

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data = {1,2,4};
    data.push_back(12); //adding index "12" to array "data"
    std::cout << data[data.size() - 1] << std::endl;
    data.pop_back(); //get # of indice in array "data"
    std::cout << data.size() << std::endl;
}
