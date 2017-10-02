
struct node* getNode(int value){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

node * insert(node * root, int value) {
	if(root==NULL){
		return getNode(value);
	}
	else{
		if(value<=root->data){
			root->left = insert(root->left,value);
		}
		else{
			root->right = insert(root->right,value);
		}
   		return root;
   	}
}