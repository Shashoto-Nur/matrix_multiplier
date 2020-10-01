//An object-oriented program to multiply two matrices


#include <iostream>
#include <stdlib.h>

using namespace std;

//A class to hold all necessary functions

class route
{
    public:

        void run();
        void inputValues();
        int  gridError();
        void printValues();
        void calculation();
        void printResult();
        int  exit();


    protected:

    private:
};

//Class accesses its functions


//Scanning matrices measurements (1)

int R1, C1, R2, C2, i, j, k, sum = 0, n, A[10][10], B[10][10], Result[10][10];

void route :: run()

{
    system("cls");

    cout << "\n\t\t\t    Matrix multiplication\n\nFor A matrix,\n Number of rows   : ";
    cin >> R1;
    cout << " Number of columns: ";
    cin >> C1;
    cout << "\nFor matrix B,\n Number of rows   : ";
    cin >> R2;
    cout << " Number of columns: ";
    cin >> C2;

}

//Measurements scanned


//Verifying eligibility of the variables (2)

int route :: gridError()

{

    if(C1!=R2)
    {
        system("cls");
        cout << endl << "\t\t\t    ERROR!\n\n" << "[The Column of First matrix must be equal to Row of Second matrix]" << endl;

        n = 1;
    }
    else
    {
        n = 2;
    }

    return n;
}

//Programs re-runs


//Scanning matrices (3)

void route :: inputValues()

{

    system("cls");

    cout << endl << "Enter elements of A matrix: " << endl;
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C1; j++)
        {
            cout << "A[" << (i+1) << "][" << (j+1) << "] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }


    cout << endl << "Enter elements of B matrix:" << endl;
    for(i=0; i<R2; i++)
    {
        for(j=0; j<C2; j++)
        {
            cout << "B[" << (i+1) << "][" << (j+1) << "] = ";
            cin >>B[i][j];
        }
        cout << endl;
    }



}

//Values are scanned


//Printing matrices (4)

void route :: printValues()

{

    system("cls");

    cout << "HERE,\n\nA = ";
    for(i=0; i<R1; i++)
    {
        cout << "\t";
        for(j=0; j<C1; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << endl << endl;


    cout << "B = ";
    for(i=0; i<R2; i++)
    {
        cout << "\t";
        for(j=0; j<C2; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl << endl;
    }
    cout << endl << endl << endl;


}

//Values printed


//Multiplying the matrices (5)

void route :: calculation()

{

    for(i=0; i<R1; i++)
    {
        for(j=0; j<C2; j++)
        {

            for(k=0; k<C1; k++)
              {
                sum= sum + A[i][k] + B[k][j];
              }
            Result[i][j] = sum;
            sum = 0;
        }

    }

}

//The matrices are multiplied


//Printing result (6)

void route :: printResult()

{


    cout << "A x B = ";
    for(i=0; i<R1; i++)
    {
        for(j=0; j<C2; j++)
        {
            cout << Result[i][j] << "\t";
        }
        cout << endl << endl << "\t";

    }

    cout << endl;


}

//Result is printed


//Program end protocol (7)

int route :: exit ()

{

    cout << endl << "Wanna go again?" << endl << " 1.Sure" << endl << " 2.Hell no" << endl << endl << "Enter your choice: ";
    cin >> n;

    return n;

}

//Program re-runs or exits


//Main body

int main ()

{


    route initiate;

    //creating an object initiate to access the class

    initiate.run();
    initiate.gridError();

    if(n==1)
    {
        initiate.exit();

        if(n==1){return main();}
        else{return 0;}
    }
    else
    {
        initiate.inputValues();
        initiate.printValues();
        initiate.calculation();
        initiate.printResult();
        initiate.exit();

        if(n==1){return main();}
        else{return 0;}
    }


}

//That's all folks!!!