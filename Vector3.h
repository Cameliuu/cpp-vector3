#pragma once
#include <ostream>
#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
	public:
						//CONSTRUCTORS
		Vector3();
		Vector3(float x, float y, float z);	
						//DESTRUCTORS

		~Vector3();	
						//GETTERS
		float GetX();
		float GetY();
		float GetZ();
						//SETTERS
		void SetX(float x);
		void SetY(float y);
		void SetZ(float z);

						//METHODS
		float Magnitude();
		float Dot(const Vector3& Other);
		Vector3 Normalize();
		
						//OPERATOR	OVERLOADS
		Vector3 operator+(const Vector3&);
		Vector3 operator-(const Vector3&);
		Vector3 operator*(const float);
		Vector3 operator-();
		bool operator==(const Vector3&);
		bool operator!=(const Vector3&);
		friend std::ostream& operator<<(std::ostream& os, Vector3& vec);

						//FIELDS
	private:
		float x, y, z;
};
#endif