#include<iostream>
#include<cmath>
using namespace std;

//defining class
class area{
    public:
    
    //defining the function to calculate the area of the circle
    double circle(int r){
        return M_PI*pow(r,2);
    }
    
    //defining the function to calculate the area of the square
    double square(int l){
        return l*l;
    }
    
    //defining the function to calculate the area of the triangle
    double triangle(int l, int h){
        return (l*h)/2;
    }
    
    
   
};



int main(){
    
    int choice;
    double radius,length,width,height;
    area myobj;
    
    //Do while loop to keep the Program running until the user exits the program.
    do{
    //The Header of the program
    cout<<"================================================"<<endl;
    cout<<"\t\tCalculate Area"<<endl;
    cout<<"================================================"<<endl;
    
    
    
    //Printing the Options for this Program
    cout<<"1. Circle"<<endl;
    cout<<"2. Square"<<endl;
    cout<<"3. Triangle"<<endl;
    cout<<"4. Exit"<<endl;
    
    //letting user input their choice.
    cout<<"\nEnter Your Choice: ";
    cin>>choice;
    
    
    
    //switch case to print out the choices.
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter Radius: ";
            cin>>radius;
            cout<<"Area of the circle is "<<myobj.circle(radius)<<endl;
        }break;
        
        case 2:
        {
            cout<<"Enter Length: ";
            cin>>length;
            cout<<"Area of the Square is "<<myobj.square(length)<<endl;
        }break;
        
        case 3:
        {
            cout<<"Enter Length: "<<endl;
            cin>>length;
            cout<<"Enter Height: "<<endl;
            cin>>height;
            cout<<"Area of the Triangle is "<<myobj.triangle(length,height)<<endl;
        }break;
        
        case 4:
        {
            break;
        }
        
        default:
        {
            cout<<"Choose from the choices Provided";
        }break;
        
    }
    cout<<"\n";
    }while(choice!=4);//condition to exit the do while loop
    
    return 0;
    
    
}