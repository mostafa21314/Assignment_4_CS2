//900214463
//Mostafa gaafar
#include<iostream>
#include<vector>
#include"LinkedList.h"
using namespace std;
void insertAfter(vector<int> &vec, int v1, int v2)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] == v1)
		{
			vec.insert(vec.begin() + i + 1, v2);
		}
	}
}

LinkedList vectoLink(vector<int> x)
{
	LinkedList temp;
	for (int i = 0; i < x.size(); i++)
	{
		temp.addNode(x[i]);

	}
	return temp;

}
int main()
{
	int n = 5;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cout << "Please enter a number to fill the vector  ";
		cin >> temp;
		v.push_back(temp);
		cout << endl;
	}
	int value1, value2;
	cout << "Please enter the first and second value to insert after ";
	cin >> value1 >> value2;
	insertAfter(v, value1, value2);
	cout << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "  ";
	}
	cout << endl;
	LinkedList test = vectoLink(v);
	test.PrintList();
	test.removeNode(3);
	cout << "The list after removing 3 is " << endl;
	test.PrintList();
	cout << "The sum is " << test.sumList();

	return 0;
}