#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
//C++ PATTERN-1	
//	1 2 3
//	1 2 3
//	1 2 3
		
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		cout<<j;
//		j++;
//		
//	}
//	cout<<endl;
//	i++;
//}		
	
		
//P-2	
//	3 2 1 
//	3 2 1 
//	3 2 1
	
//	int n;
//	cin>>n;
//	int i=1;
//	while(i<=n){
//		int j=1;
//		while(j<=n){
//			cout<<n-j+1;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
	
	
	
//P-3	
//	1 2 3
//	4 5 6
//	7 8 9	
	
//int n;
//cin>>n;
//
//int i=1, count =1;
//	while(i<n){		//row
//		int j=1;
//		while(j<=n){  //col
//			cout<<count<<" ";
//			count++;
//			j++;  		//newcol
//		}
//		cout<<endl;
//		i++;		//newrow
//	}
	

//P-4
//	1 
//	1 2 
//	1 2 3
//  1 2 3 4
		
//int n;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<col;
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	



//P-5
//1
//2 2
//3 3 3 
//4 4 4 4

//int n, count=1;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<row<<" ";
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	


//P-6
//1
//2 3
//4 5 6
//7 8 9 10

//int n, count=1;
//cin>>n;
//int row=1;  //row -> n-> 4
//while(row<=n){  // row == number enter 
//	int col=1;  // col
//	while(col<=row){  // count == row number 
//		cout<<count++<<" ";
//		col++;
//	}
//	cout<<endl;
//	row++;
//}	


//P-7
//1
//2 3
//3 4 5
//4 5 6 7
//with using val variable
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1, val=i;
//	while(j<=i){
//		cout<<val<<" ";
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//without using val
//int n;
//cin>>n;
//int i=0;
//while(i<n){
//	int j=0;
//	while(j<=i){
//		cout<<i+j+1<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//P-8
//1
//2 1
//3 2 1
//4 3 2 1

//using Val variable
//int n;
//cin>>n;
//int i=1; 
//while(i<=n){
//	int j=1,val=i;
//	while(j<=i){
//		cout<<val<<" ";
//		val--;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

////without using Val variable
//int n;
//cin>>n;
//int i=1; 
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		cout<<i-j+1<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}




//P-9
//4
//34
//234
//1234
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		cout<<n-i+j<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}




//P-10
//1
//1 2
//1 2 3
//1 2 3 4

//int n;
//cin>>n;
//int  i=1;
//while(i<=n){
//	int j=1, val=1;
//	while(j<=i){
//		cout<<val<<" ";
//		val++, j++;
//	}
//	cout<<endl;
//	i++;
//}


//P-11
//A A A
//B B B
//C C C	
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		char ch = 'A'+i-1;
//		cout<<ch<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//P-12
//A B C
//A B C
//A B C

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		char ch = 'A'+j-1;
//		cout<<ch<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//P-13
//A B C
//D E F
//G H I

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char ch = 'A';
//	while(j<=n){
//		cout<<ch<<" ";
//		ch++; 
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//P-14
//A B C
//B C D
//C D E
//without using start variable
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char ch = 'A'+i+j-2;
//	while(j<=n){
//		cout<<ch<<" ";
//		ch++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//with using start variable
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char ch = 'A'+i-1;
//	while(j<=n){
//		cout<<ch<<" ";
//		ch++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//P-15
//A 
//B B
//C C C

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char val = 'A'+i-1;
//	while(j<=i){
//		cout<<val<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//P-16
//A 
//B C
//D E F

//int n;
//cin>>n;
//int i=1;
//char val = 'A';
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		cout<<val<<" ";
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//P-17
//FOR  n=4
//A 
//B C
//C D E
//D E F G

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		char val = 'A'+i+j-2;
//		cout<<val<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}
//P-19
//E
//E F
//E F G
//E F G H

