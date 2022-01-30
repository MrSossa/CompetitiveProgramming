struct TrieNode{
    TrieNode* children[26];
 
    TrieNode(){
        for(int i=0;i<26;++i)
            children[i]=NULL;
    }
    void insert(string key){
        struct TrieNode* current = this;
        for(int i=0;i<key.length();++i){
            int index= key[i]-'a';
            if(!current->children[index]){
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
    }
    int search(string key){
        struct TrieNode* current = this;
        for(int i=0;i<key.length();++i){
            int index= key[i]-'a';
            if(!current->children[index])
                return 0;
            current = current->children[index];
        }
        return 1;
    }
};