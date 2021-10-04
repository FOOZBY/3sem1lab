#include "Header.h"

int get_amout_of_rows(string &prim_file, int n)
{
	cout << "������� �������� �����, ���� �� � ���������� ���������, ����� ������� ���� � �����: ";
	string temp;
	while (true)
	{
		getline(cin, prim_file);
		ifstream in;
		in.open(prim_file); // �������� ���� ��� ������
		if (in.is_open())
		{
			while (getline(in,temp))
			{
				n++;
			}
			break;
		}
		else
		{
			cout << "���� �� ���������� � ��������� �����." << endl;
			cout << "������� ���/���� ����� ���������" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
		}
		cin.seekg(0, ios::end);
		cin.clear();
		in.close();
	}
	return n;
};

void save_primordial_text_to_arrow(string prim_file, string* text, int n)
{
	ifstream in;
	in.open(prim_file);
	for (int i = 0; i < n; i++)
	{
		getline(in, text[i]);
	}
	in.close();
};

void change_primordial_text(string* text,int n)
{
	cout << endl << "����������� �����:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << text[i] << endl;
	}
	cout << endl << "��������� �����:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < text[i].length(); k++)
		{
			if (isalpha(text[i][k]))
			{
				if (isupper(text[i][k]))
					text[i][k] = tolower(text[i][k]);
				else
					text[i][k] = toupper(text[i][k]);
			}
		}
		cout << endl << text[i];
	}
};

void save_changed_text(string* text, int n)
{
	cout << endl << endl << "������� �������� ��� ���� � �����, � ������� ������ ��������� ���������: ";
	string final_file_place;//���� ��������� ��������� �����
	while (true)
	{
		getline(cin, final_file_place);
		ofstream out;
		out.open(final_file_place); // �������� ���� ��� ������
		if (out.is_open())
		{
			for (int i = 0; i < n; i++)
			{
				out << text[i] << '\n';
			}
			cout << endl << "��������� �������" << endl << endl;
			break;
		}
		else
		{
			cout << "�� ����������� ������� ���� � ����� ���/� �� ������� ��� �����. ������� ���� � ��� ����� ������" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
		}
		cin.seekg(0, ios::end);
		cin.clear();
		out.close();// ��������� ����
	}
};