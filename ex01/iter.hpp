#pragma once

template <typename T, typename func>
void iter(T *arr, size_t len, func fun)
{
    size_t i = 0;
    while (i < len)
    {
        fun(arr[i]);
        i++;
    }
}
