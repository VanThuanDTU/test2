// 1. 2x^2 + 2x + 3>=0  voi moi x(--,++)
// 2. -1x^2 - 2x + 3>=0  Vô nghiem
// 3. 1x^2 + 2x + 1?=0 voi moi x (--,++)
// 4. -1x^2 - 2x -1 >=0 x=-1
// 5. 1x^2 - 3x + 2>=0 x<= 1 or 2<= X (--,1] or [2,++)
// 6. -1x^2 + 3x -2>=0 1=<X<=2 [1,2]
// ÐInh L? xét Dâu
// f(x) = ax^2 + bx + c
	// TH1 : f(x) cung dau hs a khi delta <=0
	//Th2 :  delta >0 va x1<x2
		//Trong 2 nghiem khac dau he so a
		// ngoai 2 nghiem cung dau hs a
#include<iostream>
#include<math.h>
using namespace std;
int main(){
		float a, b, c, d, x1, x2;
		cout<<" Giai ax^2 + bx + c>=0\n";
		cout<<" Nhap a:"; cin>>a;
		cout<<" Nhap b:"; cin>>b;
		cout<<" Nhap c:"; cin>>c;
		d = b*b - 4*a*c;
		if(d<0)
			if(a>0) cout<<"(--,++)";
			else cout<<"Vo No";
		if(d==0)
			if(a>0) cout<<"(--,++)";
			else cout<<" x= "<<-b/2/a;
		if(d>0){
			x1 = (-b -sqrt(d))/2/a;
			x2 = (-b +sqrt(d))/2/a;
			if(a>0) cout<<"(--,"<<x1<<"] or ["<<x2<<",++)";
			else cout<<"["<<x2<<","<<x1<<"]";
		}
			
	
}
