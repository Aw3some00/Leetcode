#include <iostream>
#include <vector>
int main() {
    int x=0;
    std::vector vec {"X++","++X","--X","X--"};
    for(int i=0;i<vec.size();i++){
        if(vec[i]=="++X"||vec[i]=="X++"){
            x++;
        }
        if(vec[i]=="--X"||vec[i]=="X--"){
            x--;
            
        }
    }
    std::cout<<x<<"\n";

    
    
    return 0;
}
