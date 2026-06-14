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

bool MinHeap::empty() const { return heap.size() == 0; }

int MinHeap::top() const { return empty() ? 0 : heap[0]; }

void MinHeap::push(int value) {
  heap.emplace_back(value);
  bubbleUp(heap.size() - 1);
}

void MinHeap::bubbleUp(int index) {
  int parentIndex{(index - 1) / 2};
  while (heap[index] < heap[parentIndex] && index != 0) {
    std::swap(heap[index], heap[parentIndex]);
    index = parentIndex;
    parentIndex = (index - 1) / 2;
  }
}

int MinHeap::pop() {
  int min{heap[0]};
  std::swap(heap[0], heap[heap.size() - 1]);
  heap.pop_back();
  bubbleDown(0);
  return min;
}

void MinHeap::bubbleDown(int index) {
  int leftChild{(2 * index) + 1};
  int rightChild{(2 * index) + 2};
  while (leftChild < static_cast<int>(heap.size())) {
    int smallest = index;
    if (heap[leftChild] < heap[smallest]) {
      smallest = leftChild;
    }
    if (rightChild < static_cast<int>(heap.size()) &&
        heap[rightChild] < heap[smallest]) {
      smallest = rightChild;
    }
    if (smallest == index) {
      break;
    }
    std::swap(heap[index], heap[smallest]);
    index = smallest;
    leftChild = (2 * index) + 1;
    rightChild = (2 * index) + 2;
  }
}

int main() {
  MinHeap h;

  std::cout << "Goodbye\n";
  return 0;
}
