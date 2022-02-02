
//void foo() throw()
//void foo() 
//void foo() throw(int)
//void foo() // 예외가 있다.
//void foo() noexcept(false)  // 예외 가 있다.
//void foo() noexcept(true )  // 예외가 없다.
void foo() //noexcept        // 예외가 없다.
{
    throw 1;
}

int main()
{
    try
    {
        foo();
    }
    catch(...) 
    {
        
    }
}