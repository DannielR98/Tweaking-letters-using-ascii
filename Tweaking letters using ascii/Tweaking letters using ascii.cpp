#include <iostream>
#include<conio.h>
#include <vector>
using namespace std;
//This program solves this question:
//Create a function that tweaks letters by 
//one forward (+1) or backwards (-1) according to an array

//For example: s = "apple" and arr = {0, 1, -1, 0, -1} then the result it:
//"aqold"
//"p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"

//It converts the characters into ascii code, adds either 0,1 or -1 to the ascii value
//and the converts it back to a character

std::string tweakLetters(std::string s, std::vector<int> arr) {
    vector<int> ascii_strings(arr.size(), 0);


    for (int i = 0; i < arr.size(); i++)
    {
        int x = int(s[i]);
        x = x + arr[i];
        //To check for end of alphabet
        if (x == 123)
        {
            x = 97;
        }
        //To check for a-1
        if (x == 96)
        {
            x = 122;
        }

        ascii_strings[i] = x;
    }


    /*  for (int i = 0; i<arr.size(); i++)
      {
          cout << "previously: " << int(s[i]) << " now: "<< ascii_strings[i] << " and the char is now: "<< char(ascii_strings[i]) << endl;
      }
      */

    string result;
    for (int i = 0; i < ascii_strings.size(); i++)
    {
        result += char(ascii_strings[i]);
    }


    cout << result;
    return result;
}

int main()
{

    tweakLetters("abc", { -1, -1, -1 });

    return 0;
}