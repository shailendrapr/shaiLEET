/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> a;
        if(!root) 
            return a;
        fnc(root,a);
        return a;
    }     
        
    void fnc(Node *x,vector<int> &a)
    {
         a.push_back(x->val);
        for(int i=0;i<x->children.size();i++)
        {
            fnc(x->children[i],a);
        }
    }

          
        
};
