#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
int main(){
    
    text_t firstName = "Rox";
    number_t age = 24;
    std::cout << firstName << '\n';
    std::cout << age << '\n';
    return 0;
}

/*
[Running] cd "c:===============" && g++ helloworld.cpp -o helloworld && "c:============"helloworld
Rox
24

[Done] exited with code=0 in 0.623 seconds

*/
