#include<iostream>
using namespace std;

char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='x';
string n1="";
string n2="";
bool tie=false;


void function1()
{
    cout<< " |     | \n";
    cout<<""<<space[0][0]<<"| "<<space[0][1]<<"   | "<<space[0][2]<<endl;
   cout<<"_|_____|_\n";
    cout<< " |     | \n";
    cout<<""<<space[1][0]<<"| "<<space[1][1]<<"   |"<<space[1][2]<<endl;
   cout<<"_|_____|_\n";
    cout<< " |     | \n";
    cout<<""<<space[2][0]<<"| "<<space[2][1]<<"   |"<<space[2][2]<<endl;
    cout<< " |     | \n";
}

void function2()
{
    int digit;

    if(token=='x')
    {
        cout<<n1<<" "<<"please enter:\n";
        cin>>digit;
    }
    else if(token=='0')
    {
        cout<<n2<<" "<<"please enter:\n";
        cin>>digit;
    }

    if(digit==1)
    {
        row=0;
        column=0;
    }
    else if(digit==2)
    {
        row=0;
        column=1;
    }
    else if(digit==3)
    {
        row=0;
        column=2;
    }
    else if(digit==4)
    {
        row=1;
        column=0;
    }
    else if(digit==5)
    {
        row=1;
        column=1;
    }
    else if(digit==6)
    {
        row=1;
        column=2;
    }
    else if(digit==7)
    {
        row=2;
        column=0;
    }
    else if(digit==8)
    {
        row=2;
        column=1;
    }
    else if(digit==9)
    {
        row=2;
        column=2;
    }

    else if(digit<0 || digit>9){
        cout<<"invalid !!!"<<endl;
    }

    if(token=='x' && space[row][column]!='x' && space[row][column]!='0')
    {
        space[row][column]='x';
        token='0';
    }
    else if(token=='0' && space[row][column]!='x' && space[row][column]!='0')
    {
        space[row][column]='0';
        token='x';
    }

    else{
        cout<<"there is no empty space!"<<endl;
        function2();
    }
      function1();
}

 bool function3()
    {
        //win condition

        for(int i=0;i<3;i++)
        {
            if((space[i][0]==space[i][1] && space[i][0]==space[i][2]) || (space[0][i]==space[1][i] && space[0][i]==space[2][i]))
            return true;
        }

        if((space[0][0]==space[1][1] && space[0][0]==space[2][2]) || (space[0][2]==space[1][1] && space[0][2]==space[2][0]))
        return true;


        // game finished or not

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(space[i][j]!='x' && space[i][j]!='0')
                return false;
            }
        }

        // draw condition
        
         tie =true;
        return true;
         
    }


    int main(){
        cout<<"enter the name of the first player: \n";
    getline(cin,n1);
    cout<<"enter the name of the second player: \n";
    getline(cin,n2);

    cout<<n1<<" is player1 so he/she will play first \n";
    cout<<n2<<" is player2 so he/she will play second \n";
        while(!function3())
        {
            function1();
            function2();
            function3();
        }

        if(token=='x' && tie==false)
        {
            cout<<n2<<" "<<"wins!!"<<endl;
        }
       else if(token=='0' && tie==false)
        {
            cout<<n1<<" "<<"wins!!"<<endl;
        }

        else{
            cout<<"it's a draw!"<<endl;
        }
    }

   

