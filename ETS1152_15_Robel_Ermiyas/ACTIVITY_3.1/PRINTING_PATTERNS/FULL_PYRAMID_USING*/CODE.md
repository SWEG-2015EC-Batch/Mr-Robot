1,Problem Description
Program to to construct full triangle(pyramid)

2,Problem analysis
Input
side

process
Printing row using a star
Repeat for each colomn

Output
triangle for full pyramid

3, Algorithm


3.1 Pseudocode
step 1: start
step 2: read side
step 3: compute i=1 , j=1, k=1,space=side, spaceCheker=1
step 4.1: if side >= i then
    step 4.2 if space >= spaceChecker then
      print " "
      spacechecker = spacechecker + 1
       goto step 4.2
     end if
   space= space -1
    spaceChecker = 1
     step 4.3 if j>=k then
       print "* "
       k=k+1
       goto step 4.3
      end if
      k=1
      print (to new line)
     j=j+1
      i=i+1
      goto step 4.1
   end if
step 5: end if

Program Design
1,Variable Declaration
int side,i(1),j(1),k(1),space , spacecheker=1;

2, Input operation
cout<< "This program produce full pyramid.\nEnter the side: ";
cin >> side;

3,Process
loop for row adding
while(side >= i){

loop for white space
while(space>=spacecheker){
cout<< " ";// two unit of space
spacecheker++;
}
space--;
spacecheker=1;

loop for star
while(j>=k){
cout<<"* ";
k++;
}

increasing size of row
j++;
