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

    glutInit(&argc, argv);  ///�]�wGLUT��l��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///���
    glutCreateWindow("08160023 ���̧g�����_����");///�}��GLUT����

    glutDisplayFunc(display);///��ܨ禡

    glutMainLoop(); ///GLUT�D�n�j��A�d������
}

