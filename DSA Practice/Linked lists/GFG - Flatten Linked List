class Solution {
  public:
    // Function which returns the  root of the flattened linked list.
    Node* merge(Node *root, Node *other) {
        if(root->data > other->data){
            swap(root, other);
        }
        Node *head = root;
        
        while(root != NULL && other != NULL){
            if(root->bottom == NULL) {
                root->bottom = other;
                break;
            }
            
            if(root->data<= other->data && root->bottom->data > other->data) {
                Node *newNode = new Node(other->data);
                newNode->bottom = root->bottom;
                root->bottom = newNode;
                other = other->bottom;
            }
            root = root->bottom;
        }
        head->next = NULL;
        return head;
    }
    Node *flatten(Node *root) {
        if(root->next == NULL) return root;
        
        Node *other = flatten(root->next);
        root = merge(root, other);
        return root;
    }
};
