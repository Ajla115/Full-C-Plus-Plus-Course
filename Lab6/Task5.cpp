//
// Created by User on 23. 2. 2024..
// #5: Write C++ program to update every array element by multiplication of the next and previous values of given array of integers.


#include<iostream>
using namespace std;

void replace_elements(int nums[], int arrLength)
{
    if (arrLength <= 1)
        return;

    int prev_element = nums[0];
    nums[0] = nums[0] * nums[1];

    for (int i=1; i < arrLength - 1; i++)
    {
        int curr_element = nums[i];

        nums[i] = prev_element * nums[i+1];

        prev_element = curr_element;
    }

    nums[arrLength - 1] = prev_element * nums[arrLength - 1];
}

int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int arrLength = sizeof(nums) / sizeof(nums[0]);

    cout << "Original array: ";
    for (int i=0; i < arrLength; i++)
        cout << nums[i] <<" ";

    replace_elements(nums, arrLength);

    cout << "\nNew array elements: ";
    for (int i=0; i < arrLength; i++)
        cout << nums[i] <<" ";

    return 0;

}