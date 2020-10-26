//object oriented 

//polymrphism
//inheritance
//encapsulation
//object
//class
//abstraction


 #include<iostream>
 
 using namespace std;
 
 class Laptop
 {
 	public :
	         string brand;
	  		 string color;
			 int id; 
			 Laptop() // Default constructor
			 {
			 	brand="Dell";
			 	color="Red";
			 	id=002;
			 
			 }
			 
			 Laptop(string bname, string cname, int num)//parameterized constructor
			 {
			 	brand = bname;
			 	color = cname;
			 	id= num;
			 			
			 }
			 Laptop(Laptop &L4) //copy constructor
			 {
			 	brand=L4.brand;
			 	color=L4.color;
			 	id=L4.id;
			 	
			 }
						  		 
 		
 };
 
 
 int main()
 {
 	 Laptop L1;
 	 L1.brand="Lenovo";
 	 L1.color="Grey";
 	 L1.id=001;
     cout<<L1.brand<<endl;
 	 cout<<L1.color<<endl;
 	 cout<<L1.id<<endl<<endl;
 	 
 	 Laptop L2;
 	 cout<<L2.brand<<endl;
 	 cout<<L2.color<<endl;
 	 cout<<L2.id<<endl<<endl;
 	 
 	 Laptop L3("Acer","Blue",003);
 	 cout<<L3.brand<<endl;
 	 cout<<L3.color<<endl;
 	 cout<<L3.id<<endl<<endl;
 	 
 	 Laptop L4=L3;
 	 cout<<L4.brand<<endl;
 	 cout<<L4.color<<endl;
 	 cout<<L4.id<<endl;
 	 
 	 
 	
 	
 	
 	
 	
 	return 0;
 }
