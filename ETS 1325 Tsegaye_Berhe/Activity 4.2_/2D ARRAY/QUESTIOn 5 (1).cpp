#include <iostream>
#include <vector>
int countFriendPairs(std::vector<std::vector<bool>>& friends) 
{
     int count = 0;
     int n = friends.size();

     for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
              if (friends[i][j]) {
                  count++;
               }
          }
     }
   return count;
}
int main() {
 std::vector<std::vector<bool>> friends =
 {
     {false, true, false, true},
     {true, false, true, false},
     {false, true, false, true},
     {true, false, true, false}
 };
int pairs = countFriendPairs(friends);
 std::cout << "Number of friend pairs: " << pairs << std::endl;

 return 0;
}