#include <bits/stdc++.h>
#define ll long long int
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,a,b) for(ll i=a;i<b;i++)
using namespace std;

struct node{
    int item;
    struct node* left;
    struct node* right;
};

struct node* newNode(ll item){
    struct node* node1 = (struct node*)malloc(sizeof(struct node));
    node1->item = item;
    node1->left = NULL;
    node1->right = NULL;
    return node1;
}

/*ll Height(struct node* root){
    return (root==NULL)?0:(1+max(Height(root->left),Height(root->right)));
}

ll Diameter(struct node* root){
    if(root==NULL)return 0;
    else
        return 1+Height(root->left)+Height(root->right);
}*/

int main()
{
    boost;
 	ll max = INT_MIN;
    node *root = NULL,*ptr;
    int x,n,i;
    root = newNode(x);
    char str[12345];
    while(--n){
        scanf(" %s",str);
        i = 0;
        ptr = root;
        while(str[i] && ptr ){
            if(str[i] == 'L'){
                if(ptr->left == NULL)
                    ptr->left = newNode(0);
                ptr = ptr->left;

            }
            else{
                if(ptr->right == NULL)
                    ptr->right = newNode(0);
                ptr = ptr->right;

            }
            i++;
        }
        scanf("%i", &x);
        ptr->item = x;
    }
    return 0;
}

