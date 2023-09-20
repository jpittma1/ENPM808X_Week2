// Pittman, Jerry (117077120)
// UMD-CP PMRO Fall 2024
// Problem 1-3: Write a C++ program that will print 
// "You have pressed Control-C" whenever the user presses control-c.  

#include <iostream>
#include <vector>
#include <numeric>
#include <signal.h>

using namespace std;
/**
 * @brief Function to catch Ctrl-C and ignore it
 * 
 * @param sig_num 
 */
void signalHandle(int sig_num) {
  signal(SIGINT, signalHandle);
  cout <<"You have pressed Control-C" << endl;
  fflush(stdout);
}

int main (){
   signal(SIGINT, signalHandle);
   while(true){
      cout << "Program processing..." << endl;
      sleep(1);
   }

   return 0;
}
