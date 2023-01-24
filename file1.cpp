//file management
//ofstream :- stream class to write on files
//ifstream :- stream class to read from files
//ffstream :- stream class to both read and write from/to files

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"welcome to skillqode";
        filestream<<"\n we started new lab";
        filestream<<"\n we started new branch";
        filestream<<"\n we learn cpp program";
        filestream.close();
    }
    else
        cout<<"file opening is fail";
    return 0;
}