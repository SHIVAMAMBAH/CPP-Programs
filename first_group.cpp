#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int number;
	vector<int> Myvector;
	
	cout<<"Enter the number"<<endl;
	cin>>number;
	
	Myvector.push_back(number);
	
	cout<<"\n"<<endl;
	for(int i = 1;i>=1;i++){
		if(number == 1){
			break;
		}
		else{
			if(number%2==0){
			number = number/2;
			Myvector.push_back(number);
			cout<<number<<endl;
		}
		else if(number%2!=0){
			number = (number*3+1)/2;
			Myvector.push_back(number);
			cout<<number<<endl;
		}
		}
	}
	
	cout<<"The numbers obtained by applying collartz conjecture to the number "<<Myvector[0]<<" are : "<<endl;
	
	for(int j = 0; j<Myvector.size();j++){
		cout<<Myvector[j]<<" ";
	}
	return 0;
}
