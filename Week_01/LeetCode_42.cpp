class Solution {
public:
	int trap(vector<int>& height) {
		int a=0;
		int b=A.length-1;
		int max=0;
		int leftmax=0;
		int rightmax=0;
		while(a<=b){
			leftmax=Math.max(leftmax,A[a]); 
			rightmax=Math.max(rightmax,A[b]);
			if(leftmax<rightmax){
				max+=(leftmax-A[a]);
				a++;
			} else {
				max+=(rightmax-A[b]);
				b--;
			}
		}
		return max;
	}
};