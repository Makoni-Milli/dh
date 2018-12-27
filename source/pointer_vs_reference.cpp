#include <iostream>
#include <fstream>
#define LOG(x) std::cout << x << std::endl;

void IncrementPointer(int* v){ // v is a pointer equal to the '&a', the memory address of a that is passed into the function.
  (*v)++; // take the value at the memory address of a, and increment it.
}

void IncrementReference(int& v){ // v is a reference of 'a' when it is passed into the function, thus it takes you directly to the value at the memory address of a, and increments it.
  v++; // increment the value of a at the memory address
}


int main(){
  int a = 8;
  IncrementPointer(&a);
  int b = 3;
  IncrementReference(b);
  LOG(b);
  LOG(a);

}
