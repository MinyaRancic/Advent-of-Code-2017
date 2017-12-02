#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int maxOfRow(int nums, int row)
{

}

int minOfRows(int nums, int row)
{
}

int main()
{
    int nums[16][16];

    ifstream ifile("input.txt");

    for(int i = 0; i < 16; i++)
    {
        for(int j = 0; j < 16; j++)
        {
            ifile >> nums[i][j];
            cout << nums[i][j]  << ", ";
        }
        cout << endl;
    }
    int sum = 0;

    //Problem One
    for(int i = 0; i < 16; i++)
    {
        sum += *std::max_element(nums[i], nums[i] + 16) - *std::min_element(nums[i], nums[i] + 16);
    }



    cout << sum << endl;

    //Problem Two
    sum = 0;
    for(int row = 0; row < 16; row++)
    {
        for(int col = 0; col < 16; col++)
        {
            for(int col2 = 0; col2 < 16; col2++)
            {
                if(col == col2)
                    continue;

                if(nums[row][col] % nums[row][col2] == 0)
                {
                    int divide = nums[row][col] / nums[row][col2];
                    sum += divide;
                    break;
                }
            }
        }
    }

    cout << sum << endl;


    return 0;
}
