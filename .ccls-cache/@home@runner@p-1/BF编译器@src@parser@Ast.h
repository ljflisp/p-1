#include "./Errors.h"

int ptr = 1;
vector<int> memory = {0,0,0,0,0,0,0,0,0,0};


class Left {
  public:
  Left(){}
  void execute(){
    ptr -= 1;
    if (ptr<0){
      Error("PointerError","invalid position for pointer",3);
    }
  }
};

class Right {
  public: 
  Right(){}
  void execute(){
    ptr += 1;
    if (ptr>memory.size() and ptr<100000){
      memory.push_back(0);
    }
  }
};
class Plus {
  public:
  Plus(){}
  void execute(){
    memory[ptr-1] += 1;
  }
};
class Minus {
  public:
  Minus(){}
  void execute(){
    memory[ptr-1] -= 1;
    if (memory[ptr-1]<0){
      Error("ValueError","cell value cannot be less than 0",2);
    }
  }
};