#include <iostream>
using namespace std;

int main(){
    int result[50][50];
    int xrows,xcolumns,yrows,ycolumns;
    int i,j,k,sum=0;

    cout<<"enter row and column for x matris";
    cin>>xrows>>xcolumns;

    int x[xrows][xcolumns];

    for(i=0; i<xrows; i++){
        for(j=0;j<xcolumns;j++){
            cout<<"x["<<i<<"]["<<j<<"]=";
            cin>>x[i][j];
        }
    }

    cout<<"\n";

    cout<<"enter row and column for y matris";
    cin>>yrows>>ycolumns;

    int y[yrows][ycolumns];

    if(xcolumns!=yrows){
        cout<<"These matrices cannot  be multiplied\n";
    }
    else{
        for(i=0; i<yrows; i++){
            for(j=0;j<ycolumns;j++){
                cout<<"y["<<i<<"]["<<j<<"]=";
                cin>>y[i][j];
            }
        }
    }

    for(i=0;i<xrows;i++){
        for(j=0; j<ycolumns; j++){
            for(k=0;k<yrows;k++){
                sum+=x[i][k]* y[k][j];
            
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    for(i=0;i<xrows;i++){
        for(j=0;j<yrows;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n\n";
    }

    cout<<"\n";

}
