class Shape
{
public:
    int color;
};
class Rect : public Shape
{
public:
    int x, y, w, h;
};

// ���ڷ� ���޵� ������ ���������� �����ϴ� �Լ�
void changeBlack(Shape* p)
{
    p->color = 0;
}
/*
void changeBlack(Triangle* p)
{
    p->color = 0;
}
*/
int main()
{
    Rect r;
    changeBlack(&r);
    
    Rect* buffer[10]; // �簢���� ����
    Shape* buffer[10]; // ��� ���� ����
}




