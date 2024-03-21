#include<iostream>
using namespace std;

//sorted array
void sortedarray(int a[],int b[],int c[],int sa,int sb,int sc){
    int i,j,k;
    i=j=k=0;
    while(i<sa && j<sb){
        if(a[i]==b[j]){
            c[k]=a[i];
            i++;
            j++;
        }else if(a[i]>b[j]){
            c[k]=b[j];
            j++;
        }else{
            c[k]=a[i];
            i++;
        }
        k++;
    }


     while (i < sa) {
        c[k++] = a[i++];
    }
    while (j < sb) {
        c[k++] = b[j++];
    }


    //printf c array
    for (int i = 0; i < sc; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
}


//unsortd
void unsorted(int a[],int b[],int c[],int sa,int sb,int sc){
    int i,j,k;
    i=j=k=0;
    for (int i = 0; i < sa; i++)
    {
        c[k++]=a[i];
    }

    for (int i = 0; i < sa; i++)
    {
        int d=0;
        for (int j = 0; j < sb; j++)
        {

            if(a[j]==b[i]){
                d=1;
                break;
            }
        }
        if(d==0){
            c[k++]=b[i];
        }
        
    }

    //printf c
    for (int i = 0; i < sc; i++)
    {
        cout<<c[i]<<" ";
    }
    
    
}
int main(){
    int a[]={3,4,5,6,10};
    int b[]={2,4,5,7,12};
    int c[10];


    sortedarray(a,b,c,5,5,8);


    cout<<"\n";

    int d[]={3,5,10,4,6};
    int e[]={12,4,7,2,5};
    int f[10];
    unsorted(d,e,f,5,5,10);

}