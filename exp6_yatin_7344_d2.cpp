
#include <cmath>

class Circle
{
private:
  double radius;
public:
    Circle (double radius):radius (radius)
  {
  }
  double getArea () const
  {
	return M_PI * pow (radius, 2);
  }
  double getPerimeter () const
  {
	return 2 * M_PI * radius;
  }
  void printInfo () const
  {
	std::
	  cout << "Circle: Area: " << getArea () << ", Perimeter: " <<
	  getPerimeter () << std::endl;
  }
};

class Rectangle
{
private:
  double length;
  double width;
public:
    Rectangle (double length, double width):length (length), width (width)
  {
  }
  double getArea () const
  {
	return length * width;
  }
  double getPerimeter () const
  {
	return 2 * (length + width);
  }
  void printInfo () const
  {
	std::
	  cout << "Rectangle: Area: " << getArea () << ", Perimeter: " <<
	  getPerimeter () << std::endl;
  }
};

class Triangle
{
private:
  double side1;
  double side2;
  double side3;
public:
    Triangle (double side1, double side2, double side3):side1 (side1),
	side2 (side2), side3 (side3)
  {
  }

  double getArea () const
  {

	double s = (side1 + side2 + side3) / 2;
	  return sqrt (s * (s - side1) * (s - side2) * (s - side3));
  }
  double getPerimeter () const
  {
	return side1 + side2 + side3;
  }
  void printInfo () const
  {
	std::
	  cout << "Triangle: Area: " << getArea () << ", Perimeter: " <<
	  getPerimeter () << std::endl;
  }
};

int
main ()
{
  Circle circle (5);
  Rectangle rectangle (4, 6);
  Triangle triangle (3, 4, 5);

  circle.printInfo ();
  rectangle.printInfo ();
  triangle.printInfo ();

  return 0;
}
