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

void preorder(struct node* root){
	if (root == NULL)
	{
		return;
	}
	printf("%d\n",root->data);
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	boost;
	//code
	return 0;
}