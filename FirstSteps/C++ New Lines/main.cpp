// Date: 2024-10-20
// Author: Matthew (abc0xmattyic333)
// Github: (https://github.com/abc0xmattyic333)
// Twitter/X: (https://x.com/abc0xmattyic333)

// Description: C++ New Lines

// New Lines

// To insert a new line in your output, you can use the \n character:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}

// You can also use another << operator and place the \n character after the text, like this:


/*
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n";
  cout << "I am learning C++";
  return 0;
}
*/

// Tip: Two \n characters after each other will create a blank line:

/*
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n\n";
  cout << "I am learning C++";
  return 0;
}
*/

// Another way to insert a new line, is with the endl manipulator:

/*
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
*/

// Both \n and endl are used to break lines. However, \n is most used.

// But what is \n exactly?

/*
The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.
*/

// Other examples of escape sequences:

// \t - creates a horizontal tab
// \\ - inserts a backslash character
// \" - inserts a double quote character

