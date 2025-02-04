// void iter(T *arr, size_t len, func alo)
template <typename T>
void iter(T *arr, size_t len, void (&fun)(T&))
{
    size_t i = 0;

    while (i < len)
    {
        fun(arr[i]);
        i++;
    }
}
