template <class T>
T* Singleton<T>::mInstance = 0;

template <class T>
T* Singleton<T>::GetInstance()
{
    if (!Singleton<T>::mInstance)
        Singleton<T>::mInstance = new T;

    if (!Singleton<T>::mInstance)
        std::cerr << "Cannot create instance." << std::endl;

    return Singleton<T>::mInstance;
}

template <class T>
void Singleton<T>::DestroyInstance()
{
    if (Singleton<T>::mInstance)
    {
        delete mInstance;
        mInstance = NULL;
    }
}