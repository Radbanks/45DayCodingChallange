#include <bits/stdc++.h> 
/********************************************************* 

	Binary tree temp class for reference:
	
	class TreeNode {
		int val;
		TreeNode left;
		TreeNode right;

		TreeNode(int val) {
			this.val = val;
			this.left = null;
			this.right = null;
		}
	}

********************************************************/

int maxLevelSum(TreeNode<int>* root){
	// Write your code here.
	int maxLevelSum=INT_MIN;
	int sum= 0;
	if (root == NULL )
	{
		return -1;
	}
	queue<TreeNode<int>*> q;
	q.push(root);
	q.push(NULL);
	while(q.empty() == false ) 
	{
		TreeNode<int>* temp= q.front();
		q.pop();

		if( temp == NULL )
		{
			if(sum > maxLevelSum )
			{
				maxLevelSum = sum;
			}
			if(q.empty() == true)
				break;
			sum=0;
			q.push(NULL);
			continue;
		}

		else{
			sum+= temp -> val;
			if( temp -> left != NULL){
				q.push(temp -> left );
			}
			if(temp -> right != NULL ){
				q.push(temp -> right );
			}
		}

	}
	return maxLevelSum;

}
