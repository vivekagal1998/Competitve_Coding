/******************************************
*    AUTHOR         :   VIVEK SHAH        *
*    INSTITUTION    :   NIT SURAT         *
******************************************/

#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define ll long long int
#define mod 1000000007
#define rep(i,a,b) for (ll i = a; i<b; ++i)

using namespace std;

struct node
{
	ll data;
	struct node* left;
	struct node* right;
};

struct node* getNode(ll item){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = item;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct node* search(struct node* root,int item){
	if (root==NULL)
	{
		return;
	}
	else if(root->data==item){
		return root;
	}
	root = search(root->left,item);
	
	return search(root->right,item);
	
	return root;
}

int main()
{
	boost;
	struct node* root = NULL;
	ll x,q,l,r;
	char c;
	cin>>x>>q;
	--x;
	root = getNode(1);
	for (ll i = 1; i <=x ; ++i){
		cin>>l>>r>>c;
		if (c=='L')
		{
		
		}
	}

	return 0;
}