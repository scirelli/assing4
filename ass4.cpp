/*use will be asked to enter a sequence of interger values in no particular order. 
the program will calculate and display the sum, product, and average. let the user use the number
0 to indicate the end of the input. do not use global variables just local variables. one module 
to give instructions one to take data, one or more to calculate, and on to display.      
must run with the following intergers: 9 -3 4 7 -2 6 8 5 5 -9 0
*/

#include<iostream.h>

void GetData(int[]);
void Display(int[]);
int CalcSum(int[]);
int CalcProduct(int[]);
float CalcAverage(int[]);

void main()
{
	int iNumber[20];
	
	GetData(iNumber);
	Display(iNumber);

	return;
}

void GetData(int iNumber[])
{
	int i=0;

	for(i=0; i<=19; i++)
		iNumber[i]=0;
	
	cout<< "Enter number-> ";
	cin>> iNumber[0];
	i=1;
	while( (iNumber[i-1] != 0) && (i!=20) )
	{
		cout<< "Enter number-> ";
		cin>> iNumber[i];
		i++;
	}

	return;
}

int CalcSum(int iNumber[])
{
	int i=0,sum=0;
	
	while(iNumber[i] != 0)
	{
		sum+= iNumber[i];
		i++;
	}

	return sum;
}

int CalcProduct(int iNumber[])
{
	int i=0, iProduct=1;
	
	while(iNumber[i] != 0)
	{
		iProduct*= iNumber[i];
		i++;
	}
	
	return iProduct;
}

float CalcAverage(int iNumber[])
{
	float fAverage=0.0;
	int i=0;
	
	while(iNumber[i] != 0)
	{
		fAverage+= iNumber[i];
		i++;
	}

	return fAverage/i;
}

void Display(int iNumber[])
{
	int iChoice=0;

	cout<<"\n\n\tMenu \n\n 1. Sum \n 2. Product \n 3. Average\n ->";
	cin>> iChoice;

	switch(iChoice)
	{
	case 1 : cout<< "Sum = " << CalcSum(iNumber);break;
	case 2 : cout<< "Product = " << CalcProduct(iNumber);break;
	case 3 : cout<< "Sum = " << CalcAverage(iNumber);break;
	default : cout<<"That is not a choice, MORON!! GoodBye!";
	}
	
	return;
}