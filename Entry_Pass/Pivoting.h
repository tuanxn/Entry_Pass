// Student ID: 20274909

#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;

#ifndef Pivoting_h
#define Pivoting_h

template <typename T>
class Pivoting {
private:
   static size_t _partition(vector<T>& elems, size_t lo, size_t hi) {
      size_t pivot = lo + (hi - lo) / 2;
      T pivot_val = elems[pivot];
      T temp;

      while (lo < hi) {
         if (elems[lo] < pivot_val && pivot_val < elems[hi]) {
            lo++;
            hi--;
         }
         else if (elems[lo] < pivot_val) {
            lo++;
         }
         else if (elems[hi] > pivot_val) {
            hi--;
         }
         else {
            temp = elems[lo];
            elems[lo] = elems[hi];
            elems[hi] = temp;
            lo++;
            hi--;
         }
      }

      if (elems[hi] > pivot_val) {
         return hi - 1;
      }
      return hi;
   }

   static void _do_qsort(vector<T>& elems, size_t lo, size_t hi) {
      if (hi <= lo) {
         return;
      }

      size_t pivot = _partition(elems, lo, hi);

      _do_qsort(elems, lo, pivot);
      _do_qsort(elems, pivot + 1, hi);
   }

   static T _find_kth_least_elem(vector<T>& elems, size_t lo, size_t hi, size_t k) {

      if (lo == hi) {
         return elems[lo];
      }

      size_t pivot = _partition(elems, lo, hi);

      if (k <= pivot) {
         _find_kth_least_elem(elems, lo, pivot, k);
      }
      else if (k >= pivot) {
         _find_kth_least_elem(elems, pivot + 1, hi, k);
      }
   }

public:
   static T find_median(vector<T>& elems) {
      size_t total_size = elems.size();
      size_t elems_median_index = total_size / 2;
      
      return _find_kth_least_elem(elems, 0, total_size - 1, elems_median_index);

   }

   static T find_kth_least_elem(vector<T>& elems, size_t k) {
      if (k >= 0 && k < elems.size()) {
         return _find_kth_least_elem(elems, 0, elems.size() - 1, k);
      }
      return T();
   }

   static void do_qsort(vector<T>& elems) { _do_qsort(elems, 0, elems.size()-1); }

   friend class Tests;
};

#endif