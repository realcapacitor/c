#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
	int* elements;
	int size;
	int cap;

}dyn_array;

void hello(char* name ){
	printf("\nHello %s\n",name );


}



int Add(int a , int b){
	return a+b;
}

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

typedef struct {
	int id;
	char title[40];
	float hours;
} course;//course structure with int float and a string members

void update_course(course *pclass) {//we have put structure name course in the recieving end
	strcpy(pclass->title, "C++ Fundamentals");//we can use -> with pointers but not with normal structure
	pclass->id = 111;
	pclass->hours = 12.30;
}//update_course is a function that assigns the values to the memebers of course variable cs2
//when we call function as pointer as a function parameter we send the address of the class varible of struct course
//and update_course function accepts that value as a pointer. then assigns their values to them

void display_course(course class) {
	printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);//here we can  not use -> attribute here we have
	//to use a dot(.)
}//int display_course function we send class cs2 as a normal structure variable(not a pointer)
//and it prints the value of respective members

typedef struct{
	int h;
	int w;
	int l;
}box;

union val{
	int int_num;
	float fl_num;
	char str[20];
};

typedef struct{
	char make[20];
	int model_year;
	int id_type; /*0 for id_num 1 for VIN*/

	union{
		int id_num;
		char VIN[20];
	}id;
}vehicle;

union valo{
	int int_num;
	float fl_num;
	char str[20];
};

union id{
	int id_num;
	char name[20];
};

void set_id(union id *item){
	item->id_num=42;
}

void show_id(union id item){
	printf("ID is %d\n", item.id_num);
}

union valu{
	int int_num;
};

typedef struct{
	char name[15];
	long num;
}con;


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
	printf("Dereferancing point *y = %d\n",*(&x));//from above example we can understand the relationship between
	//pointer and variable and the use of Asterisk(*) and Ampersent(&) symbols
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
							 //'&' symbol but at beginer stage for self understanding use '&' symboll
	puts("Enter No.");		//because array name is a pointer itself to its first element
	for(int i =0;i<5 ; i++){
		scanf("%d",(b+i));	 //modifing array using pointers

	}
	for(int j=0;j<5;j++){
		printf("%d\t",*(b+j));//accessing array using pointer
	}
*/
/*
//Pointer to String
	char hello[]="Hello world";
	char* a=hello;
	printf("address of hello is a = %x\n",a); //to see the address(or declaration) of
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
//Function pointers:
	/*Are used to store the address of a function. which can be later used for dereferancing or accessing the function
	the syntax for a function pointer is first write a return type same as pointed function.
	then inside paranthesis with a asterisk type the name of the variable
	then again in next paranthesis type argument types but it should be exactly same as of function argument types
	int (*ptr) (int , int);
	*/
/*	int (*ptr) (int , int);
	//Assigning
	int c;
	ptr = Add;
	 c = ptr(5 , 6);
	printf("%d",c);

	void (*ptc)(char* );
	ptc = hello;
	ptc("Tom");
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
	//However the function recieving function should recieve an array as a pointer
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
	//structures can contain int, float, char, string
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
	//using typedef while writing a struct prevents using struct for every struct
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
	or Instead if you want to use dot(.) operator you have to use it as (*struct_ptr).struct_mem;
	*/
/*	//For example.
	//Important/Difficult
	//New student Record creation
	//filling student 1/2 details
	struct student std1={"krishna",5,21};
	struct student std2={"Arjun",12,6};

	//Calling function and sending addresses of std1/2
	showStudentData(&std1);

	showStudentData(&std2);
*/
/*
//Structures with function parameters
	course cs2;//declaring variable : structure course Variable cs2
		update_course(&cs2);//function call
		//so to update values of the members we have to send as a pointer
		display_course(cs2);//function call
*/
/*
//Array of structures
	//An array can store any type of data type including structures
	//So below is program of finding volume of a box
	box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
	int volume;
	for(int k=0; k<3; k++){
		volume = boxes[k].h*boxes[k].w*boxes[k].l;
		printf("Box %d has volume = %d\n", k+1, volume);
	}
*/

//Uninons
	/*a union allows us to store different data types in the same memory location
	 * It is like a structure because it has members. However, a union variabe uses the same memory location
	 * for all of it member and only one member occupy it at a time
	 * The union declaration uses keyword union, a union tag, and curly braces { } with the list of members.
	 * A member can be of any data type such as int, float, array, pointers and structures
	 * To access a union member the syntax is variable.member , here we use dot(.) operator
	 */
/*	union val test;
	test.int_num=42;
	test.fl_num=3.14;
	printf("%d is a grabage number cause union can save 1 value at a time\n",test.int_num);
	printf("%.2f\n", test.fl_num);
*/
//Structures with unions
	/*Unions are often used within structures because a structure can have a member to keep
	 track of which union member stores a value. For example, in the following program, a vehicle struct uses
	 either a vehicle identification number (VIN) or an assigned id, but not both
	*/
