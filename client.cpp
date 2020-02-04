#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include "utility.h"

using namespace std;


int main(int argc, char** argv){
  if(argc < 2){
    cout << "Insufficient arguments." << endl;
    return 0;
  }
  string move = argv[1];
  std::string result = GetStdoutFromCommand("python UDP_Send.py 5001 "+move);
  std::cout << result << std::endl;
  string winner;
  winner = GetStdoutFromCommand("python UDP_Recieve.py 5002 1");
  cout << winner.substr(2, winner.length()-4) << endl;
}
