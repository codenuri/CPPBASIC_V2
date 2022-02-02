#include <iostream>

class FileNotFound : public std::exception
{
public:
    virtual const char* what() const noexcept
    {
        return "File Not Found";
    }
};

void foo() 
{
    throw FileNotFound();
}

int main()
{
    try
    {
        foo();
    }
    catch(FileNotFound e)
    {
        std::cout << e.what() << std::endl;
    }
}