/*	vehicle car1 ={ .make="Mahindra",.model_year=2017, .id_type=1 , .id.VIN="xuv500"};
	printf("car %s model %d id type %d ", car1.make , car1.model_year, car1.id_type );
	if(car1.id_type==0){
		printf("ID %d\n" ,car1.id.id_num);
	}else{
		printf("VIN %s\n",car1.id.VIN);
	}
*/

//Working with unions
//Pointers to Unions
	/*A pointer to union points to the memory location of the union.
	 * A union pointer is declared by using keyword union name *ptr .
	 * Whenever you want to access members of union through use -> operator
	 */
/*	union valo info;
	union valo *ptr;
	ptr = &info;
	ptr->int_num=65; //(*ptr).int_num is same as ptr->int_num
	printf("The int_num is %d\n",info.int_num);
*/
//Unions as a fnction parameters
	//A function can have union parameter that accept arguments by value when a copy of the union variable is all
	//that is needed
	//For a function to change the actual value in a union memory location, "pointer parameters" are required
/*	union id item;
	set_id(&item);
	show_id(item);
*/
//Array of Unions(Multiple Unions in a Array)
	/*An array can store elements of any data type, including unions.
	With unions, it is important to keep in mind that only one member of the union can store data for each
	array element.
	After declaring an array of unions, an element is accessible with the index number.
 	The dot operator is then used to access members of the union, as in the program:
 	Actualy
	 */
/*	union valu nums[10];
	for(int k=0; k<10 ;k++){
		nums[k].int_num=k+1;
	}
	for(int j=0;j<10;j++){
		printf("%d\t", nums[j].int_num);
	}
*/
/*
//Power of Pointers
	//Creating database: Contacts
		con c1;

		char* ptrc=c1.name;
		long* ptri=&c1.num;


		int v=0;
		for(int w=0;w<120;w=w+24){
			printf("Enter name: ");
			scanf("%s",(ptrc+w));
			printf("Enter num: ");
			scanf("%ld",(ptri+v));
			v=v+3;
		}
		int z=0;
		for(int yo=0;yo<120;yo=yo+24){
			printf("Name: %s\t",(ptrc+yo));
			printf("Number: %ld\n",ptri[z]);
			//printf("Number: %ld\n",*(ptri+z));
			z=z+3;
		}
*/
//Memory Management
	//When you declare a variable, c automaticaly allocates space for the variable in an area of
	//memory called stack

	//1.Stack : where memory is allocated before the execution of the program by looking at variable.
	//char = 1 byte
	//int = 4 bytes
	//float = 4 byte
	//long = 8 byte
	//double = 8 byte
	// array = size of one element * no. of element
	// char array[10] = 10 byte
	// int array[10] = 40 byte
	// long array[10] = 80 byte


	//2. Dynamic Memory Location(Heap)
	// Is the process of allocating freeing the memory as needed(during runtime).
	//Dynamic memory is managed with pointers that point to newly allocated blocks of memory
	//in an area called Heap


	//The #include<stdlib.h> library includes the memory management functions as following.
	//1.malloc( bytes ) : Return a pointer to a contiguous block of memory that is of size bytes
	//at declaration part malloc function is assigned to a pointer(int* for int, char* for char)
	//for ex.
	// int* p = (int*)malloc(40);

	//2.calloc( num_items, item_size ): Return a pointer to contiguous block of memory that has num_items items,
	//each of size item_size bytes. Typicaly used for arrays, structures, and other derived data type.
	//The allocated memory is initialized to 0 is the only differance between malloc and calloc

	//3.realloc( ptr, bytes ) : Resizes the memory pointed to by ptr to size bytes. The newly allocated memory is
	//not initialized.

	//4.free( ptr ) : Releases the block of memory pointed to by ptr

