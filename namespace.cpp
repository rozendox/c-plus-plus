#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    
    int x = 0;


    //namespace permite a nomeação da variável mesmo ela sendo já utilizada
    //da mesma forma que namespace também permite a utilização da variável fora do
    //scopo chamando-a first::x <= dessa maneira, ao lado esquerdo o nome do namespace, 
    //e a direita a variável. ou seja uma solução para nomes de variáveis em conflito.
    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    return 0;
}

//output:
//[Running] cd "xxx c\" && g++ helloworld.cpp -o helloworld && "c:\User xx"helloworld
//0
//1
//2
