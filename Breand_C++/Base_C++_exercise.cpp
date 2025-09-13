#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <ctime>
#include <cstdlib>

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
