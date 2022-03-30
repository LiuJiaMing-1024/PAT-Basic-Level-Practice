#include <stdio.h>
 
int flag[101] = {0};//0表示未被覆盖状态，1表示是已被覆盖 

void Callatz(int i){
	//当前输入数已被覆盖，直接退出 
	if(flag[i]!=0)	return;	
	//将中间产生的数进行覆盖 
	while(i!=1){
		
		i=(i%2==0)?i/2:(3*i+1)/2;
		//数超过范围了，直接跳过 
		if(i>100)	continue;
//当前数已被覆盖，直接退出，（不写也行，但写了效率高） 
		if(flag[i]!=0) return;
		//当前数未被覆盖，进行覆盖 
		flag[i]=1;
	}

} 
//冒泡排序 
void BubbleSort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				int temp=a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(){
	int n,i;
	scanf("%d",&n);
	int temp[n];

	//保留每一个数，并开始执行覆盖 
	for(int j=0;j<n;j++){
		scanf("%d",&temp[j]);
		Callatz(temp[j]);
	}
	//给数组排序按从大到小排序 
	BubbleSort(temp,n);
	
	int cnt=0;
	//遍历下数组，看共有多少个数未被覆盖
	//统计这个的目的是为了末端不产生空格 
	for(int j=0;j<n;j++)
		if(flag[temp[j]]==0)
			cnt++;
	// 开始从大到小输出未被覆盖的数 
	for(int j=0;j<n;j++){ 
		if(flag[temp[j]]==0){
			printf("%d",temp[j]);
			cnt--;
		}
		if(flag[temp[j]]==0&&cnt!=0)	printf(" "); 
	}		
}
