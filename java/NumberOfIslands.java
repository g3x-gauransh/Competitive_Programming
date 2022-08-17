public class NumberOfIslands {
    char[][] gridCopy;
    
    public int numIslands(char[][] grid) {
        //set grid copy to the current grid
        gridCopy = grid;
        
        //initialize number of islands to zero
        int numberOfIslands = 0;
        
        //iterate through every index of the grid
        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid[0].length; j++) {
                //attempt to "sink" the current index of the grid
                numberOfIslands += sink(gridCopy, i, j);
            }
        }
        
        //return the total number of islands
        return numberOfIslands;
    }
    
    int sink(char[][] grid, int i, int j) {
        //check the bounds of i and j and if the current index is an island or not (1 or 0)
        if(i < 0 || i >= grid.length || j < 0 || j >= grid[0].length || grid[i][j] == '0') {
            return 0;
        }
        
        //set current index to 0
        grid[i][j] = '0';
        
        // sink all neighbors of current index
        sink(grid, i + 1, j);
        sink(grid, i - 1, j);
        sink(grid, i, j + 1);
        sink(grid, i, j - 1);
        
        //increment number of islands
        return 1;
    }
}