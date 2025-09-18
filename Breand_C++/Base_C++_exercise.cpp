#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

// 1�� ����

/*
int main()
{
	int a, b;

	cout << "�� ���� ������ �Է��ϼ���>> ";
	cin >> a >> b;

	cout << "25+7=" << a + b << endl;
	cout << "25-7=" << a - b << endl;
	cout << "25*7=" << a * b << endl;

	return 0;
}
*/

// 2�� ����

/*
int main()
{
	int x1, y1;
	int x2, y2;

	cout << "�簢���� ����(x1, y1, x2, y2)�� �Է��ϼ���>>";
	cin >> x1 >> y1 >> x2 >> y2;

	double a = (x2 - x1) / 2.0; // ���� ������
	double b = (y2 - y1) / 2.0; // ���� ������

	double area = 3.14 * a * b;

	cout << "Ÿ���� ������" << area << "�Դϴ�." << endl;
}
*/

// 3�� ����

/*
int main()
{
	int a;
	
	cout << "������ �Է��ϼ���>>";
	cin >> a;

	a = a % 100;

	if (a /= 10)
	{
		cout << "245�� " << "10�� �ڸ� ���� " << a << "�Դϴ�.";
	}
	else
	{
		cout << "6�� " << "10�� �ڸ� ���� " << a << "�Դϴ�.";
	}
}
*/

// 4�� ����

/*
int main()
{
	double sum = 0, num;

	cout << "�Ǽ� 5���� �Է��ϼ���>>";
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		if (num > 0) // num�� 0���� Ŭ ��� �ջ�
		{
			sum += num; // sum�� ���� 
		}
	}

	cout << "��� ���� " << sum << "�Դϴ�.";
}
*/

// 5�� ����

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

// 6������

/*
int main()
{
	string day;
	cout << "3�� 1���� ���� �����Դϱ�? ";
	cin >> day;

	// ������ ���ڷ� ��ȯ
	int startDay = 0;
	if (day == "��") startDay = 0;
	else if (day == "��") startDay = 1;
	else if (day == "ȭ") startDay = 2;
	else if (day == "��") startDay = 3;
	else if (day == "��") startDay = 4;
	else if (day == "��") startDay = 5;
	else if (day == "��") startDay = 6;

	// ���� ���� ���
	cout << "��\t��\tȭ\t��\t��\t��\t��" << endl;

	// 1�� ���� ������ ���� ���
	for (int i = 0; i < startDay; i++)
	{
		cout << "\t";
	}

	// 1�Ϻ��� 31�ϱ��� ���
	for (int Daynum = 1; Daynum <= 31; Daynum++)
	{
		cout << Daynum << "\t";
		
		// ����ϸ��� ���� �ٲ�
		if ((Daynum + startDay) % 7 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}
*/

// 7������

/*
int main()
{
	string buf, bup;

	cout << "���ڿ��� �Է��ϼ���>> ";
	getline(cin, buf);

	cout << "���ڿ��� �Է��ϼ���>> ";
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

// �ǽ����� 8

/*
int main()
{
	string text;
	
	cout << "��ĭ ���� ���ڿ��� �Է��ϼ���>>";
	getline(cin, text);

	for (int i = 0; i < text.length(); i++)
	{
		cout << text[i] << " ";
	}
}
*/

// �ǽ����� 9

/*
int main()
{
	string buf;

	while (buf != "OK") // "OK"�� �ƴ� �� �ݺ�
	{
		cout << "�������� OK�� �Է��ϼ���>>";
		getline(cin, buf);
	}
}
*/

// �ǽ����� 10

/*
int main()
{
	string text;

	while (true)
	{
		cout << "���� �ؽ�Ʈ�� �Է��ϼ���(��ĭ ���� ����)>>";
		getline(cin, text);

		if (text == "exit") break;

		stringstream ss(text); // ���ڿ� ��Ʈ������ ��ȯ
		string text_1;		   // �ܾ �ӽ÷� ���� ����
		int count = 0;		   // ī���� �ܾ� ���� ����

		while (ss >> text_1)   // ���� ������ �ܾ� ����
		{
			count++;		   // �ܾ� ���� ����
		}

		cout << "�ܾ��� ������" << count << "�Դϴ�." << endl;
	}

	cout << "���α׷��� �����մϴ�.";
}
*/

// �ǽ����� 11

/*
int main()
{
	srand((unsigned)time(0)); // ���ึ�� �ٸ� ���� �߻� (�õ�)
	cout << "*** ������ ���߱� �����Դϴ�. ***" << endl;

	int count = 0; // ī���� ����

	while (true)
	{
		int a = rand() % 9 + 1; // 1 ~ 9 ����
		int b = rand() % 9 + 1; // 1 ~ 9 ����
		int answer;				// ���� ���� ����

		cout << a << " x " << b << " = "; // ���� x ���� =
		cin >> answer;					  // ���� �Է�

		if (answer != a * b) // �Է� ���ڿ� ���� ���� ���
		{
			count++; // ���� ����
			cout << count << "�� Ʋ�Ƚ��ϴ�." << "�й��ϼ���." << endl;
			
			if(count == 3) break; // ī���Ͱ� 3�� �Ǹ� ���α׷� ����
		}
		else
		{
			cout << "�����Դϴ�. ���߽��ϴ�." << endl;
		}
	}
}
*/

// 실습문제 12

