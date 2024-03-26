#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //pour lire un mot
    ifstream f("etudiant.txt");
    string s;
      f>>s;
      cout<<s;
     getline(f,s);
     cout<<s;
    f.close();
   
     return 0;

}