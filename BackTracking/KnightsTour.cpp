//Knight's Tour Problem using Back Tracking

//Problem Statement: Given a chessboard of size N * N, and a knight being placed at (0, 0), we have to
//Check if the knight can traverse all the squares of the board. Since more than one solutions can be possible
//We can print any one solution

bool solveKnight(int n)
{
    //Indicates the chessboard
    int solve[n][n];
    //Initialising all values with 0
    memset(sol, -1, sizeof(sol));
    
    //Since the knight starts at 0, 0, it will be the 0th move
    sol[0][0] = 0;
    
    //A knight can move three steps, 2 vertical and one horizontal, or vice versa
    //Each pair(xMove[i], yMove[i]) represents one possible move
    int xMove[8] = {2, 2, 1, 1, -2, -2, -1, -1};
    int yMove[8] = {1, -1, 2, -2, 1, -1, 2, -2};
    
    if(solveU(0, 0, 1, sol, xMove, yMove))//The function will return true if we are able to find a solution
        return true;
    return false;

    //One might think that there will always be a solution possible, if we are starting from the
    //same point(0, 0). But this is not true, whether a solution exists or not will depend on the value of n
    //For instance, it is impossible to cover all squares if n = 4.
    
}

bool solveU(int x, int y, int moveI, int sol[][], int xMove[], int yMove[])
{
    //x and y represent the current location of the knight 
    //moveI represents the move number
    //That is the value we would be placing in the next square
    int k, nextX, nextY;
    
    if(moveI == n * n)
        return true;
    //Max possible number of moves = number of squares on board = n * n 
    
    for(k = 0 ; k < 8 ; k++)
    {
        nextX = x + xMove[k];
        nextY = y + yMove[k];
        
        if(isSafe(nextX, nextY, sol[]))
        {
            //If the next move is legit
            
            if(solveU(nextX, nextY, moveI + 1, sol, xMove, yMove))
                return true;
            else
                //Back Tracking, that is, this move should not be made
                sol[nextX][nextY] = -1;
        }
    
    }
    return false;
}

bool isSafe(int nextX, int nextY, int sol[][])
{
    if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < n && sol[nextX][nextY] == -1/*
    Meaning that the current square has not been included in the path before*/)
        return true;
    
    return false;
}
