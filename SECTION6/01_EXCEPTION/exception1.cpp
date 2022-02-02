#include <iostream>

int readFile()
{
    FILE* f = fopen("a.txt", "rt");
    
    if ( f == 0 )
        return -1;
    //....    
    fclose(f);
    return 0;
}

int main()
{
    int ret = readFile();
    
    /*
    if ( ret == -1 )
    {
        // 실패 처리
    }
    */

}

