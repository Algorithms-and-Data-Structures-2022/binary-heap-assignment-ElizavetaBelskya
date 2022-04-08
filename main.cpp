#include <iostream>

#include "assignment/min_binary_heap.hpp"

using namespace std;
using namespace assignment;

int main() {
  assignment::MinBinaryHeap minBinaryHeap;
  minBinaryHeap.Insert(3,66);
  minBinaryHeap.Insert(7,55);
  minBinaryHeap.Insert(1,222);
  minBinaryHeap.Insert(9,88);
  std::cout << minBinaryHeap.Search(6).has_value() << std::endl;
  std::cout << minBinaryHeap.capacity();

  return 0;
}
