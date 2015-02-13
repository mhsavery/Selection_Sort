#include <iostream>
using namespace std;


int main(){

        int n=6;
        int array[] = {5,15,1,10,25,20};
        int minPosition, temporary;

        cout << "Unsorted array: ";
        for(int i=0; i<6; i++){
                cout << array[i] << " ";
        }
        cout << endl;

        for(int i=0; i<n-1; i++){
                minPosition=i;
                for(int j=i+1; j<n; j++){
                        if(array[j] < array[minPosition])
                                minPosition = j;
                }
                if(minPosition != i){
                        temporary = array[i];
                        array[i] = array[minPosition];
                        array[minPosition] = temporary;
                }
        }
        cout << "Sorted array: ";
        for(int i=0; i<6; i++){
                cout << array[i] << " ";
        }
}
