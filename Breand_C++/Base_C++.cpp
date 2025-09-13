// 예제 2-8
// String 클래스를 이용한 문자열 입력 및 다루기

#include <iostream>
#include <string>

using namespace std;

/*
int main()
{
	string song("Falling in love with you");; // 문자열 song
	string elvis("Elvis Presley");			  // 문자열 elvis
	string singer;							  // 문자열 singer

	cout << song + "를 부른 가수는"; // + 로 문자열 연결
	cout << "(힌트 : 첫글자는 " << elvis[0] << ")? "; // [] 연산자 사용
	
	getline(cin, singer); // 문자열 입력
	if (singer == elvis)  // 문자열 비교
		cout << "맞았습니다.";
	else
		cout << "틀렸습니다. " + elvis + "입니다." << endl; // +로 문자열 연결
}
*/

// Check Time

/*
int main()
{
	char department[21];
	
	cout << "도시를 입력하세요: ";

	cin.getline(department, 21);

	if (department, ".")
	{
		cout << "입력이 . 입니다.";
	}
	else
	{
		cout << "입력이 .이 아닙니다";
	}
}
*/

// open Challenge
// 가위 바위 보 게임 만들기 [ char 배열 사용 ]

/*
int main()
{
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n" << endl;
	
	char L[10], Z[10]; // 문자열을 생성해줌

	cout << "로미오>> ";
	cin >> L; // 로미오 입력 문자열

	cout << "쥴리엣>> ";
	cin >> Z; // 쥴리엣 입력 문자열

	if (strcmp(L, "가위") == 0 && strcmp(Z, "보") == 0)
	{
		cout << "로미오가 이겼습니다." << endl;
	}
	else
	{
		cout << "쥴리엣이 이겼습니다" << endl;
	}

	return 0;
}
*/

// string 사용

/*
int main()
{
	string l, z;
	
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요. \n" << endl;

	cout << "로미오>> ";
	cin >> l;

	cout << "쥴리엣>> ";
	cin >> z;

	if (l == "가위" && z == "보" && l == "가위" && z == "보")
	{
		cout << "로미오가 이겼습니다. " << endl;
	}
	else
	{
		cout << "쥴리엣이 이겼습니다. " << endl;
	}
}
*/