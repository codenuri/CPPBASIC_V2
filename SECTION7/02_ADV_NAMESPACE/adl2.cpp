
namespace Shape
{
    class Point
    {
        int x;
        int y;
    public:
        Point(int a = 0, int b = 0 ) : x(a), y(b) {}
        
        friend Point operator+(const Point& p1, const Point& p2);
    };
    
    Point operator+(const Point& p1, const Point& p2)
    {
        return Point( p1.x + p2.x, p1.y + p2.y);
    }    
}

int main()
{
    Shape::Point p1(1,1);
    Shape::Point p2(2,2);
    
    Shape::Point p3 = p1 + p2;
    Shape::Point p4 = operator+(p1, p2);
    
}