#pragma once

#include "callbacks2.h"

void GLUTBackendInit(int argc, char** argv);

bool GLUTBackendCreateWindow(unsigned int Width, unsigned int Height, unsigned int bpp, bool isFullScreen, const char* pTitle);

void GLUTBackendRun(ICallbacks* pCallbacks);//������� �������� ����� GLUT
//��������� ICallbacks, ������� ������� � ����������� ������� ��������� ������. 
//������ ����, ��� �� ���������� ���� �������������� �������, ������ ���� ����� ���������� ���������