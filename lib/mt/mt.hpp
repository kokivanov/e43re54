#ifndef MT_LIB_U
#define MT_LIB_U

#include <array>
#include <vector>
#include <functional>

namespace mt
{

    template <class T>
    T min(const std::vector<T> &v)
    {
        T min = v[0];
        for (auto i : v)
        {
            min = i < min ? i : min;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <typename T, size_t size>
    T min(const std::array<T, size> &v)
    {
        T min = v[0];
        for (auto i : v)
        {
            min = i < min ? i : min;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <class T>
    T max(const std::vector<T> &v)
    {
        T min = v[0];
        for (auto i : v)
        {
            min = i > min ? i : min;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <typename T, size_t size>
    T max(const std::array<T, size> &v)
    {
        T min = v[0];
        for (auto i : v)
        {
            min = i > min ? i : min;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <class T>
    T sum(const std::vector<T> &v)
    {
        T min = 0;
        for (auto i : v)
        {
            min += i;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <typename T, size_t size>
    T sum(const std::array<T, size> &v)
    {
        T min = 0;
        for (auto i : v)
        {
            min += i;
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <typename T>
    T average(const std::vector<T> &v)
    {
        return sum(v) / v.size();
    }

    template <typename T, size_t size>
    T average(const std::array<T, size> &v)
    {
        return sum(v) / size;
    }

    template <typename T>
    T sum_rule(const std::vector<T> &v, T (*foo)(const T&))
    {
        T min = 0;
        for (auto i : v)
        {
            min += foo(i);
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }

    template <typename T, size_t size>
    T sum_rule(const std::array<T, size> &v, T (*foo)(const T&))
    {
        T min = 0;
        for (auto i : v)
        {
            min += foo(i);
            /*
        if (i < min) min = i;
        */
        }

        return min;
    }
}
#endif // !MT_LIB_U