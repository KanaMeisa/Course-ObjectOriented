#include <iostream>
#include <vector>
using namespace std;

int mian() {
	// 创建vector
    vector<int> emptyVector;             // 创建一个空的整数vector
	vector<int> vectorWithSize(10);		 // 创建一个包含10个元素的整数vector，所有元素的值都为0
	vector<int> vectorWithValues(5, 42); // 创建一个包含5个元素的整数vector，所有元素的值都为42


	// 使用push_back向末尾添加元素
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);


	// 使用operator[]或者at()访问元素
	vector<int> numbers = {1, 2, 3, 4, 5};
	int first = numbers[0];		  //访问第一个元素
	int second = numbers.at(1);   //访问第二个元素


	// 使用size()获取vector中元素的数量
	cout << numbers.size() << endl;


	// 遍历vector中的元素
	for (int i : numbers) {
		cout << i << " ";
	}  // 也可以使用numbers[i]


	// 删除vector中的元素
	vector<int> numbers = {1, 2, 3, 4, 5};
	numbers.pop_back();   // 删除末尾的元素
	numbers.erase(numbers.begin() + 1);   // 删除第二个元素


    return 0;
}
