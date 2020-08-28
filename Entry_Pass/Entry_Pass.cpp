// Student ID: 20274909

#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include "Pivoting.h"

using namespace std;

void my_questing_sort_in_place(vector<int>& elems) {
   std::sort(elems.begin(), elems.end());
}

//int main()
//{
//   vector<int> temp3 = { 25, 51, 2, 36, 14, 17, 55, 7 };
//   vector<int> temp4 = { 25, 7 ,9, 16};
//   Pivoting<int> test = Pivoting<int>();
//
//   //cout << test.find_kth_least_elem(temp4, 2) << endl;
//   //cout << test.find_kth_least_elem(temp4, 0) << endl;
//
//   //cout << test.find_median(temp4) << endl;
//
//   for (size_t i = 0; i < 8; i++) {
//      vector<int> temp2 = { 7, 51, 36, 55, 14, 25, 2, 17 };
//      cout << test.find_kth_least_elem(temp2, i) << endl;
//   }
//
//   vector<int> temp2 = { 7, 51, 36, 55, 14, 25, 2, 17 };
//   cout << test.find_kth_least_elem(temp2, 6) << endl;
//
//
//   return 0;
//
//}