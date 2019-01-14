#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;
class Student
{
private:
	string id;
	string name;
	double chinese;
	double math;
	double english;
public:
	void input();
	void output();

	double getChinese(){ return chinese; }
	double getMath(){ return math; }
	double getEnglish(){ return english; }



	double average()
	{
		return (chinese + math + english) / 3;
	}
	bool find(string str)
	{
		if (name == str)
			return true;
		return false;
	}

	friend ostream& operator <<(ostream&os, Student&obj)
	{
		os << obj.id << "\t";
		os << obj.name << "\t";
		os << obj.chinese << "\t";
		os << obj.math << "\t";
		os << obj.english << "\t";
		return os;
	}
	friend istream& operator >>(istream&is, Student&obj)
	{
		is >> obj.id >> obj.name >> obj.chinese >> obj.math >> obj.english;
		return is;
	}
};
enum{ Chinese, Math, English };
enum{ A, B, C, D, E };
class Management
{
private:
	vector<Student>stu;
public:
	void load()
	{
		ifstream is;
		is.open("student.txt");
		if (is.fail())
			return;
		while (!is.eof())
		{
			Student temp;
			is >> temp;
			stu.push_back(temp);
		}
	}
	void show()
	{
		int i, n = stu.size();
		cout << "ѧ��\t����\t����\t��ѧ\tӢ��\tƽ����" << endl;
		for (i = 0; i<n; i++)
			cout << stu[i] << stu[i].average() << endl;
	}
	Student show(int index)
	{
		cout << "ѧ��\t����\t����\t��ѧ\tӢ��" << endl;
		return stu[index];
	}
	int find(string str)
	{
		int i, n = stu.size();
		for (i = 0; i<n; i++)
		{
			if (stu[i].find(str))
				return i;
		}
		return -1;
	}
	double max(int course)
	{
		int i, n = stu.size();
		int index = 0;
		for (i = 0; i<n; i++)
		{
			switch (course)
			{
			case Chinese:
				if (stu[i].getChinese()>stu[index].getChinese())
					index = i;
				break;
			case Math:
				if (stu[i].getMath()>stu[index].getMath())
					index = i;
				break;
			case English:
				if (stu[i].getEnglish()>stu[index].getEnglish())
					index = i;
				break;
			}
		}
		return index;
	}
	double min(int course)
	{
		int i, n = stu.size();
		int index = 0;
		for (i = 0; i<n; i++)
		{
			switch (course)
			{
			case Chinese:
				if (stu[i].getChinese()<stu[index].getChinese())
					index = i;
				break;
			case Math:
				if (stu[i].getMath()<stu[index].getMath())
					index = i;
				break;
			case English:
				if (stu[i].getEnglish()<stu[index].getEnglish())
					index = i;
				break;
			}
		}
		return index;
	}
	double average(int course)
	{
		int i;
		int n = stu.size();
		double total = 0;
		for (i = 0; i<n; i++)
		{
			switch (course)
			{
			case Chinese:
				total += stu[i].getChinese();
				break;
			case Math:
				total += stu[i].getMath();
				break;
			case English:
				total += stu[i].getEnglish();
				break;
			}
		}
		return total / n;
	}
	int fail(int course)
	{
		int i;
		int n = stu.size();
		int total = 0;
		for (i = 0; i<n; i++)
		{
			switch (course)
			{
			case Chinese:
				if (stu[i].getChinese()<60)
				{
					if (!total)
						cout << "�ɼ�����������" << endl << "ѧ��\t����\t����\t��ѧ\tӢ��" << endl;
					cout << stu[i] << endl;
					total++;
				}
				break;
			case Math:
				if (stu[i].getMath()<60)
				{
					if (!total)
						cout << "�ɼ�����������" << endl << "ѧ��\t����\t����\t��ѧ\tӢ��" << endl;
					cout << stu[i] << endl;
					total++;
				}
				break;
			case English:
				if (stu[i].getEnglish()<60)
				{
					if (!total)
						cout << "�ɼ�����������" << endl << "ѧ��\t����\t����\t��ѧ\tӢ��" << endl;
					cout << stu[i] << endl;
					total++;
				}
				break;
			}
		}
		return total;
	}
	bool isIn(int x, int a, int b)
	{
		if (a <= x&&x <= b)
			return true;
		else if (b <= x&&x <= a)
			return true;
		return false;
	}
	void stat()
	{
		int i;
		string Course[] = { "����", "��ѧ", "Ӣ��" };
		cout << "ѧ��\t0~59\t60~69\t70~79\t80~89\t90~100" << endl;
		for (i = 0; i<3; i++)
		{
			cout << Course[i] << "\t" << stat(i, E) << "\t" << stat(i, D) << "\t" << stat(i, C) << "\t" << stat(i, B) << "\t";
			cout << stat(i, A) << endl;
		}
	}
	int stat(int course, int level)
	{
		int i;
		int n = stu.size();
		int total = 0;
		double score;
		for (i = 0; i<n; i++)
		{
			switch (course)
			{
			case Chinese:
				score = stu[i].getChinese();
				break;
			case Math:
				score = stu[i].getMath();
				break;
			case English:
				score = stu[i].getEnglish();
				break;
			}
			switch (level)
			{
			case A:
				if (isIn(score, 90, 100))
					total++;
				break;
			case B:
				if (isIn(score, 80, 89))
					total++;
				break;
			case C:
				if (isIn(score, 70, 79))
					total++;
				break;
			case D:
				if (isIn(score, 60, 69))
					total++;
				break;
			case E:
				if (isIn(score, 0, 59))
					total++;
				break;
			}
		}
		return total;
	}
};
int chooseCourse()
{
	int n;
	string Course[] = { "����", "��ѧ", "Ӣ��" };
	cout << "��ѡ��ѧ��" << endl;
	cout << "1.����" << endl;
	cout << "2.��ѧ" << endl;
	cout << "3.Ӣ��" << endl;
	cin >> n;
	if (1 <= n&&n <= 3)
		cout << Course[n - 1];
	return n - 1;
}
int main()
{
	Management menu;
	string name;
	int index;
	char option;
	do
	{
		cout << "1.��������" << endl;
		cout << "2.��ʾ���м�¼" << endl;
		cout << "3.�����������Ҽ�¼" << endl;
		cout << "4.��ʾ��߳ɼ�" << endl;
		cout << "5.��ʾ��ͳɼ�" << endl;
		cout << "6.��ʾƽ���ɼ�" << endl;
		cout << "7.��ʾ�������ѧ��" << endl;
		cout << "8.������������ͳ��" << endl;
		cin >> option;
		switch (option)
		{
		case '1':
			menu.load();
			break;
		case '2':
			menu.show();
			break;
		case '3':
			cout << "����������" << endl;
			cin >> name;
			index = menu.find(name);
			if (index >= 0)
				cout << menu.show(index) << endl;
			else
				cout << "�Ҳ�����ѧ��" << endl;
			break;
		case '4':
			index = menu.max(chooseCourse());
			if (index >= 0)
			{
				cout << "��߳ɼ�Ϊ" << endl;
				cout << menu.show(index) << endl;
			}
			break;
		case '5':
			index = menu.min(chooseCourse());
			if (index >= 0)
			{
				cout << "��ͳɼ�Ϊ" << endl;
				cout << menu.show(index) << endl;
			}
			break;
		case '6':
			cout << "ƽ���ɼ�Ϊ" << menu.average(chooseCourse()) << endl;
			break;
		case '7':
			index = menu.fail(chooseCourse());
			cout << "�ɼ����������" << index << "��" << endl;
			break;
		case '8':
			menu.stat();
			break;
		}
	} while (option != '0');
	return 0;
}