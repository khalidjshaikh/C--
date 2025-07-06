#include <iostream>
#include <queue>

int main() {
    // Create a queue of integers
    std::queue<int> myQueue;

    // Push elements into the queue
    myQueue.push(15);
    myQueue.push(25);
    myQueue.push(35);
    myQueue.push(45);

    // Print the front element
    std::cout << "Front element: " << myQueue.front() << std::endl;

     // Print the back element
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Print the size of the queue
    std::cout << "Queue size: " << myQueue.size() << std::endl;

    // Pop elements from the queue
    while (!myQueue.empty()) {
        std::cout << "Popping element: " << myQueue.front() << std::endl;
        myQueue.pop();
    }

    // Check if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty" << std::endl;
    }

    return 0;
}
