#include <iostream>

void move_pointers(int* a, int* b) {
    int* tmp=a;
    a=b;
    b=tmp;
    std::cout<<*a<<" "<<*b;
}

int main() {
    int a,b;
    std::cout<<"Enter number"<<std::endl;
    std::cin>>a>>b;
    int* pa=&a;
    int* pb=&b;
    move_pointers(pa,pb);
}
