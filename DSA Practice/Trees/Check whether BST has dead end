class Solution{
  public:
    bool check(Node* root, int min, int max){
        if(root == NULL) return false;
        if(min == max && root->data == min) return true;
        
        return check(root->left, min, root->data -1) || check(root->right, root->data +1, max);
    }
    bool isDeadEnd(Node *root)
    {
        return check(root, 1, 10001);
    }
};

