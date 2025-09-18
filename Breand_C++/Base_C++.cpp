// ���� 2-8
// String Ŭ������ �̿��� ���ڿ� �Է� �� �ٷ��

//#include <iostream>
//#include <string>
//
//using namespace std;

/*
int main()
{
	string song("Falling in love with you");; // ���ڿ� song
	string elvis("Elvis Presley");			  // ���ڿ� elvis
	string singer;							  // ���ڿ� singer

	cout << song + "�� �θ� ������"; // + �� ���ڿ� ����
	cout << "(��Ʈ : ù���ڴ� " << elvis[0] << ")? "; // [] ������ ���
	
	getline(cin, singer); // ���ڿ� �Է�
	if (singer == elvis)  // ���ڿ� ��
		cout << "�¾ҽ��ϴ�.";
	else
		cout << "Ʋ�Ƚ��ϴ�. " + elvis + "�Դϴ�." << endl; // +�� ���ڿ� ����
}
*/

// Check Time

/*
int main()
{
	char department[21];
	
	cout << "���ø� �Է��ϼ���: ";

	cin.getline(department, 21);

	if (department, ".")
	{
		cout << "�Է��� . �Դϴ�.";
	}
	else
	{
		cout << "�Է��� .�� �ƴմϴ�";
	}
}
*/

// open Challenge
// ���� ���� �� ���� ����� [ char �迭 ��� ]

/*
int main()
{
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n" << endl;
	
	char L[10], Z[10]; // ���ڿ��� ��������

	cout << "�ι̿�>> ";
	cin >> L; // �ι̿� �Է� ���ڿ�

	cout << "�츮��>> ";
	cin >> Z; // �츮�� �Է� ���ڿ�

	if (strcmp(L, "����") == 0 && strcmp(Z, "��") == 0)
	{
		cout << "�ι̿��� �̰���ϴ�." << endl;
	}
	else
	{
		cout << "�츮���� �̰���ϴ�" << endl;
	}

	return 0;
}
*/

// string ���

/*
int main()
{
	string l, z;
	
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���. \n" << endl;

	cout << "�ι̿�>> ";
	cin >> l;

	cout << "�츮��>> ";
	cin >> z;

	if (l == "����" && z == "��" && l == "����" && z == "��")
	{
		cout << "�ι̿��� �̰���ϴ�. " << endl;
	}
	else
	{
		cout << "�츮���� �̰���ϴ�. " << endl;
	}
}
*/