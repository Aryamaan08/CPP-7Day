// This must be the same as C, right?

#include <iostream> // waa not stdio.h

using namespace std;

int main() {
  int undefinedInt;
  if (undefinedInt == 0) {
    cout << "This variable is undefined.\n";
  } else {
    cout << "This variable has a value. Change the name of it, the name is misleading!\n";
  }
  undefinedInt++; // This is where C++ gets its name from. ++ means one up from or plus one. C++ is one more than C.
  if (undefinedInt == 0) {
    cout << "This variable is undefined.\n";
  } else {
    cout << "This variable has a value. Change the name of it, the name is misleading!\n";
  }
  // That same error again. I have to comment the lines out!
  // Works like a charm! Easy peasy. Sorry this wasn't much entertainment for you guys :P
}
// That's it for day 1. I don't feel like going more today.
