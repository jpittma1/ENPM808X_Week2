// Pittman, Jerry (117077120)
// UMD-CP PMRO Fall 2024
// Problem 1-5: reads words from standard input and count the total number 
//  of words read so far and how many times each word occurred.  When the 
//  input stream is terminated (i.e., hit control-d), 
//  the program should print out the answer and quit.

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// hat cat bat hat monkey jerry jerry cool cat sheep dog
// words: 11; repeats: 3

int main() {

  string inputs;
  int num_words = 0;
  int numRepeatedWords = 0;

  std::vector <string> repeatedWords;
  std::vector <string> lookUpWords;
  
  int i =0;

  cout << "Input Words for counting separated by space or newline,\nPress \"Enter\" to see repeated words and \"Ctrl-D\" when complete to see final counts: ";
  while (getline(cin, inputs)) {

    istringstream iss(inputs);

    string word;
    //Separate string based on white spaces
    while (getline(iss,word,' ')) {
      
      
      if (std::find(lookUpWords.begin(), lookUpWords.end(), word) != lookUpWords.end()) {

        // Element found, perform further operations
        repeatedWords.push_back(word);
        cout << "Repeated word found: " << word << endl;
        numRepeatedWords++;
      }
      lookUpWords.push_back(word);
      num_words++;

      // cout << "Word seen: " << lookUpWords[i] << endl;
    }
    
    i++;
  }
  
  // Print Final Answer after Ctrl-D
  cout << "\nNo. of words = " << num_words << " and there were " << numRepeatedWords << " repeated words." << endl;
  return 0;
}
