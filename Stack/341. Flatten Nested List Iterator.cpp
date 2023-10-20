/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
private:
    std::vector<int> flattened;
    int index;
    
    std::vector<int> flatten(const std::vector<NestedInteger>& nested) {
        std::vector<int> result;
        for (const auto& ni : nested) {
            if (ni.isInteger()) {
                result.push_back(ni.getInteger());
            } else {
                auto subList = flatten(ni.getList());
                result.insert(result.end(), subList.begin(), subList.end());
            }
        }
        return result;
    }

public:
    NestedIterator(vector<NestedInteger> &nestedList) {
       flattened = flatten(nestedList);
       index = 0; 
    }
    
    int next() {
        return flattened[index++];
    }
    
    bool hasNext() {
        return index < flattened.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
