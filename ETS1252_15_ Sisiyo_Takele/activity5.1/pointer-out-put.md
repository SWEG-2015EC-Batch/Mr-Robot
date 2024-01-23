int V, *ptr1, *ptr2 = &V;
int Arr1[5];
ptr1 = &(Arr1[2]);
cout << V << " " << &V << endl;
cout << ptr2 << " " << &ptr2 << endl;
cout << Arr1 << " " << &Arr1 << endl;
cout << ptr1 << " " << &ptr1 << endl;

char *ptr3 = reinterpret_cast<char*>(&V);
double Arr2[5];
double *Ptr1 = &(Arr2[2]); 
cout << V << " " << &V << endl;
cout << ptr2 << " " << &ptr2 << endl;
cout << Arr2 << " " << &Arr2 << endl; 
cout << Ptr1 << " " << &Ptr1 << endl; 
