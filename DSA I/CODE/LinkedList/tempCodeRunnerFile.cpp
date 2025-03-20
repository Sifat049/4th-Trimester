//void insert_tail(Node*&head, int v )
// {
//     Node* newNode= new Node(v);
//     if(head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node* temp =head;
//     while (temp->next!=NULL)
//     {
//         temp= temp->next;
//     }
//     temp->next=newNode;
    
// }

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid =  (right +left) / 2;  // Prevent overflow

        if (arr[mid] == target) {
            return mid;  // Target found
        } else if (arr[mid] < target) {
            left = mid + 1;  // Move to the right half
        } else {
            right = mid - 1;  // Move to the left half
        }
    }

    return -1;  // Target not found
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int target = 9;

    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
