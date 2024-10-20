// Date: 2024-10-20
// Author: Matthew (abc0xmattyic333)
// Github: (https://github.com/abc0xmattyic333)
// Twitter/X: (https://x.com/abc0xmattyic333)

// Description: Object-Oriented Programming in C++


// C++ programming language supports both procedural-oriented and object-oriented programming.

// Class:

/*
A class is a template of an object. For example, the animal is a class & dog is the object of the animal class. It is a user-defined data type. A class has its own attributes (data members) and behavior (member functions). The first letter of the class name is always capitalized & use the class keyword for creating the class.
*/

#include <iostream>
using namespace std;

// The object is an instance of a class.
// Class Name
class Calculate{


      // Class body
      
      /*
      The attributes or data in the class are defined by the data members & the functions that work on these data members are called the member functions.
      */
      
      // Access Modifiers
    public:
          // data member
        int num1 = 50;
        int num2 = 30;
        
          // member function
        int addition() {
            int result = num1 + num2;
            cout << result << endl;
        }
};

int main() {
    
    // object declaration
    Calculate add;
      // member function calling
    add.addition();

    return 0;
}

/*
In the above example, num1 and num2 are the data member & addition() is a member function that is working on these two data members. 

There is a keyword here public that is access modifiers. The access modifier decides who has access to these data members & member functions. public access modifier means these data members & member functions can get access by anyone.
*/
