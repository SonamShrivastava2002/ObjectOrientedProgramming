/*write a program to emulate tic tac toe[3x3].There are 2 player1s which will input either 1 or 
0 (1=X,0=O) alternatively.After all 9inputs are recorded,diaplay the result whether any player 
won or draw*/

//including header file
#include <bits/stdc++.h>
using namespace std;
//main function
int main(){
    //initializing the input matrix of 3x3
    int tic[3][3];
    //number of row
    int n=3;
    //loop from 0  to n-1
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //taking input for each cell of the input matrix
            cin>>tic[i][j];
        }
    }
    //printing the matrix after taking inputs
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<tic[i][j]<<" ";
        }
        cout<<endl;
    }
    //initializing parameters for counting number zeros and ones in the matrix
    int one = 0;
    int zero = 0;
    //creating the flag operator to keep check for the winner
    int flag = false;
    //loop from 0 to n-1 for each row
    for(int i=0;i<n;i++){
        //loop from 0 to n-1 for each column
        for(int j=0;j<n;j++){
            //counting the number of ones and zeros using conditions
            if(tic[i][j] == 1){
                one++;
            }
            else{
                zero++;
            }
        }
        //checking for winner
        if(one == 3 && zero == 3){
            cout<<"both player won";
            flag = true;
            break;
        }
        if(one == 3 || zero == 3){
            cout<<"One of the 2 player won";
            flag = true;
            break;
        }
        //again assigning the values to the count of zeros and ones
        one = 0;
        zero = 0;
        //again calculating for other row 
        for(int j=0;j<n;j++){
            if(tic[j][i] == 1){
                one++;
            }
            else{
                zero++;
            }
        }
        if(one == 3 && zero == 3){
            cout<<"both player won";
            flag = true;
            break;
        }
        if(one == 3 || zero == 3){
            cout<<"One of the 2 player won";
            flag = true;
            break;
        }
        one = 0;
        zero = 0;
    }
    //loop will break only if one player has already won or either none of the player have won in the each row and column
    int temp1 = tic[0][0];
    int temp2 = tic[0][n-1];
    if(flag == false){
        //player can won if the diagonal is 1 or 0
        if(tic[1][1] == temp1 && tic[2][2] == temp1){
            cout<<"One of the 2 player won";
        }
        else if(tic[1][1] == temp2 && tic[n-1][0] == temp2){
            cout<<"One of the 2 player won";
        }
        //if none of the player won
        else{
            cout<<"Draw";
        }
    }
    return 0;
}