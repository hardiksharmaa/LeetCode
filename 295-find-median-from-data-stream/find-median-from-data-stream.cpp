class MedianFinder {
public:
    priority_queue<int> maxheap; // left half
    priority_queue<int, vector<int>, greater<int>> minheap; // right half

    MedianFinder() {}

    void addNum(int num) {
        if (maxheap.empty() || num <= maxheap.top()) {
            maxheap.push(num);
        } else {
            minheap.push(num);
        }

        // Balance sizes (difference at most 1)
        if (maxheap.size() > minheap.size() + 1) {
            minheap.push(maxheap.top());
            maxheap.pop();
        } else if (maxheap.size() < minheap.size()) {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }

    double findMedian() {
        if (maxheap.size() == minheap.size()) {
            return (maxheap.top() + minheap.top()) / 2.0;
        } else {
            return maxheap.top(); // maxheap always has one extra element if odd
        }
    }
};