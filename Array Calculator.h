//Gordon Upshaw
//4/11/20112
//lAB 8
//12x12 RNG Array


#include <iostream>
#include <cmath>// Math Header
#include <ctime> //Time function for RNG
#include <iomanip>
using namespace std;




void Colearrange( int RNGArray[12][12], int NUMCOLS,int ColNum) //Column Descending Rearrange
{
	const int tempcol = 12;
	int temp;
	int coltest [tempcol];
	for (int c=0; c <12; c++)
	{
		coltest[c]= RNGArray[c][ColNum];
	}


	
	for (int i=0; i < 12; i++)
	{
		for (int j=1; j < 12; j++)
		{
			if (coltest [j] > coltest [j-1]) //Bubble sort
			{
				temp = coltest[j];
				coltest [j] = coltest[j-1];
				coltest[j-1] = temp;
			}
		}
	}		
	for (int i=0; i < 12; i++)
	{
	cout << setw(5) << coltest[i];
	}


}


void RowRearrange( int RNGArray[12][12], int NUMROWS,int RowNum) //Row Descending arrange
{
	const int temprow = 12;
	int temp;
	int Rowtest [temprow];
	for (int r=0; r <12; r++)
	{
		Rowtest[r]= RNGArray[RowNum][r];
	}


	
	for (int i=0; i < 12; i++)
	{
		for (int j=1; j < 12; j++)
		{
			if (Rowtest [j] > Rowtest [j-1]) //Bubblesort
			{
				temp = Rowtest[j];
				Rowtest [j] = Rowtest [j-1];
				Rowtest[j-1] = temp;
			}
		}
	}		
	for (int i=0; i < 12; i++)
	{
	cout << setw(5) << Rowtest[i];
	}


}




	




int RowMin ( int RNGarray [12][12], int i, int RowNum, int RowMin)


{
	RowMin=RNGarray[0][0];
	
	for (i=0; i<12; i++)
	{
	if (RNGarray[RowNum][i] <RowMin) RowMin = RNGarray [RowNum][i];
}
cout << endl;
return (RowMin);
}
int ColMin ( int RNGarray [12][12], int i, int ColNum,int Colmin)
{
		Colmin=RNGarray[0][0];
	for (i=0;i<12; i++)
	{
		if (RNGarray[i][ColNum] < Colmin) Colmin = RNGarray [i][ColNum];
	}
		cout << endl;
		return (Colmin);
}
int ColMax ( int RNGarray [12][12], int i, int ColNum,int Colmax)
{
	for (i=0;i<12; i++)
	{
		if (RNGarray[i][ColNum] > Colmax) Colmax = RNGarray [i][ColNum];
	}
		cout << endl;
		return (Colmax);
}
int RowMax (int RNGarray [12][12], int i, int RowNum, int Rowmax)


	{








     
for ( i=0; i<12; i++)


{   
 if(RNGarray[RowNum][i] > Rowmax)  Rowmax= RNGarray[RowNum][i];


             


         
 }
cout << endl;
return (Rowmax);
}


double ColAverage(int RNGarray [12][12], int i, int Colnum, double Average2)
{
	double sum=0;
	for (int i =0; i < 12; i++)
	{
		sum+= RNGarray[i][Colnum];
	Average2=sum/12;


	
}
return (Average2);
}




double RowAverage (int RNGarray [12][12],int i, int RowNum, double Average) // RowAverage Function


	{
	double sum=0;
	{ for (int i=0; i< 12; i++)
	
	sum+= RNGarray[RowNum][i]; 
	
 Average=sum/12;
	


}
return (Average);
	}








int findMin(int RNGarray [][12], int imin, int jmin)// Find Min value function
{
int Min = RNGarray[0][0];


{
    for (int i = 0; i < imin; ++i) 
		for (int j=0; j < jmin; ++j)
			if (RNGarray[i][j] < Min) {
            Min = RNGarray[i][j] ;
        }
    }
cout << endl;
    return Min;
}




