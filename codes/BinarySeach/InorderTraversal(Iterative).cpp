/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<int> solve(Tree* root) {
    
    vector<int> ans;
    Tree* aux = root;
    stack<Tree*> s;
    s.push(root);
    while (!s.empty()){
        cout << s.top()->val << "\n";
        if (s.top()->left != nullptr){
            s.push(s.top()->left);
            s.top()->left = nullptr;
        }else{
            ans.push_back(s.top()->val);
            aux = s.top();
            s.pop();
            if (aux->right != nullptr){
                s.push(aux->right);
            }
        }
    }
    return ans;
}
