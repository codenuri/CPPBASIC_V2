#include <iostream>

int readFile()
{
    FILE* f = fopen("a.txt", "rt");
    
    if ( f == 0 )
        throw "FileNotFound";
        
    //....    
    fclose(f);
    return 0;
}

int main()
{
    try
    {
        int ret = readFile();
        //....
    }
    catch( const char* s)
    {
        std::cout << s << std::endl;
        //exit(0)
    }
    catch( int n)
    {
    }
    catch( ... )
    {
    }

    
    std::cout << "main" << std::endl;

}






