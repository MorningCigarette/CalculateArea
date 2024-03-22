#include <iostream>
class Shape
{
public:
  virtual double calculateArea() const = 0; // 纯虚函数子类必须实现
  virtual void display() const = 0;
};
class Rectangle :  Shape // 派生类必须实现所有的纯虚函数，否则派生类也会变成抽象类，抽象类不能实例化
{
private:
  double m_length;
  double m_width;

public:
  Rectangle(double length, double width) : m_length(length), m_width(width) {}
  virtual double calculateArea() const override
  {
    return m_length * m_width;
  }
  virtual void display() const override
  {
    std::cout << "Rectangle: Length = " << m_length << ", Width = " << m_width << std::endl;
  }
};

int main(int, char **)
{
  const Rectangle rectangle(5.0, 3.0);
  rectangle.display();
  std::cout << "Area: " << rectangle.calculateArea() << std::endl;
  return 0;
}
