#include <iostream>

using namespace std;

int main()
{
    int n,a[50],g=0,x=0,i,j,y=0;
    float F;
    cout<<"Enter the size of array = ";
    cin>>n;
    F=n/2;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++){
        int count=1;
        if(a[i]!=y){
            for(j=i+1;j<n;j++){
                if(a[i]==a[j])
                count++;
            }
            if(count>x){
                x=count;
                y=a[i];
                if(x>F){
                    g++;
                cout<<y<<endl;
                }
            }       
            
        }
    }if(g==0)
    cout<<"NONE"<<endl;
    

    return 0;
}