int findMax(int RNGarray [][12], int imax, int jmax) //Find Max function
{
	{


int max=0;




     
for (int i=0; i<imax; i++)




for (int j=0; j<jmax; j++)
{   
 if(RNGarray[i][j]> max)  max= RNGarray[i][j];


             


         
 }
cout << endl;
return max;
}
}




double averagefunction (int RNGarray [12][12],double Average) // Average function
{
	double sum=0;
	{ for (int i=0; i< 12; i++)


	{
		for ( int j=0; j <12; j++)
	
	sum+= RNGarray[i][j]; 
	
 Average=sum/144;
	


}
	}
return (Average);
}


void printArray(int RNGarray[12][12]) // Prints array // Array Function
{
	for (int i=0;  i < 12; i++)
{
	for (int j=0; j < 12; j++)
	{
		cout <<setw(5) << RNGarray [i][j] << " "; //Set width to 12 (space between rows and columms) 
	}
	cout << endl;
}
}






int main ()
	{
	const int NUMROWS = 12; //Number of Rows in Array
	const int NUMCOLS =12; //Number of Columms in Array
	int RNGarray [NUMROWS] [NUMCOLS] = {}; //Sets Rows and Columms and numbers into a bracket
	int TEMPArray [NUMROWS] = {};
	int i,j;
	double Average=0;
	int min=0;
	int max=0;
	int choice;
	int ColNum;
	double ColAvg=0;
	int ColMax2=0;
	int Colmin2=0;
	int RowNum;
	double RowAvg=0;
	double RowMax2=0; //RowxMax 2 Refers to RowMax in main not function
	double RowMin2=0;// Rowmin2 refeers to ROW in main not function
	double RA;
	char yn;


	srand ( static_cast<unsigned int>(time(NULL)) );//Used for RNG
for (i=0;  i < NUMROWS; i++)
{
	for (j=0; j < NUMCOLS; j++)
	{
	 RNGarray [i][j] = rand() %99;
	}
}


printArray (RNGarray); // Prints out Array in main


averagefunction (RNGarray,Average);


cout << "The Average of the Array" << "   " << averagefunction (RNGarray, Average) << endl;
cout << "The Maximum number of the Array is" << "   " << findMax(RNGarray,12,12) << endl;
cout << "The Minimum number of the Array is" << "   " << findMin (RNGarray,12,12) << endl;


do 
{
	cout << "Select  1 for Row or  2 for Column" << endl;
		cin >> choice;
	if (choice==1){
	cout << "What row would you like?" << endl;
	cin >> RowNum;
	cout <<"The row Average is" << "  " << RowAverage (RNGarray,NUMROWS,RowNum,RowAvg) << endl;
	cout << "The Row Max is" << "   " <<  RowMax (RNGarray,NUMROWS,RowNum,RowMax2) << endl;
	cout << "The Row Min is " << "   " << RowMin (RNGarray, NUMROWS, RowNum, RowMin2) << endl;
	cout << "The Rearranged Row is" << endl;
	RowRearrange (RNGarray,NUMROWS,RowNum);




	
	}


	else if (choice ==2){
	cout << "What Column would you like?" << endl;
	cin >>ColNum;
	cout << "The Column Average is" << "  " << ColAverage (RNGarray,NUMCOLS,ColNum,ColAvg) << endl;
	cout << "The Column Max is" << "  " << ColMax (RNGarray,NUMCOLS,ColNum,ColMax2) << endl;
	cout << "The Column Min is " << "  " << ColMin (RNGarray, NUMCOLS, ColNum, Colmin2) << endl;
	cout << " The Column Rearrange is" << "  " << endl;
	Colearrange (RNGarray,NUMCOLS,ColNum);
	}


	cout << "Again? ";
	}while (cin >> yn && (yn == 'Y' || yn == 'y'));








system ("pause");
return 0;
}


