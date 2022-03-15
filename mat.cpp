#include <string>
#include "mat.hpp"
#include <iostream>

using namespace std;
    string ariel::mat(int column, int row, char a, char b) {
        if(column%2==0 || row%2==0 || column < 1 || row < 1) {
            throw runtime_error("rows and columns must be even and greater than zero");
        }
        if(a > '~' || a < '!' || b > '~' || b < '!') {
            throw runtime_error("symbols must be chars");
        }

        string str;
        char last_Char =a;S
        int j = 1;
        int row_symetry =(row /2)+1;
        int col_symetric = 0 ;
        int row_num = 0;
        //till the middele of the rows
        for ( row_num=1;row_num<=row_symetry ;row_num++){
            if(row_num%2==0) {
                last_Char = b;
            } else {
                last_Char = a;
            }
            //till we got to the num of the row or the end if the num of row is big
            j=1;
            while(j<=row_num &&j<=column){
                if(j%2 ==0){
                    str+=b;
                }
                else{
                    str+=a;
                }
                j++;
            }
            col_symetric=column -(j-1);
            //miidele of the symetric
            while (j<=col_symetric){
                str+=last_Char;
                j++;
            }
            //the symetric
            while(j<=column){
                if(j%2 ==0){
                    str+=b;
                }
                else{
                    str+=a;
                }
                j++;
            }
            str+='\n';
        }
        int x= row_num-2;
        // the rest of the rows
        for (row_num=x;row_num>=1;row_num--){
            if(row_num%2==0) {
                last_Char = b;
            } else {
                last_Char = a;
            }
            //till we got to the num of the row 
            j=1;
            while(j<=row_num && j<=column){
                if(j%2 ==0){
                    str+=b;
                }
                else{
                    str+=a;
                }
                j++;
            }
            col_symetric=column -(j-1);

            while (j<=col_symetric &&j<=column){
                str+=last_Char;
                j++;
            }
            while(j<=column ){
                if(j%2 ==0){
                    str+=b;
                }
                else{
                    str+=a;
                }
                j++;
            }
            str+='\n';

        }
        return str;}