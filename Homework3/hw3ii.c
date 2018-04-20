#include <stdio.h>

int main()
{

   char grid[3][3];
   int freeSlots, row, col;
   char plyr, response = 'y'; //plyr = player
   bool end, TheIsAWinner;

   while (toupper(response) == 'Y')
   {
      for (int r = 0; r < 3; r++)
         for (int c = 0; c < 3; c++)
            grid[r][c] = '.';
      freeSlots = 9;
      plyr = 'X';
      TheIsAWinner = end = false;
      for (int r = 0; r < 3; r++)
      {
         for (int c = 0; c < 3; c++)
            printf("%c", grid[r][c]);
      }
      while (!end) //while loop need while the game is not over
      {
         row = col = -1; //get a valid move
         while (col > 2 || col < 0 || row > 2 || row < 0
             || grid[row][col] != '.')
         {
            printf("Enter a row (1, 2, or 3) for player ", plyr);
            scanf("%i", &row);
            printf("Enter a col (1, 2, or 3) for player %c", plyr);
            scanf("%i", &col);
         }
         grid[row][col] = plyr;
         freeSlots--;
         for (int r = 0; r < 3; r++) //output a grid
         {
            for (int c = 0; c < 3; c++)
               printf("%c", grid[r][c]);
         }
         //checking on the game
         if (freeSlots == 0) end = true;
         if (grid[row][0] == grid[row][1]
          && grid[row][0] == grid[row][2]) //Check row
            TheIsAWinner = end = true;
         if (grid[0][col] == grid[1][col]
          && grid[0][col] == grid[2][col]) //col
            TheIsAWinner = end = true;
         if (row == col && grid[0][0] == grid[1][1]
                        && grid[0][0] == grid[2][2]) //diag \
            hasWinner = end = true;
         if (row + col == 2 && grid[0][2] == grid[1][1]
                            && grid[0][2] == grid[2][0]) //diag /
            TheIsAWinner = end = true;
         //change of the player
         if (!end) plyr = plyr == 'X' ? 'O' : 'X';
      }
      //show result
      if (TheIsAWinner) printf("%c", plyr);
      printf(" has won\n");
      else printf("Game draws\n");

      //Requesting another game to be played
      printf("\nDo you want to play a new game?(y/n) ");
      scanf("%c", &response);
   }

   return 0;
}
