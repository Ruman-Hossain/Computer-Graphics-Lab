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

  int tx, ty; //translation vector

  tx = 50;

  ty = 20;

  Matrix translate(3, 3);

  translate.ele[0][0] = 1;

  translate.ele[1][1] = 1;

  translate.ele[2][2] = 1;

  translate.ele[0][2] = tx;

  translate.ele[1][2] = ty;

  Matrix point1(3, 1); //homogeneous representation

  point1.ele[0][0] = 100;

  point1.ele[1][0] = 400;

  point1.ele[2][0] = 1;

  Matrix point2(3, 1); //homogeneous representation

  point2.ele[0][0] = 450;

  point2.ele[1][0] = 40;

  point2.ele[2][0] = 1;

  //draw before translation

  setcolor(LIGHTBLUE);

  line(point1.ele[0][0], point1.ele[1][0], point2.ele[0][0], point2.ele[1][0]);

  Matrix trans_point1 = translate * point1;

  Matrix trans_point2 = translate * point2;

  //draw after translation

  setcolor(CYAN);

  line(trans_point1.ele[0][0], trans_point1.ele[1][0], trans_point2.ele[0][0], trans_point2.ele[1][0]);

  getch();

  return 0;

}
