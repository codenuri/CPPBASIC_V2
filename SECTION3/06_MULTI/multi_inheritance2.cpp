#include <iostream>
#include <string>

class File 
{
public:
    std::string filename;
    void open() {} // filename �� ���
};

class InputFile : virtual public File 
{
public:
    void read() {}
};
class OutputFile : virtual public File
{
public:
    void write(){}
    void open() {}
};
class IOFile : public InputFile, public OutputFile
{    
public:
};

int main()
{
    IOFile file;    
    
    file.open();

        
    
}




