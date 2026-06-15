# min-heap
## my goal with this project
to understand the final "fundamental" data structures
to code one from scratch in c++
## what i learned
what is a min-heap (and max-heap for that matter)
- a min-heap stores values in a complete binary tree. every parent node is less than or equal to its children, which guarantees that the minimum value is always at the root.
- the cool thing about them is that in c++, rather than being a user defined class, they can be stored in a flat std::vector and parent and child nodes can be found mathematically!
limitations of min-heaps
- time complexity may be an issue: searching for a node is always O(n)
## challenges i ran into
figuring out the mathematics for a parent and child node myself was confusing.
figuring out the logic of popping an element. swapping with the last element in the list made not much sense to me at first, but after understanding the way that min-heaps manage data it made sense
## what i would do differently
i am not too sure. at the moment, i can't really see where i would use a min-heap in my own projects, so i think i need to do some more research into their practical applications. my first impression is that binary search trees seem more useful, but i suspect heaps solve a different set of problems that i haven't encountered yet.
