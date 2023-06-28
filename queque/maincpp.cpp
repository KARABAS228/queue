#include<iostream>
#include<windows.h>
#include<queue>
using namespace std;


void SortQueue(queue<int> &q) 
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = q.front();
		q.pop();
	}


	for (int i = 1; i < 10; i++)
	{
		int j = i - 1;
		while (j >= 0 && arr[j] > arr[j + 1])
		{
			swap(arr[j], arr[j + 1]);
			j--;
		}
	}


	for (int i = 0; i <10; i++)
	{
		q.push(arr[i]);
	}

}

void PrintQueue(queue<int> q){
	for (int i = 0; i < 10; i++)
	{
		std::cout << q.front()<<" ";
		q.pop();
	}
	std::cout << "\n";

}








int main() {

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	queue<int> q;
	int data;
	std::cout << "введите 10 чисел очереди через enter"<<std::endl;
	for (int i = 0; i < 10; i++) { std::cin >> data; q.push(data);}
	PrintQueue(q);
	SortQueue(q);
	PrintQueue(q);






	return 0;
}