//1.malloc(size);
/*
	int* p = (int*)malloc(4*sizeof(int));				//16 bytes= 4 integers
	scanf("%d",&p[0]);
	//p[0]=9;
	p[1] = 26;
	printf("%d\n",p[0]);
*///ex.
/*
	int n;
	puts("Enter value for n ");
	scanf("%d",&n);
	int* A = malloc(n*sizeof(int));
	for(int i=0 ; i<n ; i++){
		A[i]=i+1;
	}
	for(int i=0 ; i<n ; i++){
		printf("%d ",A[i]);
	}

*/
/*
//2.calloc(no , size);
	char* s = (char*)calloc(5,sizeof(char));			//5 bytes
	scanf("%s",s);

	printf("%s\n",s);
*//*
	int n;
	puts("Enter value for n ");
	scanf("%d",&n);
	int* A = (int*)calloc(n , sizeof(int));
	for(int i=0 ; i<n ; i++){
		A[i]=i+1;
	}
	for(int i =0 ; i<n ; i++){
		printf("%d " , A[i]);
	}
*/
//Space_allocating_for_String
/*
	char name[10]="Shivam";
	char *a = (char*)malloc(strlen(name)+1);
	strcpy(a,name);
	printf("%s",a);
*/
/*
//Dynamic_Arrays:
	//Many algorithmsimplemet a dynamic array. beacause this allows the number of elements to grow as needed.
	//Because elements are not allocated all at once, dynamic arrays typically use a structure to keep tarck of
	//current array size, current capacity, and a pointer to the elemets , as in the following program.

	dyn_array arr;
	int i;

	arr.size=0;
	arr.elements = calloc( 1 , sizeof(*arr.elements));

	arr.cap=1;		//Room for 1 element

	//Expand by 5 more elements
	arr.elements = realloc(arr.elements , (5 + arr.cap)*sizeof(*arr.elements));
	if(arr.elements !=NULL)
		arr.cap+=5;//Increase capacity

	//add an element and increase size
	if(arr.size < arr.cap ){
		arr.elements[arr.size] = 50;//Add element to array
		arr.size++;
	}else
		printf("Need to expand the array");

	for(i=0;i<arr.cap;i++){
		printf("Element %d: %d\n",i, arr.elements[i]);
	}
*/
//File Handling
	// r = read only
	// w = Write only(content will be lost)
	// a = Append only(content will not be lost)
	// r+ = read and write
	// w+ = write and read(content will be lost)
	// a+ = read and write(content will not be lost)
	// For binary file use b suffix ex. rb,  wb
//Enter character using fputc("Message", File pointer);
/*	FILE *Fpointer;

	char data[30]=" Shivam Deshmukh";
		int length=strlen(data);
		int counter;

	Fpointer = fopen("shivam.txt" , "a");

	if(Fpointer == NULL)
	{
		printf("Unable to create the file");
	}
	else
	{
		for(counter = 0 ; counter <length ; counter++){
			fputc(data[counter] , Fpointer);
			printf("writting %c\n" , data[counter]);
			}


		printf("File opened successfully");
		fclose(Fpointer);
	}
*/
/*
//Entering String to the file using fputs("string", FILE pointer);
	FILE *pf;
	char input[25];
	pf = fopen("shivam.txt" , "a");

	if(pf == NULL){
		printf("Unable to open");
	}else{
		puts("enter a string");
		gets(input);
		fputs(input , pf);


		printf("Data entered Successfully!");
		fclose(pf);
	}
*/
//Entering data to the file using fprintf( FILE pointer , "Format specifier , list of variables);
/*
	FILE *pf;
	char name[30];
	int age;

	puts("Enter your name and age");

	scanf("%s%d", name , &age);

	pf = fopen("shivam.txt" , "a");

	if(pf == NULL){
		printf("Unable to open the file");
	}
	else{
		fprintf( pf , " Name : %s\t%d\n" , name , age);
		puts("Data written successfully");
		fclose(pf);
	}
*/
//Reading file using fgetc(pf);
/*
	FILE *pf;
	 pf = fopen("shivam.txt" , "r");
	 char ch;
	 feof(pf);

	 while(!feof(pf)){
		 ch = fgetc(pf);
		 printf("%c" ,ch);
		 fclose(pf);
	 }
*/
//Reading file using fscanf(FILE pointeter , "Format specifier" , List of address variables);
/*	FILE *pf;
	pf = fopen("shivam.txt" ,"r");
	char data[15];
	char name[15];
	int age;
	fscanf(pf , "%s %s %d" , data  , name , &age);
	printf("%s %s %d",data , name ,age);
*/

//File handling with binary modes
	/*
	 * "rb" opens file for reading.
	 * "wb" opens file for writting.
	 * "ab" opens file for appending.
	 * "rb+" opens file for reading and writting.
	 * "wb+" opens file for writting and reading.
	 * "ab+" opens file for reading, writting and appending.
	 */
/*
//fwrite( ptr, item_size, num_item, fp)
	//fwrite function writes num_items items of size item_size from pointer ptr to the file pointed by fp
	FILE *fptr;
	int arr[10];
	int x[10];

	for(int k=0 ; k<10 ; k++){
		arr[k] = k;
	}

	fptr = fopen("datafile.bin" , "wb");
	fwrite( arr , sizeof(arr[0]) , sizeof(arr) , fptr);
	fclose(fptr);



//fread( ptr, item_size, num_item, fp)
	//Reads num_item item of size item_size from file pointed by pointer fp to the variable pointed by pointer ptr

	fptr = fopen("datafile.bin"  , "rb");
		fread( x , sizeof(arr[0]) , sizeof(arr)/sizeof(arr[0]) , fptr);
		fclose(fptr);

		for( int i =0 ; i<10 ; i++){
			printf("%d" , x[i]);
		}

*/
//feof() : returns 0 if the end of the file is reached successfully.













	return 0;
}
