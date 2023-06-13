// Two dimensional pointer declaration

int a[3][3]={1,2,3,4,5,6,7,8,9};
int *p;
p=a//invalid and p=a[0][0] invalid it is a value ;
p=&a[0][0]//valid or p=a[0] valid it is adress of  first array pointer can contain adress not value ;
  
p or a, &a[0][0],&a,*a,a[0] gives the first element of first array 1;
*(*a+1) gives second element of first array;
a+1,&a[1],*(a+1),&a[1][0] gives first element of second array is 4;
*(*(a+1)+2),a[1][2] gives third element of second array;
if we write &a[1]+1;it gives second array first element + total size of second array *4
  let's say if 1's adrees is 100 i.e base adress then the above expression gives 112+12=124;
  
  obsereve clearly you will get every thing about 2d array pointers.
  *(a+1) means array and it's second array *(*a+1) means base array and seconnd value this clarifies everything



  
