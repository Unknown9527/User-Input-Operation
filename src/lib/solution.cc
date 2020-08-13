#include "solution.h"
#include <map>
#include <iostream>


void Solution::InputOutput (int x, vector<int> input0){

    if (x == 1)
    {
        cout << "Output: " << input0[0] << endl;
        current_state = 0;

    }else if (x == 2)
    {
        int temp = input0.size() - 1;
        cout << "Output: " << input0[temp] << endl;
        current_state = temp;

    }else if (x == 3)
    {
        cout << "Output: " << input0[current_state] << endl;
    }else if (x == 4)
    {
        cout << "Enter the value of i:: " << endl;
        int i;
        cin >> i;
        int temp = input0.size();
        if (i + current_state >= temp)
        {
            cout<< "Output: Sorry! You cannot traverse " << i << " elements from your current location." << endl;
        }else
        {
            cout << "Output: " << input0[current_state + i] << endl;
            current_state = current_state + i;
        }
    }else if (x == 5)
    {
        EXIT_SUCCESS;
    }else
    {
        cout << "Command not found." <<endl;
    }
    // create a vector for rotating





}



