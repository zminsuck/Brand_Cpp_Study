#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

// 1번 문제

/*
int main()
{
	int a, b;

	cout << "두 개의 정수를 입력하세요>> ";
	cin >> a >> b;

	cout << "25+7=" << a + b << endl;
	cout << "25-7=" << a - b << endl;
	cout << "25*7=" << a * b << endl;

	return 0;
}
*/

// 2번 문제

/*
int main()
{
	int x1, y1;
	int x2, y2;

	cout << "사각형의 두점(x1, y1, x2, y2)을 입력하세요>>";
	cin >> x1 >> y1 >> x2 >> y2;

	double a = (x2 - x1) / 2.0; // 가로 반지름
	double b = (y2 - y1) / 2.0; // 세로 반지름

	double area = 3.14 * a * b;

	cout << "타원의 면적은" << area << "입니다." << endl;
}
*/

// 3번 문제

/*
int main()
{
	int a;
	
	cout << "정수를 입력하세요>>";
	cin >> a;

	a = a % 100;

	if (a /= 10)
	{
		cout << "245의 " << "10의 자리 수는 " << a << "입니다.";
	}
	else
	{
		cout << "6의 " << "10의 자리 수는 " << a << "입니다.";
	}
}
*/

// 4번 문제

/*
int main()
{
	double sum = 0, num;

	cout << "실수 5개를 입력하세요>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		if (num > 0) // num이 0보다 클 경우 합산
		{
			sum += num; // sum에 대입 
		}
	}

	cout << "양수 합은 " << sum << "입니다.";
}
*/

// 5번 문제

/*
int main()
{
	for (int i = 1; i <= 55; i++)
	{
		cout << i << '\t';

		if (i % 10 == 0)
		{
			cout << '\n';
		}
	}
}
*/

// 6번문제

/*
int main()
{
	string day;
	cout << "3월 1일은 무슨 요일입니까? ";
	cin >> day;

	// 요일을 숫자로 변환
	int startDay = 0;
	if (day == "일") startDay = 0;
	else if (day == "월") startDay = 1;
	else if (day == "화") startDay = 2;
	else if (day == "수") startDay = 3;
	else if (day == "목") startDay = 4;
	else if (day == "금") startDay = 5;
	else if (day == "토") startDay = 6;

	// 요일 제목 출력
	cout << "일\t월\t화\t수\t목\t금\t토" << endl;

	// 1일 시작 전까지 공백 출력
	for (int i = 0; i < startDay; i++)
	{
		cout << "\t";
	}

	// 1일부터 31일까지 출력
	for (int Daynum = 1; Daynum <= 31; Daynum++)
	{
		cout << Daynum << "\t";
		
		// 토요일마다 요일 바뀜
		if ((Daynum + startDay) % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
*/

// 7번문제

/*
int main()
{
	string buf, bup;

	cout << "문자열을 입력하세요>> ";
	getline(cin, buf);

	cout << "문자열을 입력하세요>> ";
	getline(cin, bup);

	if (buf == bup)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
*/

// 실습문제 8

/*
int main()
{
	string text;
	
	cout << "빈칸 없이 문자열을 입력하세요>>";
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		cout << text[i] << " ";
	}
}
*/

// 실습문제 9

/*
int main()
{
	string buf;

	while (buf != "OK") // "OK"가 아닐 때 반복
	{
		cout << "끝내려면 OK를 입력하세요>>";
		getline(cin, buf);
	}
}
*/

// 실습문제 10

/*
int main()
{
	string text;

	while (true)
	{
		cout << "영문 텍스트를 입력하세요(빈칸 포함 가능)>>";
		getline(cin, text);

		if (text == "exit") break;

		stringstream ss(text); // 문자열 스트림으로 변환
		string text_1;		   // 단어를 임시로 받을 변수
		int count = 0;		   // 카운터 단어 개수 누적

		while (ss >> text_1)   // 공백 단위로 단어 추출
		{
			count++;		   // 단어 개수 누적
		}

		cout << "단어의 개수는" << count << "입니다." << endl;
	}

	cout << "프로그램을 종료합니다.";
}
*/

// 실습문제 11

/*
int main()
{
	srand((unsigned)time(0)); // 실행마다 다른 난수 발생 (시드)
	cout << "*** 구구단 맞추기 퀴즈입니다. ***" << endl;

	int count = 0; // 카운터 누적

	while (true)
	{
		int a = rand() % 9 + 1; // 1 ~ 9 난수
		int b = rand() % 9 + 1; // 1 ~ 9 난수
		int answer;				// 난수 저장 변수

		cout << a << " x " << b << " = "; // 숫자 x 숫자 =
		cin >> answer;					  // 숫자 입력

		if (answer != a * b) // 입력 숫자와 같지 않을 경우
		{
			count++; // 개수 증가
			cout << count << "번 틀렸습니다." << "분발하세요." << endl;
			
			if(count == 3) break; // 카운터가 3이 되면 프로그램 종료
		}
		else
		{
			cout << "정답입니다. 잘했습니다." << endl;
		}
	}
}
*/
