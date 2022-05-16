#pragma once

template <typename T>
struct Point {
	Point() {}
	Point(T, x, T y) : x{ x }, y{ y }{}

	T x = T();
	T y = T();
};

using ipoint = Point<int>;
using fpoint = Point<float>;