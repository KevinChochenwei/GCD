# include <iostream>
# include <iomanip>

using namespace std;
void comp(int* A,int* B);

	
int main(){
	int x,y,C;
	while(cin>>x>>y)
		{
			comp(&x,&y);
			for(int i=1;i<=y;i++)
				{
				
				if(x%i==0&&y%i==0)
					C=i;
				else
				    C=C;
				}
			cout<<C<<endl;
		}
	return 0;
	
}

void comp(int* A,int* B){
	int temp;
	if(*A<*B)
		{
			temp=*A;
			*A=*B;
			*B=temp;
			return;
		}
	else
		*A=*A;
		*B=*B;
		return;
}


