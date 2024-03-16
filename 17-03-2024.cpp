class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
         int count = 0;

        // Store elements of list head2 in a set
        std::unordered_set<int> set;
        for (Node* curr = head2; curr != nullptr; curr = curr->next) {
            set.insert(curr->data);
        }

        // Traverse list head1
        for (Node* curr = head1; curr != nullptr; curr = curr->next) {
            // Calculate the difference required for the pair sum to be x
            int diff = x - curr->data;

            // If the difference exists in set, increment count
            if (set.find(diff) != set.end()) {
                count++;
            }
        }

        return count;
    }
};

