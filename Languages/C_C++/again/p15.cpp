#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vec = {0,1,3,4,5,6,7,0};
    // vector<int> vec (5,1);
    std::cout << "size :: " << vec.size() << " capacity :: " << vec.capacity() << " ";
    vec.push_back(78);
    vec.push_back(781);
    vec.pop_back();
    std::cout << endl;
    std::cout << vec.front() << " " << vec.back() << " " << vec.at(3) << endl;
    // int
    for (auto &&i : vec)
    {   
        std::cout << i << " ";
    }
    
    return 0;
}

//  g++ -std=c++11 p15.cpp && ./a.exe