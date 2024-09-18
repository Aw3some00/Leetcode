#include <iostream>
#include <string>
#include <cmath>
int main(){
    std::string s;
    std::getline(std::cin,s);
    int score=0;
    for(size_t i=0;i<s.size()-1;++i){
        int current_symbol=static_cast<int>(s[i]);
        int next_symbol=static_cast<int>(s[i+1]);
        size_t res=std::abs(current_symbol-next_symbol);
        score+=res;
        }
    std::cout<<"\n";
   std::cout<<score<<"\n";
    return 0;
}
