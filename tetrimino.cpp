#include "tetrimino.h"


int I_tetrimino[4][4][4] = {
  {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 0, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 1, 0}        
  },
  {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 0}
  },
  {
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 0, 0}
  }
};



int T_tetrimino[4][4][4] = {
  {
    {0, 2, 0, 0},
    {2, 2, 2, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 2, 0, 0},
    {0, 2, 2, 0},
    {0, 2, 0, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 0, 0, 0},
    {2, 2, 2, 0},
    {0, 2, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 2, 0, 0},
    {2, 2, 0, 0},
    {0, 2, 0, 0},
    {0, 0, 0, 0}
  }
};

int Z_tetrimino[4][4][4] = {
  {
    {3, 3, 0, 0},
    {0, 3, 3, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 0, 3, 0},
    {0, 3, 3, 0},
    {0, 3, 0, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 0, 0, 0},
    {3, 3, 0, 0},
    {0, 3, 3, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 3, 0, 0},
    {3, 3, 0, 0},
    {3, 0, 0, 0},
    {0, 0, 0, 0}
  }
};

int S_tetrimino[4][4][4] = {
  {
    {0, 4, 4, 0},
    {4, 4, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 4, 0, 0},
    {0, 4, 4, 0},
    {0, 0, 4, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 0, 0, 0},
    {0, 4, 4, 0},
    {4, 4, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {4, 0, 0, 0},
    {4, 4, 0, 0},
    {0, 4, 0, 0},
    {0, 0, 0, 0}
  }
};

int L_tetrimino[4][4][4] = {
  {
    {0, 0, 5, 0},
    {5, 5, 5, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 5, 0, 0},
    {0, 5, 0, 0},
    {0, 5, 5, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 0, 0, 0},
    {5, 5, 5, 0},
    {5, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {5, 5, 0, 0},
    {0, 5, 0, 0},
    {0, 5, 0, 0},
    {0, 0, 0, 0}
  }
};

int J_tetrimino[4][4][4] = {
  {
    {6, 0, 0, 0},
    {6, 6, 6, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 6, 6, 0},
    {0, 6, 0, 0},
    {0, 6, 0, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 0, 0, 0},
    {6, 6, 6, 0},
    {0, 0, 6, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 6, 0, 0},
    {0, 6, 0, 0},
    {6, 6, 0, 0},
    {0, 0, 0, 0}
  }
};

int O_tetrimino[4][4][4] = {
  {
    {0, 7, 7, 0},
    {0, 7, 7, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 7, 7, 0},
    {0, 7, 7, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}        
  },
  {
    {0, 7, 7, 0},
    {0, 7, 7, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  },
  {
    {0, 7, 7, 0},
    {0, 7, 7, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
  }
};

tetrimino::tetrimino() {
  piecesX = new int[4];
  piecesY = new int[4];
}




int tetrimino::getTetriminoUnit(int type, int rotation, int offsetX, int offsetY) {
  switch (type)
  {
  case 1:
    return I_tetrimino[rotation][offsetX][offsetY];
  case 2:
    return T_tetrimino[rotation][offsetX][offsetY];
  case 3:
    return Z_tetrimino[rotation][offsetX][offsetY];
  case 4:
    return S_tetrimino[rotation][offsetX][offsetY];
  case 5:
    return L_tetrimino[rotation][offsetX][offsetY];
  case 6:
    return J_tetrimino[rotation][offsetX][offsetY];
  case 7:
    return O_tetrimino[rotation][offsetX][offsetY];
  default:
    return 0;
  }
}


tetrimino::~tetrimino() {
  delete piecesX;
  delete piecesY;
}
