#include <bits/stdc++.h>

#include <graphics.h>

using namespace std;

struct Matrix

{

  int row, col;

  vector < vector < int >> ele;

  Matrix(int _row, int _col) {

    row = _row;

    col = _col;

    ele.resize(row);

    for (int i = 0; i < row; i++) ele[i].resize(col);

  }

  Matrix operator * (const Matrix & m) const

  {

    if (col != m.row) {

      cout << "Matrices are incompatible. Can't multiply\n";

      return Matrix(0, 0);

    }

    Matrix ret(row, m.col);

    for (int r = 0; r < row; r++) {

      for (int c = 0; c < m.col; c++) {

        ret.ele[r][c] = 0;

        for (int k = 0; k < col; k++) {

          ret.ele[r][c] += ele[r][k] * m.ele[k][c];

        }

      }

    }

    return ret;

  }

};

int main()

{

  int gdr = DETECT, gmd;

  initgraph( & gdr, & gmd, "");

  int x1, y1; //point1

  int x2, y2; //point2

  int tx, ty; //translation vector

  //init values

  x1 = 10;

  y1 = 10;

  x2 = 240;

  y2 = 280;

  tx = 50;

  ty = 20;

  //draw original line

  setcolor(GREEN);

  line(x1, y1, x2, y2);

  //do translation

  int trans_x1 = x1 + tx;

  int trans_y1 = y1 + ty;

  int trans_x2 = x2 + tx;

  int trans_y2 = y2 + ty;

  //draw translated line

  setcolor(RED);

  line(trans_x1, trans_y1, trans_x2, trans_y2);

  getch();

  return 0;

}
