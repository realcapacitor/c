#include<stdio.h>

int* evens()
	{
		static int nums[5];
		int even =0;
		for(int k=0;k<5;k++)
		{
			nums[k]=even+=2;
		}
	return nums;
	}

int addup(int* a , int n)
	{
		int total=0;
		for(int k=0;k<n;k++)
		{
			total+=a[k];
		}
		return total;
	}

int main(){

	printf("JOINED GITHUB ON 27SEPT2020\n");
	printf("Don't forget to push on github\n");

/*
//Array
	int array[5]={1,2,3,4,5};//Array example

	for(int i=0;i<5;i++)
	{
		printf("array[%d] = %d\n",i,array[i]);//Accessing array elements
	}
*/

/*
//2D Array
	int array[3][3]={	{1,2,3},
						{4,5,6},
						{7,8,9}
					};				//2D array Example

	for(int i=0;i<3;i++){			//Accessing elements of 2D array
		for(int j=0;j<3;j++){
			printf("%d ",array[i][j]);
		}	printf("\n");
	}
*/
/*
//Pointers
	//pointers are used store/display the memory address of any variable
	int x=10;
	//the pointer(address) to a variable can declared by using & symbol
	//before var name
	printf("%d = %x\n",x, &x);
	//%x is used show a hexadecimal address no.
	//A pointer is a variable that stores the address of another variable

//pointer to integer
	int* y =&x;
	//in case of intergers we have to use &var to declare a point with int*
	printf("%x\n",y);
	//to dereferance the value stored in a pointer variable we have to use *
	//before pointer variable
	printf("Dereferancing point *y = %d\n",*y);
//pointer to a char
	char a='a';
	char* b = &a;
	printf("pointer b = %x\n&a = %x\n&b = %x\na = %c",b,&a,&b,a);
*/
/*
//Pointers and Array
	//An array declaration reserves a contigeous memory addresses for its elements
	int array[]={1,2,3,4,5}; //Array Example
	int* b = array;			 //declaring pointer to a array we dont need to use '&' symbol
	puts("Enter No.");		//because array name is a pointer itself to its first element
	for(int i =0;i<5 ; i++){
		scanf("%d",(b+i));	//modifing array using pointers

	}
	for(int j=0;j<5;j++){
		printf("%d",*(b+j));//accessing array using pointer
	}
*/
/*
//Pointer to String
	char hello[]="Hello world";
	char* a=hello;
	printf("address of hello is a = %x\n",a);//to see the address(or declaration) of
											//a string we
					   	   	   	   	   	   //dont need to use '&' symbol
	for(int i=0;i<11;i++){
		printf("%c-",*(a+i));		//to dereferance pointer to char we need to use *
		//before pointer
		}
	printf("\n");
	*(a+3)='p';			//updating string using pointers
	*(a+4)='\0';
	for(int i=0;i<11;i++){
			printf("%c-",*(a+i));}
*/
/*
//Pointer to function(Array)
	//an array cannot be passed by value to a function
	//However array name is a pointer itself
	//so passing an array name to function is enough(same as passing pointer)
	//however while passing array to a function we need to use int* in function argument
	//now consider we have to sum up all elements of array using addup() function
	int array[]={9,8,7,6,5};//Array Example
	int result=addup(array,5);//Function Call
	printf("%d\n",result);

//Pointer to function(Array Returning)
	//while returning array through a function, we have to declare it as a pointer to
	//a function
	//now i want to return first five even nos using evens() function
	int *a;
	//note that when a local variable is passed out of a function it needs to be declared
	//as a static variable
	a=evens();
	for(int k=0;k<5;k++){
		printf("%d\t",a[k]);
	}
*/
	return 0;
}
