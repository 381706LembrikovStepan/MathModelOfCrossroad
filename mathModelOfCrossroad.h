#pragma once

std::string getNameOfFile(
	const std::vector<double> parametersForOne,
	double peopleServiceModeDuration
);

// ������ ����� �������������
//{ 0.5, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.6, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.7, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.8, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.5, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.6, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.7, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.8, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.5, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.6, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.7, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.8, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.5, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.6, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.7, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.8, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.5, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.6, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.7, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.8, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.9, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.5, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.6, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.7, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.8, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.9, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.5, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.6, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.7, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.8, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.9, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.5, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.6, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.7, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.8, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.9, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.5, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.6, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.7, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.8, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.9, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },

//{ 0.5, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.6, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.7, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.8, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.9, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },

//{ 0.5, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.6, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.7, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.8, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.9, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },

//{ 0.5, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.6, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.7, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.8, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.9, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },

//������ ����� �������������
//{ 0, 1, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0, 1, 0, 1, 0.1, 0.1, 3, 30, 180 },
//{ 0, 1, 0, 1, 0.1, 0.1, 4, 30, 180 },
//{ 0, 1, 0, 1, 0.1, 0.1, 5, 30, 180 },
//{ 0, 1, 0, 1, 0.1, 0.1, 6, 30, 180 },
//{ 0, 1, 0, 1, 0.1, 0.1, 7, 30, 180 },

//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 3, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 4, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 5, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 6, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.1, 0.1, 7, 30, 180 },

//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 0, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 3, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 4, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 5, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 6, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.1, 0.1, 7, 30, 180 },

//{ 0, 1, 0, 1, 0.2, 0.1, 0, 30, 180 },
//{ 0, 1, 0, 1, 0.2, 0.1, 6, 30, 180 },
//{ 0, 1, 0, 1, 0.2, 0.1, 7, 30, 180 },
//{ 0, 1, 0, 1, 0.2, 0.1, 8, 30, 180 },
//{ 0, 1, 0, 1, 0.2, 0.1, 9, 30, 180 },

//{ 0.9, 2, 0.9, 2, 0.2, 0.1, 0, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.2, 0.1, 6, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.2, 0.1, 7, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.2, 0.1, 8, 30, 180 },
//{ 0.9, 2, 0.9, 2, 0.2, 0.1, 9, 30, 180 },

//{ 0.9, 4, 0.9, 4, 0.2, 0.1, 0, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.2, 0.1, 6, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.2, 0.1, 7, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.2, 0.1, 8, 30, 180 },
//{ 0.9, 4, 0.9, 4, 0.2, 0.1, 9, 30, 180 },

//{ 0, 1, 0, 1, 0.3, 0.1, 0, 30, 220 },
//{ 0, 1, 0, 1, 0.3, 0.1, 8, 30, 220 },
//{ 0, 1, 0, 1, 0.3, 0.1, 9, 30, 220 },
//{ 0, 1, 0, 1, 0.3, 0.1, 10, 30, 220 },
//{ 0, 1, 0, 1, 0.3, 0.1, 11, 30, 220 },
//{ 0, 1, 0, 1, 0.3, 0.1, 12, 30, 220 },

//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 0, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 8, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 9, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 10, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 11, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 12, 30, 220 },
//{ 0.9, 2, 0.9, 2, 0.3, 0.1, 13, 30, 220 },

//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 0, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 8, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 9, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 10, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 11, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 11, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 12, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 13, 30, 220 },
//{ 0.9, 4, 0.9, 4, 0.3, 0.1, 14, 30, 220 },

// ������ ����� �������������
//{ 0, 1, 0, 1, 0.3, 0.1, 0, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 0, 40, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 0, 50, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 0, 60, 250 },
//
//{ 0, 1, 0, 1, 0.3, 0.05, 0, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 0, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 0, 40, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 0, 50, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 0, 60, 250 },
//
//{ 0, 1, 0, 1, 0.3, 0.15, 0, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 0, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 0, 40, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 0, 50, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 0, 60, 250 },
//
//{ 0, 1, 0, 1, 0.3, 0.1, 4, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 5, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 6, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 7, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.1, 8, 20, 250 },
//    
//{ 0, 1, 0, 1, 0.3, 0.05, 6, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 7, 20, 250 },
//{ 0, 1, 0, 1, 0.3, 0.05, 8, 20, 250 },
//
//{ 0, 1, 0, 1, 0.3, 0.15, 8, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 9, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 10, 30, 250 },
//{ 0, 1, 0, 1, 0.3, 0.15, 11, 30, 250 },

// ������ ����� ������������� � ���������� g

//{ 0.91, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.91, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.91, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.91, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.95, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.95, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.95, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.95, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.99, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.99, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.99, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.99, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.92, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.92, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.92, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.92, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.96, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.96, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.96, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.96, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.98, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.98, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.98, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.98, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.93, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.93, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.93, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.93, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.94, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.94, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.94, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.94, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.97, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.97, 3, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.97, 5, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.97, 11, 0, 1, 0.1, 0.1, 0, 30, 180 },

// ������ 0,2

//{ 0.91, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.91, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.91, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.91, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.95, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.95, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.95, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.95, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.99, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.99, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.99, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.99, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.92, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.92, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.92, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.92, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.96, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.96, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.96, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.96, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.98, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.98, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.98, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.98, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.93, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.93, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.93, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.93, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.94, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.94, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.94, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.94, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

//{ 0.97, 2, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.97, 3, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.97, 5, 0, 1, 0.2, 0.1, 0, 30, 220 },
//{ 0.97, 11, 0, 1, 0.2, 0.1, 0, 30, 220 },

// ������ 0,3

//{ 0.91, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.91, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.91, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.91, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.95, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.95, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.95, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.95, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.99, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.99, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.99, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.99, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.92, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.92, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.92, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.92, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.96, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.96, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.96, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.96, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.98, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.98, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.98, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.98, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.93, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.93, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.93, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.93, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.94, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.94, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.94, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.94, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },
//
//{ 0.97, 2, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.97, 3, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.97, 5, 0, 1, 0.3, 0.1, 0, 30, 250 },
//{ 0.97, 11, 0, 1, 0.3, 0.1, 0, 30, 250 },


// ������������ � g ��� m = 2 ��� ������
//{ 0.1, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.2, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.3, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.4, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.5, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.6, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.7, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
//{ 0.8, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },

//{ 0.9, 2, 0, 1, 0.1, 0.1, 0, 30, 180 },
