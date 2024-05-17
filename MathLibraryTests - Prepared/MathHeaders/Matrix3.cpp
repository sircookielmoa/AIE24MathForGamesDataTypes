#include "Matrix3.h"
#include "Vector3.h"
//hello

namespace MathClasses
{
	MathClasses::Matrix3::Matrix3()
	{
		m1 = m2 = m3 =
		m4 = m5 = m6 =
		m7 = m8 = m9 = 0.0f;
	}

	MathClasses::Matrix3::Matrix3(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9)
	{
		a1 = a4 = a7 =
		a2 = a5 = a8 =
		a3 = a6 = a9 = 0.0f;

	}

	MathClasses::Matrix3::Matrix3(float* v)
	{
	}

	std::string MathClasses::Matrix3::ToString() const
	{
		return std::string();
	}

	Matrix3 MathClasses::Matrix3::MakeIdentity()
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeTranslation(float x, float y, float z)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeTranslation(Vector3 v)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeRotateX(float r)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeRotateY(float r)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeRotateZ(float r)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeEuler(float x, float y, float z)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeEuler(Vector3 e)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeScale(float x, float y)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeScale(float x, float y, float z)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::MakeScale(Vector3 s)
	{
		return Matrix3();
	}

	Matrix3 MathClasses::Matrix3::Transposed()
	{
		return Matrix3();
	}

	Matrix3 MathClasses::operator*(Matrix3 a, Matrix3 b)
	{
		return Matrix3();
	}

	Vector3 MathClasses::operator*(Matrix3 a, Vector3 b)
	{
		return Vector3();
	}

	bool MathClasses::operator==(Matrix3 a, Matrix3 b)
	{
		return false;
	}

	bool MathClasses::operator!=(Matrix3 a, Matrix3 b)
	{
		return false;
	}
}