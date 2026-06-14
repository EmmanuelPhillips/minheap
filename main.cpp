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

int MinHeap::top() const { return empty() ? 0 : heap[0]; }

void MinHeap::push(int value) {
  heap.emplace_back(value);
  bubbleUp(heap[heap.size() - 1]);
}

void MinHeap::bubbleUp(int index) {
  int parentIndex{(index - 1) / 2};
  while (heap[index] < heap[parentIndex] && index != 0) {
    std::swap(heap[index], heap[parentIndex]);
    index = parentIndex;
    parentIndex = (index - 1) / 2;
  }
}

int main() {
  MinHeap h;

  std::cout << "Goodbye\n";
  return 0;
}
