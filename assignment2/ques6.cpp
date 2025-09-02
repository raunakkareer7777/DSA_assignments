#include <iostream>
#include <vector>
using namespace std;

class Matrices{

   public:
      vector<int> row;
      vector<int> col;
      vector<int> val;

      void set(){
         int r,c,v;
         for (int i = 0; i <= 2; i++){

            cout << "Enter row::";
            cin >> r;
            cout << "Enter col::";
            cin >> c;
            cout << "Enter val::";
            cin >> v;
            row.push_back(r);
            col.push_back(c);
            val.push_back(v);

         }
      }
      void display(){
         
         for (int i = 0; i <= 2; i++){
            cout << row[i] << " " << col[i] << " " << val[i] << endl;
         }
      }
      void transpose(){

         for (int i = 0; i <= 2; i++){
            swap(row[i],col[i]);
         }
      }
      void add(Matrices obj){
         for (int i = 0; i <= 2; i++){

            if (row[i] == obj.row[i] && col[i] == obj.col[i]){
               val[i] += obj.val[i];
            }
         }
      }
      void multiply(Matrices obj){

         obj.transpose();

         for (int i = 0; i <= 2; i++){

            if (row[i] == obj.row[i] && col[i] == obj.col[i]){
               val[i] += obj.val[i];
            }
         }
      }
};

};
