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
	cout << "배열에 넣을 숫자 5개를 입력해주세요" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 숫자: ";
		cin >> arr[i];
	}
	cout << "총 합: " << Sum(arr) << endl;
	cout << "평균: " << Avg(arr) << endl;
}