//int n;
//cin>>n;
//int i=1;
//
//while(i<=n){
//	int j=1;
//	char a = 'A'+n-1;
//	while(j<=i){
//		cout<<a<<" ";
//		a++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//P-20
//D
//C D
//B C D
//A B C D

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char a = 'A'+n-i;
//	while(j<=i){
//		cout<<a<<" ";
//		a++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//P-21
//    *
//   **
//  ***
// ****
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = n-i;
//	while(sp){	//for printing space
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	while(j<=i){	//for printing stars
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//P-22
//****
//***
//**
//*

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n-i+1){
//		cout<<"*";
//		++j;
//	}
//	cout<<endl;
//	i++;
//}



//P-23
//****
// ***
//  **
//   *
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = i-1;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	while(j<=n-i+1){
//		cout<<"*";
//		++j;
//	}
//	cout<<endl;
//	i++;
//}

//for n=4
//1 2 3 4
// 2 3 4
//  3 4
//   4
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = i-1;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	int val=i;
//	while(j<=n-i+1){
//		cout<<val<<" ";
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//P-24
//1234
// 123
//  12
//   1

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = i-1;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1,val = 1;
//	while(j<=n-i+1){
//		cout<<val;
//		val++;
//		++j;
//	}
//	cout<<endl;
//	i++;
//}


//P-24
//1 2 3 4 5 6 7 8 9
// 1 2 3 4 5 6 7 8
//  1 2 3 4 5 6 7
//   1 2 3 4 5 6
//    1 2 3 4 5
//     1 2 3 4
//      1 2 3
//       1 2
//        1

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int val = 1;
//	int sp = i-1;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	while(j<=n-i+1){
//		cout<<val<<" ";
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}
//P-25
//1 1 1 1 1 1 1 1 1
// 2 2 2 2 2 2 2 2
//  3 3 3 3 3 3 3
//   4 4 4 4 4 4
//    5 5 5 5 5
//     6 6 6 6
//      7 7 7
//       8 8
//        9

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = i-1;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	while(j<=n-i+1){
//		cout<<i<<" ";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



// Master Pattern
//    1
//   121
//  12321
// 1234321
//123454321

//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int sp = n-i;
//	while(sp){
//		cout<<" ";
//		sp--;
//	}
//	int j=1;
//	while(j<=i){
//		cout<<j;
//		j++;
//	}
//	int val = i-1;
//	while(val){
//	cout<<val;
//	val--;
//	}
//	cout<<endl;
//	i++;
//}



//Super Master Pattern
//1 2 3 4 5 5 4 3 2 1
//1 2 3 4 * * 4 3 2 1
//1 2 3 * * * * 3 2 1
//1 2 * * * * * * 2 1
//1 * * * * * * * * 1

//int n;
//cin>>n;
// int i = 1;
//
//    while (i <= n) {
//        int j = 1;
//        while (j <= n - i + 1) {
//            std::cout << j << " ";
//            ++j;
//        }
//
//        j = 1;
//        while (j <= 2 * i - 2) {
//            std::cout << "* ";
//            ++j;
//        }
//
//        j = n - i + 1;
//        while (j >= 1) {
//            std::cout << j << " ";
//            --j;
//        }
//
//        std::cout << "\n";
//        ++i;
//    }





//PATTERN-Challange
//?
//? ?
//? ? ?
//? ? ?
//int n;
//cin>>n;
//int i=1;
//while(i<=n){
//	int j=1;
//	char ch = i;
//	while(j<=i){
//		cout<<ch<<" ";
//		ch++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}
//==============================

int n;
cin>>n;
//1
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n-1){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//1.1
//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n-1; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//2
//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n; j++){
//		if(i==1 || i==n || j==1 || j==n){
//			cout<<"*";
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}

//3
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n-i+1){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//3.1
//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n-i+1; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}


//4.1
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=n){
//		if(j<=n-i){
//		cout<<" ";
//		}
//		else{
//			cout<<"*";
//		}
//		j++;
//	}
//	cout<<endl;
//	i++;
//}



//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n; j++){
//		if(j<=n-i){
//			cout<<" ";
//		}	
//		else{
//			cout<<"*";
//		}
//	}
//	cout<<endl;
//}

//5

//int i=1;
//while(i<=n){
//	int j=1, val=i;
//	while(j<=i){
//		cout<<val;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//for(int i=1; i<=n ; i++){
//	for(int j=1; j<=i; j++){
//		cout<<i;
//	}
//	cout<<endl;
//}


//6

//int val=1;
//for(int i=1; i<=n ; i++){
//	for(int j=1; j<=i; j++){
//		cout<<val;
//		val++;
//	}
//	cout<<endl;
//}

//7
//int i=1;
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		cout<<"*";
//		j++;
//	}
//	j=1;
//	int sp = 2*n-2*i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	j=1;
//	while(j<=i){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}
//int i=1;
//while(n>=1){
//	int j=1;
//	while(j<=i){
//		cout<<"*";
//		j++;
//	}
//	j=1;
//	int sp = 2*n-2*i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	j=1;
//	while(j<=i){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i--;
//}
//
//for(int i=1; i<=n; i++){
//	for(int j=1; j<=i; j++){
//		cout<<"*";
//	}
//	int sp = 2*n - 2*i;
//	for(int j=1; j<=sp; j++){
//		cout<<" ";
//	}
//	for(int j=1; j<=i; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}
//for(int i=n; i>=1; i--){
//	for(int j=1; j<=i; j++){
//		cout<<"*";
//	}
//	int sp = 2*n - 2*i;
//	for(int j=1; j<=sp; j++){
//		cout<<" ";
//	}
//	for(int j=1; j<=i; j++){
//		cout<<"*";
//	}
//	cout<<endl;
//}

//8
//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n-i+1; j++){
//		cout<<j;
//	}
//	cout<<endl;
//}
//int i=1; 
//while(i<=n){
//	int j=1;
//	while(j<=n-i+1){
//		cout<<j;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//9
//int i=1; 
//while(i<=n){
//	int j=1;
//	while(j<=i){
//		if((i+j)%2==0){
//		cout<<"1";
//		}
//		else{
//			cout<<"0";
//		}
//		j++;
//	}
//	cout<<endl;
//	i++;
//}


//10
//int i=1; 
//while(i<=n){
//	int j=1, sp=n-i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	j=1;
//	while(j<=n){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//11
//int i=1; 
//while(i<=n){
//	int j=1, sp=n-i, val=1;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	j=1;
//	while(j<=i){
//		cout<<val<;
//		val++;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//12
//int i=1; 
//while(i<=n){
//	int j=1, sp=n-i, val=i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	j=1;
//	while(j<=i){
//		cout<<val;
//		val--;
//		j++;
//	}
//	j=2;
//	while(j<=i){
//		cout<<j;
//		j++;
//	}
//	cout<<endl;
//	i++;
//}

//13
//int i=1; 
//while(i<=n){
//	int j=1, sp=n-i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	while(j<=2*i-1){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i++;
//}
//i=1;
//while(n>=i){
//	int j=1, sp=n-i;
//	while(j<=sp){
//		cout<<" ";
//		j++;
//	}
//	while(j<=2*i-1){
//		cout<<"*";
//		j++;
//	}
//	cout<<endl;
//	i--;
//}


//for(int i=1; i<=n; i++){
//	for(int j=1; j<=n-i;j++){
//		cout<<" ";
//	}
//	for(int k=1; k<=2*i-1; k++){
//		cout<<"*";
//	}
//	cout<<"\n";
//}
//for(int i=n; i>=1; i--){
//	for(int j=1; j<=n-i;j++){
//		cout<<" ";
//	}
//	for(int k=1; k<=2*i-1; k++){
//		cout<<"*";
//	}
//	cout<<"\n";
//}


int i=1;
while(i<=3){
	int j=1;
	while(j<=n){
		if((i+j)%4==0 || (i==2 && j%4==0)){
			cout<<"*";
		}
		else{
			cout<<" ";
		}
		j++;
	}
	cout<<endl;
	i++;
}

	return 0;
}
