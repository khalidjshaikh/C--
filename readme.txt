g++ heap.cpp; ./a.out 
Initial Heap: 40 30 20 10 
Heap just after push_back(): 40 30 20 10 50 
Heap after push_heap(): 50 40 20 10 30 

g++ heap2.cpp; ./a.out 
Heap after make_heap: 9 6 4 1 5 3 2 1 

g++ queue.cpp; ./a.out
Front element: 15
Back element: 45
Queue size: 4
Popping element: 15
Popping element: 25
Popping element: 35
Popping element: 45
Queue is empty

g++ vector.cpp; ./a.out 
Elements of the vector:
numbers[0] = 1
numbers[1] = 2
numbers[2] = 6

Modified element at index 2:
numbers[2] = 10

Elements of the vector:
numbers[0] = 1
numbers[1] = 2
numbers[2] = 10

Size of the vector: 3
Is the vector empty? No

Elements of the vector after pop_back():
numbers[0] = 1
numbers[1] = 2

---

g++ convolution-1d.c++; ./a.out
Signal: 1 2 3 4 
Kernel: 0.5 1 
Convolution Result: 0.5 2 3.5 5 4 

---

g++ convolution-2d.c++; ./a.out

Input Matrix:
1	2	3	4	
5	6	7	8	
9	10	11	12	
13	14	15	16	

Kernel Matrix:
-1	-1	-1	
-1	8	-1	
-1	-1	-1	

Output Matrix (Convolved):
0	0	
0	0	