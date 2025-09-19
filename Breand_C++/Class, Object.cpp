// --- 클래스와 객체 --- //

#include <iostream>

using namespace std;

// 예제 3-1 : Circle 클래스의 객체 생성 및 활용

/*
class Circle
{

// --- Circle 선언부 --- //
public:
	int radius;
	double getArea();
};

// -- Circle 구현분 --- //
double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	
	// 29. 객체 donut 생성
	// 30. donut의 멤버 변수 접근
	// 31. donut의 멤버 함수 호출

	Circle donut;
	donut.radius = 1; // donut 객체의 반지름을 1로 설정
	double area = donut.getArea(); // donut 객체의 면적 알아내기
	cout << "donut 면적은 " << area << endl;

	
	// 41. 객체 pizza 생성
	// 42. pizza의 멤버 변수 접근
	// 43. pizza의 멤버 함수 호출
	Circle pizza;
	pizza.radius = 30; // pizza 객체의 반지름을 30으로 설정
	area = pizza.getArea(); // pizza 객체의 면적 알아내기
	cout << "pizza 면적은 " << area << endl;
}
*/

 // 3-2 예제 : Rectangle 클래스 만들기

/*
class Rectangle // 클래스 선언
{

// 클래스 선언부 //
public:
	int width;
	int height;
	int getArea();
};

// 클래스 구현부 //
int Rectangle::getArea()
{
	return width * height;
}

int main()
{
	Rectangle rect;

	rect.width = 3;
	rect.height = 5;

	cout << "사각형의 면적은 " << rect.getArea() << endl;
	return 0;
}
*/

// 예제 3 - 3 : Circle 클래스의 객체 생성 및 활용

/*
class Circle
{
public:
	int radius;
	Circle(); // 기본 생성자
	Circle(int r); // 매개 변수 있는 생성자
	double getArea();
};


// 클래스 선언부 //

Circle::Circle()
{
	radius = 1; // 반지름 값 초기화
	cout << "반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r)
{
	radius = 1; // 반지름 값 초기화
	cout << "반지름" << radius << "원 생성" << endl;
}

// 클래스 구현부 //
double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle donut; // 매개 변수 없는 기본 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza; // 매개 변수 없는 기본 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
*/

// 예제 3-4 : 멤버 변수 초기화와 위임 생성자 활용

/*
class Point
{
	int x, y;
public:
	Point();
	Point(int a, int b);

	void show() 
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

// 위임 생성자 선언
Point::Point() : Point(0, 0) {} // Point(int a, int b) 생성자 호출
Point::Point(int a, int b) : x(a), y(b) {}

int main()
{
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}
*/

// 예제 3-5 : Rectangle 클래스 만들기

/*
class Rectangle
{
	int width, height;
public:
	Rectangle();
	Rectangle(int w, int h);
	Rectangle(int length);
	bool isSquare();
};

Rectangle::Rectangle()
{
	width = height = 1;
}

Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}

Rectangle::Rectangle(int length)
{
	width = height = length;
}

bool Rectangle::isSquare() // 정사각형이면 true를 리턴하는 멤버 함수
{
	if (width == height) return true;
	else return false;
}

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}
*/