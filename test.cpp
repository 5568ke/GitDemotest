#include<iostream>

int main(){
  std::cout<<"hello";
  bar();
  foo();
}

void bar(){
  std::cout<<"bar function";
}

void foo(){
	std::cout<<"foo function"<<std::endl
}

void ama(){
  std::cout << "syntax error" << std::endl;
}	
