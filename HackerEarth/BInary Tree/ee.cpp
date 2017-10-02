/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

struct node
{
	int item;
	struct node* l;
	struct node* r;
};

struct node* root;
struct node* temp;
struct node* found;

struct node* getNode(ll item){
	struct node* p = (node * )malloc(sizeof(node));
	p->item = item;
	p->l = NULL;
	p->r = NULL;
	return p;
}

struct node* search(struct node* temp,ll item){
	if(temp!=NULL){
		if (temp->item==item)
		{
			return temp;
		}
		else{
			found = search(temp->l,item);
			if(found!=NULL)
				return found;
			search(temp->right, item);
		}
	}
	return NULL;
}

void mirror(ll item,struct node* left, struct node* right){
	if (left==NULL || right==NULL)
	        return 0;
	 

    if (left->key == target)
        return right->key;
 
    if (right->key == target)
        return left->key;
 
    int mirror_val = mirror(target,left->left,right->right);
    if (mirror_val)
        return mirror_val;
 
    mirror(target, left->right, right->left);
}

struct node* temp;

int main()
{
	boost;
	ll n,q;
	cin>>n>>q;
	ll a,b;
	char c;
	root = getNode(1);
	while(--n){
		cin>>a>>b>>c;
		temp = search(root, a);
		if (c=='L')
		{
			tem->l = getNode(b);
		}
		else tem->r = getNode(b);
	}
	while(q--){
		cin>>a;
		if (a==1)
		{
			cout<<"1\n";
		}
		else {
			int ans = mirror(a,root->l,root->r);
			if(ans){
				cout<<ans<<"\n";
			}
			else{
				cout<<"-1\n";
			}
		}
	}
	return 0;
}	