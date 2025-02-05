#include <stdexcept>

template <typename T>
class Array{
    private:
        T *arr;
        unsigned int len;
    public:
        Array(){
            arr = NULL;
            len = 0;
        }

        Array(unsigned int n){
            arr = NULL;
            len = n;
            try{
                arr = new T[n]; 
            }
            catch (std::bad_alloc &e)
            {
                // std::cout << arr << std::endl;
                // std::cout << len << std::endl;
                len = 0;
                std::cerr << e.what() << std::endl;
            }
        }

        ~Array(){
            delete[] arr;
        }

        Array(const Array &cp){
            try{
                this->arr = new T[cp.len];
                this->len = cp.len;
                for (unsigned int i = 0; i < len; i++)
                    arr[i] = cp.arr[i];
            }catch (std::bad_alloc &e)
            {
                std::cerr << e.what() << std::endl;
            }
        };

        Array &operator=(const Array &cp){
            if (this != &cp)
            {
                delete []arr;
                try{
                    this->arr = new T[cp.len];
                    this->len = cp.len;
                    for (unsigned int i = 0; i < len; i++)
                        arr[i] = cp.arr[i];
                }catch (std::bad_alloc &e)
                {
                    std::cerr << e.what() << std::endl;
                }
            }
            return *this;
        }

        T& operator[](unsigned int idx)
        {
            if (idx >= len)
                throw std::out_of_range("index out of rangeeee");
            return arr[idx];
        }
        size_t size() const{
            return len;
        }
};



        // Array();
        // Array(unsigned int n);
        // Ãrray();
        // Array &Array(const Array &cp);
        // Array &operator=(const Array &cp);