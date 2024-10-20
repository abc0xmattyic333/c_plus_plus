// Date: 2024-10-20
// Author: Matthew (abc0xmattyic333)
// Github: (https://github.com/abc0xmattyic333)
// Twitter/X: (https://x.com/abc0xmattyic333)


// Description: C++ Basic Syntax 

/*
C++ is a general-purpose, object-oriented programming language. It was developed in 1979 by Bjarne Stroustrup at AT & T Bell Laboratory. It is a high-level programming language & advanced version of C programming language. As Compared to other programming languages like Java, and Python, it is the fastest programming language.
*/

// What is Syntax?

/*
Syntax refers to the rules and regulations for writing statements in a programming language. 

They can also be viewed as the grammatical rules defining the structure of a programming language.
*/

/*
The C++ language also has its syntax for the functionalities it provides. Different statements have different syntax specifying their usage but C++ programs also have basic syntax rules that are followed throughout all the programs.
*/

// Basic Syntax of a C++ Program

// We can learn about basic C++ Syntax by using the following program.

// C++ program to demonstrate the basic syntax

// Header File Library
#include <iostream> /*The header files contain the definition of the functions and macros we are using in our program. They are defined on the top of the C++ program.*/

/*
A namespace in C++ is used to provide a scope or a region where we define identifiers. It is used to avoid name conflicts between two identifiers as only unique names can be used as identifiers.
*/

// Standard Namespace
using namespace std; /*we have used the using namespace std statement for specifying that we will be the standard namespace where all the standard library functions are defined.*/

/*Functions are basic building blocks of a C++ program that contains the instructions for performing some specific task. Apart from the instructions present in its body, a function definition also contains information about its return type and parameters. To know more about C++ functions, please refer to the article Functions in C++.*/

// Main Function
int main() 
{
    /*Blocks are the group of statements that are enclosed within { } braces. They define the scope of the identifiers and are generally used to enclose the body of functions and control statements.*/
    
    // Body of the Function

    // Declaration of Variable
    int num1 = 24;
    int num2 = 34;
    
    // num1 & num2 are the identifiers and int is the data type.

    int result = num1 + num2;
    
    /*
    We use identifiers for the naming of variables, functions, and other user-defined data types. An identifier may consist of uppercase and lowercase alphabetical characters, underscore, and digits. The first letter must be an underscore or an alphabet.
    */

    // Output
    cout << result << endl;

    // Return Statement
    return 0;
    
    /*As you may have noticed by now, each statement in the above code is followed by a ( ; ) semicolon symbol. It is used to terminate each line of the statement of the program. When the compiler sees this semicolon, it terminates the operation of that line and moves to the next line.*/
}

/*
In the C++ programming language, there are some reserved words that are used for some special meaning in the C++ program. It can’t be used for identifiers.

For example, the words int, return, and using are some keywords used in our program. These all have some predefined meaning in the C++ language.

There are total 95 keywords in C++. These are some keywords.
*/