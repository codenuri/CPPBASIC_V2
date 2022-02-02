class Shape
{
public:
    virtual void Draw() = 0;
};

class Rect : public Shape
{
public:
    virtual void Draw() { }// ±¸ÇöºÎ..
};

int main()
{
    Shape  s; // error
    Shape* p; // ok
    
    Rect r; 
}