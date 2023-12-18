1,Problem Description
Program to to construct half triangle(pyramid)

2,Problem analysis
Input
side

process
Printing row using a star
Repeat for each colomn

Output
triangle for half pyramid

3 Alogoritm

3.1 Psedocode
step 1: Start
step 2: read side
step 3: i=1, j=1 ,k=1
step 4.1 : if side >= i then
    step 4.2 k=1
    step 4.3 if j>=k
      print "* "
       goto step 4.3
    end if
  print to new
   j=j+1
   i=i+1
  goto step 4.1
   endif
step 5: end

program design
1,Variable declaration
int side, i(1),j(1),k(1);

2,Input Operation
cout << "Enter the side ";
cin >> side;

3, Process
looping for row
for(;side>= i;i++){

looping for colomn
for(k=1;j>=k;k++){
cout << "* ";
}
cout<< endl;

increment of size of colomn
j++;
}

4,Output Operation
cout << "* ";

