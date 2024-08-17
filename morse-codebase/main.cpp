//Mitchell Kolb -- PA5 -- CPTS 122 -- SUMMER

#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <string>
#include "BinaryTree.h"

using namespace std;

int main()
{
   //Creates an object for the tree
   BinaryTree<string> tree;

   //Creates the base tree that holds the morse code letters
   string inputLetter, inputMorse;
   ifstream iFile("MorseTable.txt");
   while(!iFile.eof()) //EOF returns true when at end of file and false when not at the end. 
   {
      getline(iFile, inputLetter, '$');
      getline(iFile, inputMorse);
      tree.insertNode(inputLetter, inputMorse);
   }
   cout << "Finished inputing source file.\n";
      

   //Conversion to Morse Code Section
   string x, code, y;
   ifstream mFile("Convert.txt");
   
   int sizeL = 0;
   int open = 0;
   int newLine = 0;
   while(!mFile.eof()) //EOF returns true when at end of file and false when not at the end. 
   {
      //Gets word from file
      getline(mFile, x, ' ');

      //Makes all letters lowercase
      for(int i = 0; i < x.length(); i++)
      {
         if (x[i] == '\n')
         {
            open = 1;
            newLine = i;
         }
         x[i] = tolower(x[i]);
      }

      //Converts the letters to Morse Code.
      for (int i = 0; i < x.length(); i++)
      {
         if (open == 1 && newLine == i)
         {
            cout << endl;
            open = 0;
         }
         else
         {
            y = x.at(i);
            code = tree.searchNode(y);
            cout << code << " ";
         }
      }
      //Word space 
      cout << "   ";
      //Uncommenting this line out prints the conversion out word by word so it's easier to cross reference to check
      //cout << endl;
   }
   cout << endl;
   

   return 0;
}









