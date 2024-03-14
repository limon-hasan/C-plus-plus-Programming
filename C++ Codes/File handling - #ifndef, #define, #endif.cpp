// my_header.h

#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <iostream>

// Example function declaration
void myFunction() {
    std::cout << "This is myFunction() from my_header.h" << std::endl;
}

// Example class declaration
class MyClass {
public:
    MyClass(int value) {
      data = value;
    }
    void printValue() const {
        std::cout << "Value: " << data << std::endl;
    }

private:
    int data;
};

#endif

//  The below one is source file -->

// main.cpp

#include "my_header.h"

int main() {
    myFunction(); // Call the function declared in my_header.h
    MyClass obj(42); // Create an object of MyClass
    obj.printValue(); // Call a member function of MyClass
    return 0;
}

/*
In this example:
my_header.h contains the declarations of a function myFunction() and a class MyClass.
The #ifndef, #define, and #endif directives in my_header.h ensure that its contents are included only once in each translation unit.
main.cpp includes my_header.h and uses the declared function and class. 
When compiling main.cpp, the contents of my_header.h are included once, and subsequent inclusions are skipped due to the header guard.

Compile and run main.cpp, and you should see the output:
This is myFunction() from my_header.h
Value: 42

---------------------------------------

When we say that the contents of my_header.h are included once, it means that the preprocessor ensures that the content of the header file is inserted into the source file (main.cpp in this case) only once during the compilation process.

Here's how it works:
The first time my_header.h is included in main.cpp, the preprocessor encounters the #ifndef directive. 
It checks if the macro MY_HEADER_H has been defined. Since it hasn't been defined yet, the preprocessor proceeds to the next line.
The preprocessor encounters the #define MY_HEADER_H directive. This line defines the macro MY_HEADER_H, effectively marking that my_header.h is being included.
The preprocessor then includes the content of my_header.h in main.cpp. This includes any declarations, definitions, or other code inside the header file.
At the end of my_header.h, the preprocessor encounters the #endif directive, marking the end of the section guarded by the #ifndef directive.
Subsequent inclusions of my_header.h in main.cpp or in any other source file will not include the content of the header file again. 
This is because the macro MY_HEADER_H has been defined, and the preprocessor will skip the content between #ifndef and #endif.
So, "included once" means that the content of the header file is effectively inserted into the source file only once during the compilation process, ensuring that there are no duplicate definitions and related compilation errors
*/
