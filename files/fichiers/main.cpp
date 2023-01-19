#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string const path("monFichier.txt");
    ifstream myFile(path.c_str());
    if(myFile){
            int position;
            myFile.seekg(0,ios::end);
            position = myFile.tellg();
            cout << position;

    }else{
        cout << "path is wrong " << endl;

    }

    return 0;
}
