class DynamicArray {
    int *p;
    int size;
    int capacity;

public:

    DynamicArray(int capacity) {
        this->capacity = capacity;
        size = 0;
        p = new int[capacity];
    }

    int get(int i) {
        return p[i];
    }

    void set(int i, int n) {
        p[i] = n;
    }

    void pushback(int n) {
        if (size == capacity) {
            resize();
        }

        p[size] = n;
        size++;
    }

    int popback() {
        size--;
        return p[size];
    }

    void resize() {
        int *newP = new int[capacity * 2];

        for (int i = 0; i < size; i++) {
            newP[i] = p[i];
        }

        delete[] p;

        p = newP;
        capacity = capacity * 2;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray() {
        delete[] p;
    }
};