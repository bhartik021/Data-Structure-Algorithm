#include <iostream>
#include <queue>

int buyTicket(int *arr, int n, int k) {
    std::queue<std::pair<int, int>> ticketQueue; // Pair (priority, index)
    std::priority_queue<int> maxPriorityQueue; // Max-heap to keep track of max priority

    // Initialize the queues
    for (int i = 0; i < n; i++) {
        ticketQueue.push(std::make_pair(arr[i], i));
        maxPriorityQueue.push(arr[i]);
    }

    int time = 0;

    while (!ticketQueue.empty()) {
        int currentPriority = ticketQueue.front().first;
        int currentIndex = ticketQueue.front().second;
        ticketQueue.pop();

        if (currentPriority == maxPriorityQueue.top()) {
            // If the current person has the highest priority, give them the ticket
            time++;

            if (currentIndex == k) {
                return time;
            }

            maxPriorityQueue.pop();
        } else {
            // Otherwise, move the person to the end of the queue
            ticketQueue.push(std::make_pair(currentPriority, currentIndex));
        }
    }

    return time;
}
