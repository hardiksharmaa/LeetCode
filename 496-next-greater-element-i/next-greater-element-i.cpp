class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.empty() || nums2.empty()) {
            return {};
        }

        // Map to store the next greater element for each element in nums2
        unordered_map<int, int> numberNGE;
        stack<int> numStack;

        // Process the last element of nums2
        numStack.push(nums2.back());
        numberNGE[nums2.back()] = -1; // The last element has no next greater element

        // Process nums2 from right to left
        for (int i = nums2.size() - 2; i >= 0; --i) {
            // While stack is not empty and the top of the stack is less than the current element
            while (!numStack.empty() && numStack.top() <= nums2[i]) {
                numStack.pop(); // Remove elements that are not greater
            }

            // If the stack is empty, there is no greater element to the right
            if (numStack.empty()) {
                numberNGE[nums2[i]] = -1;
            } else {
                // The next greater element is the top of the stack
                numberNGE[nums2[i]] = numStack.top();
            }

            // Push the current element onto the stack
            numStack.push(nums2[i]);
        }

        // Now, update nums1 based on the map of next greater elements
        for (int i = 0; i < nums1.size(); ++i) {
            nums1[i] = numberNGE[nums1[i]];
        }

        return nums1;
    }
};