#include <iostream>
#include <String>

using namespace std;

int main()
{
    int sum = 0;
    string inputNum = "";

    //Problem One
    for(int i = 0; i < inputNum.size(); i++)
    {
        if(inputNum.at(i) == inputNum.at((i+1) % inputNum.size()))
        {
            int num = inputNum.at(i) - '0';
            sum += num;
        }

    }
    cout << sum << endl;

    //Problem Two
    int sum_two = 0;
    for(int i = 0; i < inputNum.size(); i++)
    {
        if(inputNum.at(i) == inputNum.at((i+inputNum.size()/2) % inputNum.size()))
        {
            int num = inputNum.at(i) - '0';
            sum_two += num;
        }

    }
    cout << sum_two;
    return 0;
}
