#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // cout<<root->data<<endl;
        int ans = 0;
        map<int, int> lvl;
        queue<Node> q;
        int v = root->data;
        lvl[v] = 0;
        q.push(*root);
        while(!q.empty())
        {
            Node u = q.front();
            q.pop();
            Node* lft = u.left;
            Node* rght = u.right;
            
            if(lft != NULL)
            {
                lvl[lft->data] = lvl[u.data]+1;
                ans = lvl[lft->data];
                q.push(*lft);
            }
            if(rght != NULL)
            {
                lvl[rght->data] = lvl[u.data]+1;
                ans = lvl[rght->data];
                q.push(*rght);
            }         
        }
        return ans;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}
