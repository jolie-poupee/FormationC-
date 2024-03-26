#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream f("fortune.txt");
    if(!f.is_open()){
        cout<<"error"<<endl;

    }
    f<<"bonjour fortune "<<endl;
}