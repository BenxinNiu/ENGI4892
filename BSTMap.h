//
//  BSTMap.h
//  
//
//  Created by Xialinqiao on 2017-07-01.
//
//

#ifndef BSTMap_h
#define BSTMap_h
#include<iostream>
using namespace std;

template<class K, class V>
class BSTMap{
    //Private members
private:
    struct treeNode{
        K nodeKey;//A variable holds key value
        V keyVal;//A variable holds value
        treeNode* left;//A pionter points to left child
        treeNode* right;//A piointer points right child
        //Node constructor
        treeNode(K k, V v, treeNode* l=0, treeNode* r=0):nodeKey(k),keyVal(v),left(l),right(r){}
    };
    treeNode* root;
public:
    //constructor
    BSTMap();
    //destructor
    ~BSTMap();
    // pre-condition:   a valid key/value pair
    // post-condition:  pair will be added to the BST, if not already present
    //                  Return true if insert succeeded, else false
    bool insert(const K& key, const V& value);
    
    // pre-condition:   a valid key
    // post-condition:  if key was present, key/value pair is removed
    //                  Return true if remove succeeded, else false
    bool remove(const K& key);
    
    // pre-condition:   a valid key
    // post-condition:  return the corresponding value for key, else nullptr
    //                  the BST is not changed
    const V* search(const K& key) const;
    
    // pre-condition:   a valid BST
    // post-condition:  return whether or not BST contains any items
    //                  the BST is not changed
    bool isEmpty() const;
    
    // pre-condition:   a valid BST
    // post-condition:  prints contents of BST in sorted order
    //                  the BST is not changed
    void print() const;
    void inorder(treeNode* p) const;
    void deleteByMerging(treeNode*& node);
};

#endif /* BSTMap_h */
