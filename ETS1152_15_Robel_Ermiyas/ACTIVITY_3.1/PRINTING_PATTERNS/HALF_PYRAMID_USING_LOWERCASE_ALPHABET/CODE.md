1,Problem description
Program to draw half pyramid using uppercase letters

2, Problem Analysis
Input
side

Process
draw a row using continous uppercase letter
repeat for next row with one colomn added

output
triangle by using uppercase letter


3, Algorithm




3.1 Pseudocode
step 1:Start
step 2:read side
step 3: compute i=1,j=1,k=1
step 4.1:if i<= side then
    step 4.2 if k<=j then
      print A-1+k
      k=k+1
      goto step 4.2
       Endif
    j=j+1
    print to new line
    i=i+1
    goto step 4.1
  end if
step 5: Stop

4,Program design
4.1 varaible declaration
int side,j(1);
int i=1;
int k=1;

4.2 Input Operation
cout << "enter the side: ";
cin>> side;

4.3 Operation
looping rows
for(int i=1;i<=side;i++){

loop for one row
for(int k=1;k<=j;k++){
cout << char(64+k)<< " ";
}

adding a colomn
j++;

new line
cout << endl;

4.4 Output Operation
cout << char(64+k)<< " ";
cout << endl;
