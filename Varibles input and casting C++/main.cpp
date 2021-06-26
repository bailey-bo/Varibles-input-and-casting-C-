//
//  main.cpp
//  Varibles input and casting C++
//
//  Created by Bailey Borchers on 6/26/21.
//

#include <iostream>
#include <string>      // Supports use of "string" data type
using namespace std;

int main() {
    int    userInt    = 0;
    double userDouble = 0.0;
    char   userChar;
    string userString;
   
    cout << "Enter integer:" << endl;
    cin >> userInt;
    cout << endl;
    cout << "Enter double:";
    cout << endl;
    cin >> userDouble;
    cout << endl;
    cout << "Enter character:";
    cout << endl;
    cin >> userChar;
    cout << endl;
    cout << "Enter string:";
    cout << endl;
    cin >> userString ;
    cout << endl;
    cout << userInt << " " << userDouble << " " << userChar << " " << userString << endl;
    
    
   
   // FIXME (1): Finish reading other items into variables, then output the four values on a single line separated by a space
   
   
   // FIXME (2): Output the four values in reverse
   
   
   // FIXME (3): Cast the double to an integer, and output that integer

   return 0;
}
