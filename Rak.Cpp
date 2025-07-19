#include<iostream>
#include<string.h>
using namespace std;
class Car{
    private:
    char brand[20];
    char model[12];
    int year;
    public:
    //geter function
    int get_Year(){
        return year;
    }
    void input_Data(){
        cout<<"Enter brand="; cin.seekg(0);
        cin.get(brand,15);
        cout<<"Enter model="; cin.seekg(0);
        cin.get(model,12);
        cout<<"Enter year="; cin>>year;
    }
    void show_Data(){
        cout<<brand<<'\t'<<model<<'\t'<<year<<endl;
    }
};//end class
void sort_Year(Car c[],int n){//Non member function
    Car temp;
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++){
        if(c[i].get_Year()>c[j].get_Year()){
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
int main(){
    Car mycar[12];
    int i,j;
    cout<<"Enter n object=";
    cin>>n;
    for(i=0;i<n;i++){
        mycar[i].input_Data();
    }
    cout<<"\nOutput Data Brfore Sort:\n";
    for(i=0;i<n;i++){
        mycar[i].show_Data();
    }
    sort_Year(mycar,n);
    cout<<"Output data  After sorted:\n";
    for(i=0;i<n;i++){
        mycar[i].show_Data();
    }
}