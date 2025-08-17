#include <iostream> // 标准输入输出库
#include <string>   // 字符串操作库

// 定义一个简单的类
class Person
{
private:
    std::string name;
    int age;

public:
    // 构造函数
    Person(const std::string &n, int a) : name(n), age(a) {}

    // 成员函数：打印信息
    void introduce()
    {
        std::cout << "Hello, my name is " << name
                  << " and I am " << age << " years old." << std::endl;
    }
};

// 定义一个函数：计算两数之和
int addNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    // 1. 基础输入输出
    std::cout << "Enter your name: ";
    std::string userName;
    std::cin >> userName; // 从控制台读取输入

    std::cout << "Hello, " << userName << "!" << std::endl;

    // 2. 函数调用
    int num1 = 5, num2 = 3;
    std::cout << "Sum of " << num1 << " and " << num2 << " is: "
              << addNumbers(num1, num2) << std::endl;

    // 3. 类的使用
    Person person("Alice", 25);
    person.introduce();

    return 0; // 程序正常结束
}