//UNIVERSITY MARK DETAILS
#include<iostream>
using namespace std;

class student 
{
	int regno,ap1cs01,ap1cs02,ap1cs03,ap1cs04,ap1ge51,ap1ma51,ap2cs01,ap2cs02,ap2cs03,ap2cs04,ap2ge51,ap2ma51,ap3cs01,ap3cs02,ap3cs03,ap3cs04,ap3ge51,ap3ma51,ap4cs01,ap4cs02,ap4cs03,ap4cs04,ap4ge51,ap4ma51,am2cs01,am2cs02,am2cs03,am2cs04,am2ge51,am2ma51,am3cs01,am3cs02,am3cs03,am3cs04,am3ge51,am3ma51,am4cs01,am4cs02,am4cs03,am4cs04,am4ge51,am4ma51,scs01,scs02,scs03,scs04,sge51,sma51,i1,i2,i3,i4,i5,i6,r1,r2,r3,r4,r5,r6;
	double s1,s2,s3,s4,s5,s6;
	char name[25];
	
	public:
	void getdata();
	void process();
	void display();
};	
	void student::getdata()
	{
		cout<<"\n Enter the student roll no\n";
		cin>>regno;
		cout<<"\n Enter the student name\n";
		cin>>name;
		cout<<"\n\n \t\t\t REPORT PERIOD I";
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6301 OUT OF 23\n";
                cin>>ap1cs01;
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6302 OUT OF 16\n";
		cin>>ap1cs02;
		cout<<"\n TOTAL PERIODS ATTENDED FOR CS6303 OUT OF 22\n";
		cin>>ap1cs03;		
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6304 OUT OF 20\n";
		cin>>ap1cs04;	
	        cout<<"\n TOTAL PERIODS ATTENDED FOR GE6351 OUT OF 16\n";
		cin>>ap1ge51;
		cout<<"\n TOTAL PERIODS ATTENDED FOR MA6351 OUT OF 21\n";
		cin>>ap1ma51;
		//II
		cout<<"\n\n \t\t\t REPORT PERIOD II";
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6301 OUT OF 23\n";
                cin>>ap2cs01;
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6302 OUT OF 16\n";
		cin>>ap2cs02;
		cout<<"\n TOTAL PERIODS ATTENDED FOR CS6303 OUT OF 22\n";
		cin>>ap2cs03;		
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6304 OUT OF 20\n";
		cin>>ap2cs04;	
	        cout<<"\n TOTAL PERIODS ATTENDED FOR GE6351 OUT OF 16\n";
		cin>>ap2ge51;
		cout<<"\n TOTAL PERIODS ATTENDED FOR MA6351 OUT OF 21\n";
		cin>>ap2ma51;
		//MARKSII
		cout<<"\n TOTAL MARKS GOT FOR CS6301 OUT OF 100\n";
                cin>>am2cs01;
                cout<<"\n TOTAL MARKS GOT FOR CS6302 OUT OF 100\n";
                cin>>am2cs02;
		cout<<"\n TOTAL MARKS GOT FOR CS6303 OUT OF 100\n";
                cin>>am2cs03;		
                cout<<"\n TOTAL MARKS GOT FOR CS6304 OUT OF 100\n";
                cin>>am2cs04
                ;	
	        cout<<"\n TOTAL MARKS GOT FOR GE6351 OUT OF 100\n";
                cin>>am2ge51;
		cout<<"\n TOTAL MARKS GOT FOR MA6351 OUT OF 100\n";
                cin>>am2ma51;
                //III
                cout<<"\n\n \t\t\t REPORT PERIOD III";
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6301 OUT OF 23\n";
                cin>>ap3cs01;
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6302 OUT OF 16\n";
		cin>>ap3cs02;
		cout<<"\n TOTAL PERIODS ATTENDED FOR CS6303 OUT OF 22\n";
		cin>>ap3cs03;		
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6304 OUT OF 20\n";
		cin>>ap3cs04;	
	        cout<<"\n TOTAL PERIODS ATTENDED FOR GE6351 OUT OF 16\n";
		cin>>ap3ge51;
		cout<<"\n TOTAL PERIODS ATTENDED FOR MA6351 OUT OF 21\n";
		cin>>ap3ma51;
		//MARKSIII
		cout<<"\n TOTAL MARKS GOT FOR CS6301 OUT OF 100\n";
                cin>>am3cs01;
                cout<<"\n TOTAL MARKS GOT FOR CS6302 OUT OF 100\n";
                cin>>am3cs02;
		cout<<"\n TOTAL MARKS GOT FOR CS6303 OUT OF 100\n";
                cin>>am3cs03;		
                cout<<"\n TOTAL MARKS GOT FOR CS6304 OUT OF 100\n";
                cin>>am3cs04;	
	        cout<<"\n TOTAL MARKS GOT FOR GE6351 OUT OF 100\n";
                cin>>am3ge51;
		cout<<"\n TOTAL MARKS GOT FOR MA6351 OUT OF 100\n";
                cin>>am3ma51;
                //IV
                cout<<"\n\n \t\t\t REPORT PERIOD IV";
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6301 OUT OF 23\n";
                cin>>ap4cs01;
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6302 OUT OF 16\n";
		cin>>ap4cs02;
		cout<<"\n TOTAL PERIODS ATTENDED FOR CS6303 OUT OF 22\n";
		cin>>ap4cs03;		
                cout<<"\n TOTAL PERIODS ATTENDED FOR CS6304 OUT OF 20\n";
		cin>>ap4cs04;	
	        cout<<"\n TOTAL PERIODS ATTENDED FOR GE6351 OUT OF 16\n";
		cin>>ap4ge51;
		cout<<"\n TOTAL PERIODS ATTENDED FOR MA6351 OUT OF 21\n";
		cin>>ap4ma51;
		//MARKSIV
		cout<<"\n TOTAL MARKS GOT FOR CS6301 OUT OF 100\n";
                cin>>am4cs01;
                cout<<"\n TOTAL MARKS GOT FOR CS6302 OUT OF 100\n";
                cin>>am4cs02;
		cout<<"\n TOTAL MARKS GOT FOR CS6303 OUT OF 100\n";
                cin>>am4cs03;		
                cout<<"\n TOTAL MARKS GOT FOR CS6304 OUT OF 100\n";
                cin>>am4cs04;	
	        cout<<"\n TOTAL MARKS GOT FOR GE6351 OUT OF 100\n";
                cin>>am4ge51;
		cout<<"\n TOTAL MARKS GOT FOR MA6351 OUT OF 100\n";
                cin>>am4ma51;
                //MARKSSEM
                cout<<"\n SEMESTER MARKS OBTAINED\n";
                cout<<"\n TOTAL MARKS GOT FOR CS6301 OUT OF 100\n";
                cin>>scs01;
                cout<<"\n TOTAL MARKS GOT FOR CS6302 OUT OF 100\n";
                cin>>scs02;
		cout<<"\n TOTAL MARKS GOT FOR CS6303 OUT OF 100\n";
                cin>>scs03;		
                cout<<"\n TOTAL MARKS GOT FOR CS6304 OUT OF 100\n";
                cin>>scs04;	
	        cout<<"\n TOTAL MARKS GOT FOR GE6351 OUT OF 100\n";
                cin>>sge51;
		cout<<"\n TOTAL MARKS GOT FOR MA6351 OUT OF 100\n";
                cin>>sma51;
                
                
	}
	
	void student::process()
	
	{
	 //INTERNAL CALCULATION
	 i1=am2cs01+am3cs01+am4cs01;
	 i2=am2cs02+am3cs02+am4cs02;
	 i3=am2cs03+am3cs03+am4cs03;
	 i4=am2cs04+am3cs04+am4cs04;
	 i5=am2ge51+am3ge51+am4ge51;
	 i6=am2ma51+am3ma51+am4ma51;
	 i1=i1/3;
	 i2=i2/3;
	 i3=i3/3;
	 i4=i4/3;
	 i5=i5/3;
	 i6=i6/3;
	 i1=i1/5;
	 i2=i2/5;
	 i3=i3/5;
	 i4=i4/5;
	 i5=i5/5;
	 i6=i6/5;
	 
	 
	 //SEM CALCULATION
	 
	 s1=scs01/1.25;
	 s2=scs02/1.25;
	 s3=scs03/1.25;
	 s4=scs04/1.25;
	 s5=sge51/1.25;
	 s6=sma51/1.25;
	 
	 //FINAL CALC
	 
	 r1=i1+s1;
	 r2=i2+s2;
	 r3=i3+s3;
	 r4=i4+s4;
	 r5=i5+s5;
	 r6=i6+s6;
	 
	 }
	 
	 void student::display()
	 {
	  cout<<"\t WELCOME TO UNIVERSITY RESULTS\t"<<name<<"("<<regno<<") \n";
	  cout<<"\t\t\t HERE ARE YOUR RESULTS !! \n";
	  //RPI
	  cout<<"\t\t\t REPORT PERIOD I\n\n";
	  cout<<"SUB CODE \t TOTAL PERIODS \t ATTENDED PERIODS\n";
	  cout<<"CS6301\t\t 23 \t\t"<<ap1cs01;
	  cout<<"\nCS6302\t\t 16 \t\t"<<ap1cs02;
	  cout<<"\nCS6303\t\t 22 \t\t"<<ap1cs03;
	  cout<<"\nCS6304\t\t 20 \t\t"<<ap1cs04;
	  cout<<"\nGE6351\t\t 16 \t\t"<<ap1ge51;
	  cout<<"\nMA6351\t\t 21 \t\t"<<ap1ma51;
	  
	  //RPII
	   cout<<"\n\n\t\t\t REPORT PERIOD II\n\n";
	  cout<<"SUB CODE \t TOTAL PERIODS \t ATTENDED PERIODS\t MARKS\n";
	  cout<<"CS6301\t\t 23 \t\t"<<ap2cs01<<"\t\t\t"<<am2cs01;
	  cout<<"\nCS6302\t\t 16 \t\t"<<ap2cs02<<"\t\t\t"<<am2cs02;
	  cout<<"\nCS6303\t\t 22 \t\t"<<ap2cs03<<"\t\t\t"<<am2cs03;
	  cout<<"\nCS6304\t\t 20 \t\t"<<ap2cs04<<"\t\t\t"<<am2cs04;
	  cout<<"\nGE6351\t\t 16 \t\t"<<ap2ge51<<"\t\t\t"<<am2ge51;
	  cout<<"\nMA6351\t\t 21 \t\t"<<ap2ma51<<"\t\t\t"<<am2ma51;
	  //RPIII
	   cout<<"\n\n\t\t\t REPORT PERIOD III\n\n";
	  cout<<"SUB CODE \t TOTAL PERIODS \t ATTENDED PERIODS\t MARKS\n";
	  cout<<"CS6301\t\t 23 \t\t"<<ap3cs01<<"\t\t\t"<<am2cs01;
	  cout<<"\nCS6302\t\t 16 \t\t"<<ap3cs02<<"\t\t\t"<<am3cs02;
	  cout<<"\nCS6303\t\t 22 \t\t"<<ap3cs03<<"\t\t\t"<<am3cs03;
	  cout<<"\nCS6304\t\t 20 \t\t"<<ap3cs04<<"\t\t\t"<<am3cs04;
	  cout<<"\nGE6351\t\t 16 \t\t"<<ap3ge51<<"\t\t\t"<<am3ge51;
	  cout<<"\nMA6351\t\t 21 \t\t"<<ap3ma51<<"\t\t\t"<<am3ma51;
	  //RPIV
	   cout<<"\n\n\t\t\t REPORT PERIOD IV\n\n";
	  cout<<"SUB CODE \t TOTAL PERIODS \t ATTENDED PERIODS\t MARKS\n";
	  cout<<"CS6301\t\t 23 \t\t"<<ap4cs01<<"\t\t\t"<<am2cs01;
	  cout<<"\nCS6302\t\t 16 \t\t"<<ap4cs02<<"\t\t\t"<<am4cs02;
	  cout<<"\nCS6303\t\t 22 \t\t"<<ap4cs03<<"\t\t\t"<<am4cs03;
	  cout<<"\nCS6304\t\t 20 \t\t"<<ap4cs04<<"\t\t\t"<<am4cs04;
	  cout<<"\nGE6351\t\t 16 \t\t"<<ap4ge51<<"\t\t\t"<<am4ge51;
	  cout<<"\nMA6351\t\t 21 \t\t"<<ap4ma51<<"\t\t\t"<<am4ma51;
	  //INTERNALS
          cout<<"\n\n\t\t\t INTERNAL MARKS\n\n";
          cout<<"SUB CODE \t\t MARKS\n";
          cout<<"\nCS6301\t\t\t"<<i1;
          cout<<"\nCS6302\t\t\t"<<i2;
          cout<<"\nCS6303\t\t\t"<<i3;
          cout<<"\nCS6304\t\t\t"<<i4;
          cout<<"\nGE6351\t\t\t"<<i5;
          cout<<"\nMA6351\t\t\t"<<i6;
          //SEMESTER MARKS
          cout<<"\n\n\t\t\t SEMESTER MARKS\n\n";
          cout<<"SUB CODE \t\t MARKS\n";
          cout<<"\nCS6301\t\t\t"<<s1;
          cout<<"\nCS6302\t\t\t"<<s2;
          cout<<"\nCS6303\t\t\t"<<s3;
          cout<<"\nCS6304\t\t\t"<<s4;
          cout<<"\nGE6351\t\t\t"<<s5;
          cout<<"\nMA6351\t\t\t"<<s6;
          //SEMESTER RESULTS
          cout<<"\n\n\t\t\t SEMESTER RESULTS\n\n";
          cout<<"SUB CODE \t\t RESULT\n";
          cout<<"\nCS6301\t\t\t";
        if(r1>91)
	{
		cout<<"S";
	}
	else if(r1>81 && r1<=90)
	{
		cout<<"A";
	}
	else if(r1>71 && r1<=80)
	{
		cout<<"B";
	}
	else if(r1>61 && r1<=70)
	{
		cout<<"C";
	}
	else if(r1>57 && r1<=60)
	{
		cout<<"D";
	}
	else if(r1>50 && r1<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          cout<<"\nCS6302\t\t\t";
         if(r2>91)
	{
		cout<<"S";
	}
	else if(r2>81 && r2<=90)
	{
		cout<<"A";
	}
	else if(r2>71 && r2<=80)
	{
		cout<<"B";
	}
	else if(r2>61 && r2<=70)
	{
		cout<<"C";
	}
	else if(r2>57 && r2<=60)
	{
		cout<<"D";
	}
	else if(r2>50 && r2<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          cout<<"\nCS6303\t\t\t";
         if(r3>91)
	{
		cout<<"S";
	}
	else if(r3>81 && r3<=90)
	{
		cout<<"A";
	}
	else if(r3>71 && r3<=80)
	{
		cout<<"B";
	}
	else if(r3>61 && r3<=70)
	{
		cout<<"C";
	}
	else if(r3>57 && r3<=60)
	{
		cout<<"D";
	}
	else if(r3>50 && r3<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          cout<<"\nCS6304\t\t\t";
          if(r4>91)
	{
		cout<<"S";
	}
	else if(r4>81 && r4<=90)
	{
		cout<<"A";
	}
	else if(r4>71 && r4<=80)
	{
		cout<<"B";
	}
	else if(r4>61 && r4<=70)
	{
		cout<<"C";
	}
	else if(r4>57 && r4<=60)
	{
		cout<<"D";
	}
	else if(r4>50 && r4<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          cout<<"\nGE6351\t\t\t";
          if(r5>91)
	{
		cout<<"S";
	}
	else if(r5>81 && r5<=90)
	{
		cout<<"A";
	}
	else if(r5>71 && r5<=80)
	{
		cout<<"B";
	}
	else if(r5>61 && r5<=70)
	{
		cout<<"C";
	}
	else if(r5>57 && r5<=60)
	{
		cout<<"D";
	}
	else if(r5>50 && r5<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          cout<<"\nMA6351\t\t\t";
         if(r6>91)
	{
		cout<<"S";
	}
	else if(r6>81 && r6<=90)
	{
		cout<<"A";
	}
	else if(r6>71 && r6<=80)
	{
		cout<<"B";
	}
	else if(r6>61 && r6<=70)
	{
		cout<<"C";
	}
	else if(r6>57 && r6<=60)
	{
		cout<<"D";
	}
	else if(r6>50 && r6<=56)
	{
		cout<<"E";
	}
	else
	{
		cout<<"U";
	}
          
          
          
          
          
          
       }
       
	 
        
        
int main()
{
 student s;
 s.getdata();
 s.process();
 s.display(); 
 cout<<"\n\nPROGRAM BY JAYAPRAVEEN\n\n";
}
