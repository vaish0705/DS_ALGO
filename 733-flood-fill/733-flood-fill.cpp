class Solution {
public:
    /*bool isvalid(vector<vector<int>>&image,int r,int c,int n,int m,int oldcolor)
    {
        if(r>=0 && r<n && c>=0 && c<m && image[r][c]==oldcolor)
        {
            return true;
        }
        return false;
    }*/
    bool isValid(vector<vector<int>>& image, int i, int j, int n, int m , int oldcolor){
        
        if(i>=0 && i<n && j>=0 && j<m && image[i][j] == oldcolor)
            return true;
        
        return false;
    }
    
    void floodFillRec(vector<vector<int>>& image, int i, int j, int n, int m , int oldcolor, int color){
        
        image[i][j] = color;
        
        if(isValid(image, i+1, j, n, m , oldcolor))
            floodFillRec(image, i+1, j, n, m , oldcolor, color);
        
        if(isValid(image, i-1, j, n, m , oldcolor))
            floodFillRec(image, i-1, j, n, m , oldcolor, color);
        
        if(isValid(image, i, j+1, n, m , oldcolor))
            floodFillRec(image, i, j+1, n, m , oldcolor, color);
        
        if(isValid(image, i, j-1, n, m , oldcolor))
            floodFillRec(image, i, j-1, n, m , oldcolor, color);
    }
    
    
    
    
 /* void floodfillrec(vector<vector<int>>&image,int r,int c,int n,int m,int oldcolor,int color)
    {
      
      image[r][c]=color;
      if(isvalid(image,r+1,c,n,m,oldcolor))
      {
          floodfillrec(image,r+1,c,m,n,oldcolor,color);
      }
         
      if(isvalid(image,r-1,c,n,m,oldcolor))
      {
          floodfillrec(image,r-1,c,m,n,oldcolor,color);
      }
      if(isvalid(image,r,c+1,n,m,oldcolor))
      {
          floodfillrec(image,r,c+1,m,n,oldcolor,color);
      }
      if(isvalid(image,r,c-1,n,m,oldcolor))      
      {
          floodfillrec(image,r,c-1,m,n,oldcolor,color);
      }
      
      
        
    }*/
    
    
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
     /*   int n=image.size();
        int m=image[0].size();
        
        int oldcolor=image[sr][sc];
        
        if(color==oldcolor)
        {
            return image;
        }
        
        floodfillrec(image,sr,sc,n,m,oldcolor,color);
        
        return image;
        */
        
         int n = image.size();
        int m = image[0].size();
        
        int oldcolor = image[sr][sc];
        
        if(color == oldcolor)
            return image;
        
        floodFillRec(image, sr, sc, n, m, oldcolor, color);
        
        return image;
        
        
        
        
        
        
        
        
        
        
    }
};