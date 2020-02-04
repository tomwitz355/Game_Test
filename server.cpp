#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include "utility.h"

using namespace std;



string evalWinner(string a, string b){
  //0 = rock, 1 = paper, 2 = scissors, 3 = tie
  cout << "a: " << a << " b: " << b << endl;
  if(a==b) return "Tie";
  if(a=="rock"){
    if(b=="paper") return "Paper";
    if(b=="scissors") return "Rock";
  }
  if(a=="paper"){
    if(b=="rock") return "Paper";
    if(b=="scissors") return "Scissors";
  }
  if(a=="scissors"){
    if(b=="rock") return "Rock";
    if(b=="paper") return "Scissors";
  }
  return "Error";
}



int main(int argc, char** argv){
  while(1){
    std::string first = GetStdoutFromCommand("python UDP_Recieve.py 5001 1");
    std::string second = GetStdoutFromCommand("python UDP_Recieve.py 5001 1");

    string winner = evalWinner(first.substr(2, first.length()-4), second.substr(2, second.length()-4));
    std::string temp = GetStdoutFromCommand("python UDP_Send.py 5002 "+winner);
    cout << temp << endl;
    temp = GetStdoutFromCommand("python UDP_Send.py 5004 "+winner);
    cout << temp << endl;
  }
}
