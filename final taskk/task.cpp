#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void explainCode(const string& fileN)
 {
    ifstream txt("avishek.cpp");
    string line;
    int lineNumber = 0;

if (txt.is_open())
    {
        while (getline(txt, line))
         {
            lineNumber++;
            cout << "Line " << lineNumber << ": " << line << endl;


if (line.find("#include") != string::npos)
    {
                cout << "   // This line includes a header file." << endl;
    }
    else if (line.find("using namespace std;") != string::npos)
        {
                cout << "   // This line declares that names from the std namespace." << endl;
        }
    else if (line.find("int main()") != string::npos)
        {
                cout << "   // This line defines the entry point of the program." << endl;
        }
    else if (line.find("return 0;") != string::npos)
        {
                cout << "   // This line indicates successful termination of the main function." << endl;
        }
    else if (line.find("cout") != string::npos)
        {
                cout << "   // This line prints output." << endl;
        }
    else if (line.find("int ") != string::npos)
        {
                cout << "   // This line declares an integer variable." << endl;
        }
    else if (line.find("=") != string::npos && (line.find("x = ") != string::npos || line.find("y = ") != string::npos || line.find("z = ") != string::npos))
        {
                cout << "   // This line initializes a variable with  value." << endl;
        }
    else if (line.find("if (") != string::npos)
        {
                cout << "   // This line is  conditional statement." << endl;
        }
    else
        {
                cout << "   // This line performs  unspecified operation." << endl;
        }
         }
        txt.close();
    }
else
     {
    cout << "Unable to open file: " << fileN << endl;
     }
}



int main()
{
    string fileN = "avishek.cpp";
    explainCode(fileN);

    return 0;
}


