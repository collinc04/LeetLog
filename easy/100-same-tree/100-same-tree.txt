        } else {
            return false;
          (q->right == nullptr) ^ (p->right == nullptr)) {
        if(p->val != q->val ||
          (q->left == nullptr) ^ (p->left == nullptr) ||
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
            
        }
        return true;
        std::cout<<q->val<<endl;
        if(p==nullptr || q==nullptr) return false;
        std::cout<<p->val<<endl;
        if(p==nullptr && q==nullptr) return true;
    }
};