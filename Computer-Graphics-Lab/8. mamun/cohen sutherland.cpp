#include <graphics.h>
#include <vector>
#include <iostream>
using namespace std;
typedef pair < double, double > point;
#define x first
# define y second

typedef pair < point, point > aline;

point top_left = {
    120,
    110
};

point bottom_right = {
    389,
    360
};

bool inWindow(point p) //point clipping

{

    return top_left.x <= p.x && p.x <= bottom_right.x && top_left.y <= p.y && p.y <= bottom_right.y;

}

double left_right_bottom_top[] = {
    top_left.x,
    bottom_right.x,
    top_left.y,
    bottom_right.y
};

int encode(point p)

{

    int code = 0;

    if (p.x < top_left.x)

        code |= 1; //0001

    if (p.x > bottom_right.x)

        code |= 2; //0010

    if (p.y < top_left.y)

        code |= 4; //0100

    if (p.y > bottom_right.y)

        code |= 8; //1000

    return code;

}

void clipLine(aline l)

{

    point p = l.first;

    point q = l.second;

    int cp = encode(p);

    int cq = encode(q);

    bool draw = false;

    if (cp == 0 && cq == 0) //both inside

        draw = true;

    else {

        if (cp != 0) { //point p is outside of window

            for (int i = 0; i < 4; i++) {

                if ((cp & (1 << i)) == 0) continue;

                if (i < 2) {

                    double t = (left_right_bottom_top[i] - p.x) / (q.x - p.x);

                    point temp;

                    temp.x = left_right_bottom_top[i];

                    temp.y = p.y + t * (q.y - p.y);

                    if (inWindow(temp)) {

                        draw = true;

                        p = temp;

                    }

                } else {

                    double t = (left_right_bottom_top[i] - p.y) / (q.y - p.y);

                    point temp;

                    temp.y = left_right_bottom_top[i];

                    temp.x = p.x + t * (q.x - p.x);

                    if (inWindow(temp)) {

                        draw = true;

                        p = temp;

                    }

                }

            }

        }

        if (cq != 0) { //point q is outside of window

            for (int i = 0; i < 4; i++) {

                if ((cq & (1 << i)) == 0)

                    continue;

                if (i < 2) {

                    double t = (left_right_bottom_top[i] - q.x) / (p.x - q.x);

                    point temp;

                    temp.x = left_right_bottom_top[i];

                    temp.y = q.y + t * (p.y - q.y);

                    if (inWindow(temp)) {

                        draw = true;

                        q = temp;

                    }

                } else {

                    double t = (left_right_bottom_top[i] - q.y) / (p.y - q.y);

                    point temp;

                    temp.y = left_right_bottom_top[i];

                    temp.x = q.x + t * (p.x - q.x);

                    if (inWindow(temp)) {

                        draw = true;

                        q = temp;

                    }

                }

            }

        }

    }

    if (draw)

        line(p.x, p.y, q.x, q.y);

}

int main()

{

    //freopen("in.txt", "r", stdin);

    int a = DETECT, b;

    initgraph( & a, & b, "");

    //clipping window

    rectangle(top_left.x, top_left.y, bottom_right.x, bottom_right.y);

    point p1, p2;

    int lineNum;

    cout << "Enter Number of lines to process: ";

    cin >> lineNum;

    vector < aline > lines;

    for (int i = 0; i < lineNum; i++) {

        cout << "Enter Point1 of line" << i + 1 << ": ";

        cin >> p1.x >> p1.y;

        cout << "Enter Point2 of line" << i + 1 << ": ";

        cin >> p2.x >> p2.y;

        lines.push_back({
            p1,
            p2
        });

        line(p1.x, p1.y, p2.x, p2.y);

    }

    outtext("Press any key to clip lines");

    getch();

    cleardevice();

    rectangle(top_left.x, top_left.y, bottom_right.x, bottom_right.y);

    for (aline l: lines) {

        clipLine(l);

    }

    getch();

    return 0;

}
