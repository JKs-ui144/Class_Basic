#include <iostream>
using namespace std;

int Sum(int arr[]) {
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[]) {
	int avg = 0;
	for (int i = 0; i < 5; i++)
	{
		avg += arr[i];
	}
	avg /= 5;
	return avg;
}

int main() {
	int arr[5] = {0};
	cout << "�迭�� ���� ���� 5���� �Է����ּ���" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "��° ����: ";
		cin >> arr[i];
	}
	cout << "�� ��: " << Sum(arr) << endl;
	cout << "���: " << Avg(arr) << endl;
}