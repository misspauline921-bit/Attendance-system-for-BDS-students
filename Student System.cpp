#include <iostream>//gives access to for input output
using namespace std;//let's you write cin/cout instead of std::cin/std::cout
const int SIZE = 50;//declares the constant and initialises it to 50
int main(){
//array to store 1(present) or 0(absent) for each student
int attendance[SIZE];//declaration of the array(index[0]=Student1, index[49]=Student50)
int totalPresent = 0;//declaration and initialisation of totalPresent
//Accept attendance input for each student
//the for loop iterates i from 0 to 49
for (int i = 0; i<SIZE; i++){
cout<<"Enter attendance for Student" <<(i+1)<<"(1 = present, 0 = absent):";
cin>> attendance[i];
//Basic input validation incase any value entered is not 0 or 1
while(attendance[i] != 0 &&attendance[i] != 1){
cout<<"Invalid input. Enter 1 or 0: ";
cin>>attendance[i];
}
}
//Display list of absent students
cout<<"n\Students who were Absent: \n";
//re-scans the array; where attendance[i] = 0, prints i+1 as the absent student's ID
for(int i =0; i<SIZE; i++){
if (attendance [i]==0){
cout<<"Student ID: "<<(i+1)<<endl;
}
}
//Calculate the total number present
//Scans the array again, incrementing totalPresent for every 1 found
for(int i=0; i<SIZE; i++){
if (attendance[i] ==1){
totalPresent++;
}
}
//prints the total present and total absent
cout<<"\nTotal number of students present: "<<totalPresent<<endl;
cout<<"Total number of Students absent: "<<(SIZE-totalPresent)<<endl;
return 0;
}
