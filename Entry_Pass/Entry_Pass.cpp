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
//   vector<int> temp2 = { 7, 51, 36, 55, 14, 25, 2, 17 };
//   vector<int> temp3 = { 7, 51, 2, 36, 14, 25, 55, 17 };
//   Pivoting<int> test = Pivoting<int>();
//
//   test.do_qsort(temp2);
//
//   return 0;
//
//}