#pragma once
class Integer{
    
        int *m_pInt;
    public:
        Integer();
        Integer(int value);
        // const keyword to aboud modification of original object
        Integer(const Integer &obj);
        // if we pass object by value, again copy will be created, so shallow copy again, so pass by reference, 
        int GetValue() const;
        void SetValue(int value);
        // User defined destructor for releasing the resources allocated by constructor
        ~Integer();
};