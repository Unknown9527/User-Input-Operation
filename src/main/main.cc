#include <iostream>
#include "src/lib/solution.h"



// print the vector
void PrintVector(vector<int> & input){
   
   for(int i =0; i < input.size(); i++){
       cout << input[i] <<" ";
   }
   cout << endl;
}


int main()
{
    Solution solution;
    // vector<int> input0 = {10, 20, 30, 40, 50, 60, 70, 80 ,90, 100};
    vector<int> input0 = {1, 4, 5, 23, 100, 12, 18, 175};

    int x;

    while(x!=5){
        // cout << "Vector: 10, 20, 30, 40, 50, 60, 70, 80 ,90, 100" << endl;
        cout << "1, 4, 5, 23, 100, 12, 18, 175" << endl;
        // input 1, 2, 3, 1, 3, (4,2), 5
        cout << "***********************************************" << endl;
        cout << "Please choose any of the following options:" << endl;
        cout << "   1. What is the first element?" << endl;
        cout << "   2. What is the last element?" << endl;
        cout << "   3. What is the current element?" <<endl;
        cout << "   4. What is the ith element from the current location?" <<endl;
        cout << "   5. Exit." <<endl;
        cin >> x;
        solution.InputOutput(x, input0);    

    }

    return EXIT_SUCCESS;
}
