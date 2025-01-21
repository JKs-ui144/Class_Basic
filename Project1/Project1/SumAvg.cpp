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
	double avg = 0;
	for (int i = 0; i < 5; i++)
	{
		avg += arr[i];
	}
	avg /= 5;
	return avg;
}

void UPbubbleSort(int* arr, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void DownbubbleSort(int* arr, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

void function1(int* arr) {

}

void function2(int& arr) {

}

/*int main() {
	int arr[5] = {0};
	cout << "배열에 넣을 숫자 5개를 입력해주세요" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번째 숫자: ";
		cin >> arr[i];
	}
	cout << "총 합: " << Sum(arr) << endl;
	cout << "평균: " << Avg(arr) << endl;
	
	cout << "오름차순 정렬: ";
	UPbubbleSort(arr,5);
	cout << endl << "내림차순 정렬: ";
	DownbubbleSort(arr, 5);

	function1(arr);
	function2(arr[0]);

	return 0;
}*/