#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string random(){

    string x[9]={"A","B+","B","C+","C","D+","D","F","W"};
    
    srand (time(0));
    
    int i = rand() % 9;

    return x[i];
}

int main(){

    string line1,line2,line3;

    cout << "Press Enter 3 times to reveal your future."<<endl;
    getline(cin,line1);
    getline(cin,line2);
    getline(cin,line3);
    if(line1 == "" and line2 == "" and line3 == ""){

        cout << "You will get "<< random() <<" in this 261102.";
    }
    return 0;
}



