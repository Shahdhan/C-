#include<iostream>
using namespace std;

//Functons Declaration
double sum(double arr[],int size);          //Addition function
double subtract(double arr[], int size);    //subtraction function
double multiply(double arr[],int size);     //Multiplication function
double divide(double arr[],int size);       //division function






int main(){
    
    int choice, size=0;
    //double numbers[size];
    double* numbers = nullptr;
    
    
    //Do While Loop to keep the operation in loop if the condition is met
    do
    {
    
    //Calculator Main Screen output
    cout<<"==========================================="<<endl;
    cout<<"\t\tCalculator"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Exit"<<endl;
    
    
    //Letting user input their choice for the type of calculation
    cout<<"\nEnter your Choice: ";
    cin>>choice;
    
    
    
    //if the choice is withing the choices provided, User is asked to input the size of the array and also the numbers
        if(choice>=1 && choice<5)
        {
         cout<<"\nEnter how Many numbers You wish to calculate: ";
            cin>>size;
            
            numbers = new double[size]; //declaring the number as an array
            
            //inputing numbers into the array
            cout<<"\nEnter "<<size<<" numbers: "<<endl;
            for(int i=0;i<size;i++)
                {
                    cin>>numbers[i];
                }
        }
    
    
    
    switch(choice){
        
        case 1:
        {
                cout<<"Answer = "<<sum(numbers,size)<<endl; //printing addition function
        }break;
        
        case 2:
        {
            cout<<"Answer = "<<subtract(numbers,size)<<endl; //printing subtraction function
        }break;
        
        case 3:
        {
            cout<<"Answer = "<<multiply(numbers,size)<<endl; //printing Multiplication function
        }break;
        
        case 4:
        {
            cout<<"Answer = "<<divide(numbers,size)<<endl;  //printing division function
        }break;
        
        case 5:
        {
            break; //breaking the loop and to exit the operation
        }break;
        
        default:
        {
            cout<<"Choose A Choice given!!!"<<endl;
        }break;
    
        }
        delete[] numbers;  // Free memory from the previous calculation
        numbers = nullptr;
        
    }while(choice!=5);  //condition to run the loop
    
    
    return 0;
}



//Add function
double sum(double arr[],int size)
{
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum += arr[i];
    }
    return sum;
}


//subtract function
double subtract(double arr[], int size)
{
    double diff=arr[0];
    for(int i=1;i<size;i++)
    {
        diff -= arr[i];
    }
    return diff;
}


//multiply function
double multiply(double arr[],int size)
{
    double product=1;
    for(int i=0;i<size;i++)
    {
        product *= arr[i];
    }
    return product;
}





//division function
double divide(double arr[],int size)
{
    double divi=arr[0];
    for(int i=1;i<size;i++)
    {
        if (arr[i]==0){
            cout<<"Cannot Divide by 0"<<endl;
            return 0;
        }
        divi /= arr[i];
    }
    return divi;
}






