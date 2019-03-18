// Is it a list or an array?

#include <iostream>

using namespace std;

int main() {
  int myInt = 5;
  // What happens if I give a float? The below line is commented to prevent error.
  //int mySecondInt = 3.14;
  //return 0;
  /* Run:
  exit status 1
  Day 1/variablesandlists.cpp:10:21: warning: implicit conversion from double to int changes value from 3.14 to 3
  */
  // In short, it's angry.
  cout << myInt;
  /* Run: // Hm, This gave a warning.
  Error
  */
  // Turns out I can't have two files in harmony. I have to comment one to run another.
  // Run: 5
  int shouldBeMyIntRight;
  cout << shouldBeMyIntRight;
  // Run: 50
  // 50!? Not undefined, or 0, or anything? 50?? That must be the default value.
  // Below is commented to prevent error.
  //list myList // Okay, it turns out that there is no 'list' on run.
  //array myList = []; // unknown type name array? But you turned blue!?
  int myList[3]; // Ah, C. Thanks a lot!
  myList[0] = 1;
  myList[1] = 2;
  myList[2] = 3;
  //myList[3] = 4; // Yeah, my suspection.
  cout << myList[0];
  cout << myList[1];
  cout << myList[2];
  // Output: 50123
  // Oh..... should be \n as well!
  //cout << "%d\n", &shouldBeMyIntRight; // unused?
  //cout << shouldBeMyIntRight << "\n"; // Thanks internet
  // But it didn't work!
  //}
  // I started about an hour ago, and it's getting late, should I end for today? I mean, I don't feel like continuing without a tutorial. Guess I'll flip a coin.
  // Heads! I continue. *Thanks very much coin*
  cout << "\n";
  cout << shouldBeMyIntRight;
  cout << "\n";
  cout << myList[0];
  cout << "\n";
  cout << myList[1];
  cout << "\n";
  cout << myList[2];
  // Why didn't I think of that before?
  // It turns out undefined ints are actually 0. The 5 is myInt. *facepalm*
}
