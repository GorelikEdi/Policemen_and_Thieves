# Policemen catch thieves ![alt text][pic] 
   
### A better solution than on https://www.geeksforgeeks.org/policemen-catch-thieves/  
  
Policemen catch thieves
Given an array of size n that has the following specifications:  
* Each element in the array contains either a policeman or a thief.
* Each policeman can catch only one thief.
* A policeman cannot catch a thief who is more than K units away from the policeman.  

We need to find the maximum number of thieves that can be caught.  
  
**Examples:**  
```
Input : arr[] = {'P', 'T', 'T', 'P', 'T'}, k = 1  
Output : 2
Here maximum 2 thieves can be caught, first policeman catches first thief and second policeman 
can catch either second or third thief.

Input : arr[] = {'T', 'T', 'P', 'P', 'T', 'P'}, k = 2  
Output : 3
Here maximum 3 thieves can be caught, first policeman catches first thief, second policeman 
catches second thief and third policeman catches third thief.

Input : arr[] = {'P', 'T', 'P', 'T', 'T', 'P'}, k = 3  
Output : 3
Here maximum 3 thieves can be caught, first policeman can catch either first or second thief, second policeman 
can catch any of the thieves and third policeman can catch either second or third thief. But if the first policeman
catches the second thief, then the second policeman must catch the first thief so that the third policeman can catch
the third thief.
```
[pic]: https://github.com/GorelikEdi/Policemen_and_Thieves/blob/master/pics/police-thief.jpg
