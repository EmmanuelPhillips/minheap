#include <iostream>
#include <vector>

class MinHeap {
private:
  std::vector<int> heap;

  void bubbleUp(int index);
  void bubbleDown(int index);

public:
  void push(int value);
  int pop();
  int top() const;
  bool empty() const;
};

bool MinHeap::empty() const { return heap.size(); }

int main() {
  MinHeap h;

  std::cout << "Goodbye\n";
  return 0;
}
