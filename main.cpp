#include <iostream>
using namespace std;

int main(){
  int arr[3][3], sumL = 0, sumR = 0, n = 2;
  cout<<"Enter elements in the 3x3 array: \n";
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cin>>arr[i][j];
    }
  }

  cout<<"Entered array is:\n";
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
  }

  cout<<"**Array has two diagonals:\n";
  cout<<"->Left Diagonal: ";
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i == j){
      cout<<arr[i][j]<<"  ";
	  sumL = sumL + arr[i][j];
      }
    }
  }
  cout<<"\n->Right Diagonal: ";
  for(int i=0; i<3; i++){
    for(int j=2; j>=0; j--){
		if(n==j){
      		cout<<arr[i][j]<<"  ";
			sumR = sumR + arr[i][j];
			n--;
			break;
		}
    }
  }
  cout<<"\n\n->Sum of Left Diagonal: ";
  cout<<sumL;
  cout<<"\n->Sum of Right Diagonal: ";
  cout<<sumR;
  
  return 0;
}
