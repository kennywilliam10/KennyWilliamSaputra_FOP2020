#include<iostream> 
using namespace std; 

float pi = 3.14159;  
float volume(float r) 
{ 
    float vol; 
    vol = (float(4) / float(3)) * pi * r * r * r; 
    return vol; 
}  
 
int main() 
{ 
    float radius = 12; 
    float vol;  
    vol = volume(radius);  
    cout << "Volume Of Sphere :" << vol << endl; 
     
    return 0; 
}

