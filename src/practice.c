#include<stdio.h>
#include<string.h>

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

int addupp(int a,int b)
	{
		int c = a+b;
		printf("%d\n",c);
		return c;
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

int addno(int x, int y)
	{
		return (x+y);
	}

int subno(int x, int y)
	{
		return (x-y);
	}

int multno(int x, int y)
	{
		return (x*y);
	}

int divno(int x, int y)
	{
	if(y!=0){
		return (x/y);
			}
			else{
			return 0;
				}
	}

struct heros{
	int score ;
	char name[40];
	float height;
};

struct school{
	char name[40];
	int roll;
};

struct cross{
	char name[40];
	int roll;
};

typedef struct {
	int roll;
	char name[30];
} sidekick;

typedef struct {
	int x;
	int y;
} point;

typedef struct {
	float radius;
	point center;
}circle;
//Pointer structure(Important/Difficult part)
//Student structure Defination
struct student{
	char name[50];
	int number;
	int age;
};
//Struct pointer as a function parameter(function input)
//if we imagine what is inside std it is address of std1/2 as the input is &std1 and at function theres *std, so
//this means we are dereferancing pointers and then navigating to members(as std->name).
//so basicaly what is happening here is "from structure student the variable std1/2 has been
//inputed to the showStudentData function"
//Then inside the showStudentData function using std->name attribute we are  acquiring
//the value of member "name" from variable "std1" of structre "student"
void showStudentData(struct student *std){
	printf("\nStudent:\n");
	printf("Name: %s \n",std->name);
	printf("Number: %d\n",std->number);
	printf("Age: %d\n",std->age);
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
	printf("pointer b = %x\n&a = %x\n&b = %x\na = %c",b,&a,&b,*b);
*/
/*
//Pointers and Array
	//An array declaration reserves a contigeous memory addresses for its elements
	int array[]={1,2,3,4,5}; //Array Example
	int* b = array;			 //declaring pointer to a array we dont need to use
							 //'&' symbol
	puts("Enter No.");		//because array name is a pointer itself to its first element
	for(int i =0;i<5 ; i++){
		scanf("%d",(b+i));	 //modifing array using pointers

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
/*
//Strings
	//A string in c is nothing but a array of characters ending with a null character(\0)
	//string syntax :
	char hi[6]="Hello";
	//in above example the The word Hello has 5 letters but in square brackets we wrote
	//6 because at the end, after 'o' theres a null(\0) character added by the compiler
	//but modern compilers there's no need to add that null character space
	printf("%s\n",hi);
	//A string can also be declared as a array of characters as follows
	//But here in this case we need to manualy add a null character at the end otherwise
	//the compiler will think that the string is not ended and will include the
	//characters
	//after the 'd' in the same string according to its memory location
	char w[6]={'w','o','r','l','d','\0'};
	printf("%s\t %d %d",w,&w,&hi);
*/
/*
//String_functions(#include<string.h>)
	//1.strlen()	strlen() function is used to calculate the
	//size(length/No. of characters)
	//of a string. this function doesn't include the null character
	char hi[50] ="HEllo";
	//in above example length of the string is 5
	printf("The length of hi[] is %d\n",strlen(hi));
	//2.strcat()	strcat() function is used to concat(merge) Two strings
	//i.e. putting 2nd string at the end of the first one
	//but thers a condition the size of first string must be as large as it can
	//have both first and second string in it, the result is saved in first string
	//here we can not leave []s empty
	char w[]=" World";
	strcat(hi, w);
	printf("using strcat() : %s\n", hi);
	//3.strcpy()	strcpy() copys second string into the first one
	strcpy(hi ,w);
	printf("using strcpy() : %s\n",hi);
	//4.strlwr()	strlwr is used to convert all characters to the lower case
//	char str[ ] = "MODIFY This String To LOwer";
//	printf("%s\n",strlwr (str));
	//5.strupr()	used to uppercase whole sentence
	//6.strrev()	used to reverse whole sentence
	//7.strcmp()	used to compare to strings returns 0 when they are same
*/
/*
//String input
	//there are 3 string input method(functions)
	//1.scanf()
	//2.gets()
	//3.fgets()
	////////////////////////////////////////////
	//1.scanf()		when using scanf() theres no need to add '&' before
	//varible name
	//a.%s syntax;
	char hi[10];
	//scanf("%s",hi);
	printf("%s",hi);
	//The scanf("%s") function scans string until the space is encountered.
	//so to input a long string with spaces in it, we use a gets() function
	//2.gets()
	char w[20];
	gets(w);
	printf("%s ",w);
	//but using gets() is not safe as it can scan undefined number of characters
	//so we use fgets() as a best alternative
	//3.fgets()
	char v[20];
	fgets(v , 20, stdin);
	printf("%s",v);
*/
/*
//String output
	//there are 3 methods of string output
	//1.printf()
	//2.puts()
	//3.fputs()
//String to Number
	//converting a string to a number is done by the use of atoi() function
	//if briefly explaining we can say that atoi() function is converting string to
	//integer only only those strings which contains a number(By mistake or somthing)
	//like char hi[10]="69"
	//int atoi() convrets to int
	//double atoi() converts to float
	//long atoi() converts to long int
	char hi[10];
	fgets(hi , 20, stdin);
	int num =atoi(hi);
	printf("%d",num);
*/
/*
//Array of string
	//2D array can also be used store a strings
	// it has syntax as follows
	// char hi[no of string][max no of chars among all];
	//							 ex.	  char hi[3][6]={
	//													"Hello",
	//													"world",
	//													"Shivam"
	//													};
	char hi[3][7]={
					"Hello",
					"world",
					"Shivam"
				};
	//In above Example we dont need to use character pointer becuase all the square
	//brackets arguments are defined finitely.
	printf("The strings in the array are :\n");

	for(int i=0;i<3;i++){
		printf("%s\n",hi[i]);
	}

	//we can use other way by just leaving []s empty like below example but
	//to access the elements of the array we must declare it as a char pointer(*)
	char* w[]={
	"hello",
	"world",
	"Shivam"
	};
	puts("Leaving square brackets empty");
	for(int j=0;j<3;j++){
		printf("%s\t",w[j]);
	}
*/
/*
//Function Pointers
	//i.e. Pointers pointing to a Function
	//we are pointing to a function in main() function and using it as a pointer to
	//function to use it as a pointed function.
	//Syntax of function in function is
	//return_type(*name)(data_type);
	//for ex.
	//void(*funptr)(int);
	//Function to pointer example
	int(*funptr)(int , int);
	funptr = addupp;

	funptr(5,3);


	//in above exapmple we declared *funptr as a function pointer having two arguments
	//then in next line we assigned funptr to addupp function which adds up inputed
	//value.
	//Now we can use funptr as a function(addupp)
//Array of Function Pointers
	//We can use Array of functions Creatively to replace or use as switch/if-else
	//statement
	int x,y,result,choice;
	//Now in the below line we declared an array of function pointers
	//of strength 4
	int (*op[4])(int ,int);
	//here the square braces declares it as a array of function pointer
	//The asterisk(*) indicates that it is a pointer while
	//return type int and (int , int) indiacates as it is a function declaration
	op[0]=addno;
	op[1]=subno;
	op[2]=multno;
	op[3]=divno;
	puts("Enter Any Two Numbers");
	scanf("%d%d",&x,&y);
	puts("enter 0 for addition, 1 for Subtractions, 2 for Multiplication, 3 for "
			"Division");
	scanf("%d",&choice);
	printf("The result is %d",op[choice](x, y));
*/
/*
//Void Pointer
	//The Void pointer is nowhere related to the above function pointer
	//The speciality of function pointer is that we assign to any data type(int, float
	// and char only)
	//for ex.
	void *ptr;	//we declared a void pointer
	int a=10;
	ptr = &a;	//assigned a int variable to the void pointer
	int p = *((int*)ptr);//dereferanced int pointer
	printf("void int pointer is dereferancing is %d\n",p);

	float b=12.6;
	ptr=&b;		//assigned a float varible to the void pointer
	float q=*((float*)ptr);
	printf("void float pointer is dereferancing is %.1f\n",q);

	char c='c';
	ptr=&c;		//assigned a char varible to the void pointer
	char r = *((char*)ptr);
	printf("void char pointer is dereferancing is %c\n",r);
*/
/*
//structures
	//structures are the user defined data types, defined outside of the main() function
	//structures are it can contain int float char string
	//we can use structures as a data saving functions
	struct heros im;//declaring variables im for struct hero
	struct heros bm;//declaring variables bm for struct hero
	//in the above example struct is basic data type, heros is strcture and im is var
	sprintf(im.name,"Ironman");//Assigning literal to string

	im.height=5.10;//assigning literal to float
	im.score=10;//Assigning literal to int

	sprintf(bm.name,"Batman");//Assigning literal to string
	bm.height=5.10;//Assigning literal to float
	bm.score=10;//Assigning literal to int

	printf("Name: %s, height %.2f, score: %d\n",im.name,im.height ,im.score);
	printf("Name: %s, height %.2f, score: %d\n",bm.name,bm.height,bm.score);
	//Inputing value using array in structure school
	//we can use this method but theres a condition the input should be same a respective
	//data type(int , float , char)
	struct school s1={"Thor",67};

	struct school s2={"Hulk",64};

	printf("Roll no : %d name: %s\n",s1.roll,s1.name);
	printf("Roll no : %d name: %s\n",s2.roll,s2.name);
	//Theres one more way to declare literals for structure varibles
	struct cross s3 ={ .roll=10, .name="Captain America"};
	struct cross s4 ={ .roll=11, .name="Superman"};

	printf("Roll no : %d Name : %s\n",s3.roll,s3.name);
	printf("Roll no : %d Name : %s\n",s4.roll,s4.name);
*/
/*
//typedef
	//using typedef while writing a struct prevents using struct fo revery struct
	//variable declaration
	//but its syntax is defferent
	//typedef struct {//code} varable;
	sidekick s6  ={.roll =6,.name="Spiderman"};//declared struct variables
	sidekick s7 ={.roll=7,.name="Robin"};
	//in the modern times typedef is widely used instad of struct

	printf("Roll no : %d Name : %s\n",s6.roll,s6.name);
	printf("Roll no : %d Name : %s\n",s7.roll,s7.name);
*/
/*
//Structures with structures
	//Structure can also be used in a structure as a sturct variable
	point p;
	p.x=3;
	p.y=5;

	circle c;
	c.radius=4.9;
	c.center=p;
	printf("Circle radius is %.2f, center is at (%d, %d)\n",c.radius,c.center.x,
	c.center.y);
	//struct variables above can also written as
	circle d ={10.0,{1,8}};
	printf("updated Circle radius is %.2f, center is at (%d, %d)\n",d.radius,d.center.x,
	d.center.y);
*/
//Pointers to structures
	/*
	just like pointer to variables pointers to structures can also
	be defined
	struct myStruct *struct_ptr ..................structure pointer declaration
	defines a pointer to myStruct structure
	struct_ptr =&struct_var; .....................assigning address to structure pointer
	stores the address of the structure variable struct_var in pointer struct_ptr
	struct_ptr->struct_mem; ......................Accessing value of member using pointer
	Accesses the value of structure member struct_mem
	The -> operator allows access to members of the struct thorugh the pointer(and can only be used with pointers)
	*/
	//For example.
	//Important/Difficult
	//New student Record creation
	//filling student 1/2 details
	struct student std1={"krishna",5,21};
	struct student std2={"Arjun",12,6};

	//Calling function and sending addresses of std1/2
	showStudentData(&std1);

	showStudentData(&std2);


	return 0;

}
