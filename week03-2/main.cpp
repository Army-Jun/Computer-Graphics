#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutcolor(1,0,0);
    glutSolidTeapot(0.3);


    glutSwapBuffers();
}


int main(int argc, char *argv[])
{

    glutInit(&argc, argv);  ///設定GLUT初始化
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///顯示
    glutCreateWindow("08160023 阿米君的神奇茶壺");///開啟GLUT視窗

    glutDisplayFunc(display);///顯示函式

    glutMainLoop(); ///GLUT主要迴圈，卡住不結束
}

