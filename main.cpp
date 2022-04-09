#include <iostream>

#include "assignment/min_binary_heap.hpp"

using namespace std;
using namespace assignment;

int main() {
  assignment::MinBinaryHeap minBinaryHeap;
  minBinaryHeap.Insert(7,6);
  minBinaryHeap.Insert(17,3);
  minBinaryHeap.Insert(36,5);
  minBinaryHeap.Insert(19,4);
  minBinaryHeap.Extract();
  return 0;
}
