#include <iostream>
#include "Pixel.h"
#include "vector"
using namespace std;
int main() {
    int n=100, m=100;
    vector<vector<Pixel> > ss;
    for (int i=-n; i<n+1; i++){
        ss.push_back(vector<Pixel>());
        for (int j=-m; j<m+1; j++){
            ss[i+n].push_back(Pixel(i,j,0,0,0));
            }
     }
    int x, y;
    for (int i=0; i<10; i++){
        x=rand()%ss.size();
        y=rand()%ss.size();
        ss[x][y].setR((rand()%256));
        ss[x][y].setG((rand()%256));
        ss[x][y].setB((rand()%256));
    }
    for (auto it:ss){
        for (auto j:it){
            cout<<"("<<j.getX()<<", "<<j.getY()<<")-("<<j.getR()<<", "<<j.getG()<<", "<<j.getB()<<") ";
        }
        cout<<endl;
    }
}
