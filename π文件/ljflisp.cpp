#include "ljflisp.h"

namespace Ljflisp{
  void
    ljfclojure::iterate(){
      p+= s*(4/(a*(a*(a+3)+2)));
      a+= 2;
      s= -s;
    }
}