/*
int main()
{
	string st;
	int count = 0;
	int hwang = 0, jang = 0; // 황수희, 장수희
	
	cout << "과대표 출마자: 황수희, 장수희" << "\n";

	while (true)
	{
		cout << "이름과 투표수>> ";
		cin >> st; // 이름

		if (st == "그만") break;

		cin >> count; // 득표수

		if (st == "황수희")
		{
			hwang += count; // 황수희 득표수 총합
		}
		else if (st == "장수희")
		{
			jang += count; // 장수희 득표수 총합
		}
		else
		{
			cout << st << "은 출마자가 아닙니다. \n";
			continue; // 처음부터 다시 입력
		}
	}

	cout << "최종 집계 : ";
	cout << "황수희: " << hwang << ",";
	cout << " " << "장수희: " << jang << "\n";

	if (hwang > jang) // 황수희가 장수희보다 클 경우
	{
		cout << "과대표로 황수희가 선출되었습니다." << endl;
	}
	else
	{
		cout << "과대표로 장수희가 선출되었습니다." << endl;
	}
}
*/

// 실습문제 13

/*
int main()
{
	string st;
	// 에스프레소, 아메리카노, 카푸치노 변수 등록
	int sp = 3000, am = 3500, kp = 4000;
	int count = 0, sum = 0, order = 0; 

	cout << "에스프레소 3000원, 아메리카노 3500원, 카푸치노 4000원입니다." << "\n";
	
	while (true)
	{
		cout << "주문 >> ";
		cin >> st >> count;
		
		if (st == "에스프레소")
		{
			order = sp * count;
		}
		
		else if (st == "아메리카노")
		{
			order = am * count;
		}

		else if (st == "카푸치노")
		{
			order = kp * count;
		}

		cout << order << "원 입니다. 맛있게 드세요." << "\n";
		
		sum += order;

		if (sum >= 30000) break;
	}

	cout << "오늘" << sum <<
		"원을 판매하여 카페를 닫습니다. 내일봐요 ~~~" << "\n";
}
*/

// 실습문제 14

/*
int main()
{
	string st;
	int jj = 10, jb = 20, bb = 5; // 짜장, 짬뽕, 볶음밥
	int count = 0, sum = 0;

	while (true)
	{

		if (jj == 0 && jb == 0 && bb == 0) break;

		cout << "오늘 주문 가능량: "
			<< "짜장면 " << jj << "인분, "
			<< "짬뽕 " << jb << "인분, "
			<< "볶음밥 " << bb << "인분" << "\n";

		cout << "주문>> ";
		cin >> st >> count;

		if (count <= 0) continue; // 수량 검증

		if (st == "짜장면")
		{
			if (count > jj)
			{
				cout << jj << "인분만 가능합니다.\n";
				continue;
			}
			jj -= count;
		}

		else if (st == "짬뽕")
		{
			if (count > jb)
			{
				cout << jb << "인분만 가능합니다.\n";
				continue;
			}
			jb -= count;
		}

		else if (st == "볶음밥")
		{
			if (count > bb)
			{
				cout << bb << "인분만 가능합니다.\n";
				continue;
			}
			bb -= count;
		}
		else
		{
			cout << st;
			break;
		}
	}

	cout << "\n프로그램을 종료합니다.";
}
*/

// 실습문제 15

/*
int main()
{
	char str[10000];
	int count[26] = { 0 };
	

	cout << "히스토그램을 그립니다. 텍스트의 끝은 ; 이고\n";
	cout << "10000개의 문자까지 가능합니다. 영문 텍스트를 입력하세요.\n";

	cin.getline(str, 10000, ';');

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		if (isalpha((unsigned char)c)) // 알파벳인가 확인
		{
			c = tolower((unsigned char)c); // 소문자로 변환
			count[c - 'a']++;			   // 해당 알파벳 카운트 증가
		}
	}

	for (int i = 0; i < 26; i++)
	{
		string label = string(1, 'a' + i)
			+ " (" + to_string(count[i]) + ")";

		cout << left << setw(8) << label << " : ";

		for (int j = 0; j < count[i]; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
*/

// 실습문제 16

/*
int main()
{
	char text1[100], text2[100]; // 문자를 적을 배열 두개
	int printed[26] = { 0 }; // 이미 출력한 알파벳 기록

	cout << "텍스트입력>> ";
	cin.getline(text1, 100);

	cout << "텍스트입력>> ";
	cin.getline(text2, 100);

	for (int i = 0; text1[i] != '\0'; i++) // text1[0] ~ \0문자까지
	{
		// 소문자 text1[i]배열을 c1에 대입
		char c1 = tolower((unsigned char)text1[i]);

		if (isalpha((unsigned char)c1)) // 알파벳인가 검사
		{
			// 이미 출력한 알파벳이면 건너뜀
			if (printed[c1 - 'a']) continue;
		}

		// 소문자 text2[j] 배열이 \0 문자가 아닐 때까지 반복
		for (int j = 0; text2[j] != '\0'; j++)
		{
			// 소문자 text2[j] 값을 c2에 대입
			char c2 = tolower((unsigned char)text2[j]);

			// c2를 알파벳인가 검사 그리고 c1 과 c2가 같은지
			// 즉 이미 출력한 알파벳 기록들 중 검사
			if (isalpha((unsigned char)c2) && c1 == c2)
			{
				cout << c1 << " ";

				// 다시 출력 되지 않게 중복된 값을 기록
				printed[c1 - 'a'] = true; 
				break; // 찾았으면 다음 문자로 반복
			}
		}
	}

	 cout << "\n";
}
*/
