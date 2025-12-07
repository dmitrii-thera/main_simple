template <typename U>
void Foo(U&& value) {
    new  = std::forward<U>(value);
}

template <typename T>
class Vector {

// variadic template
template <typename... Args>
void EmplaceBack(Args&&... args) {
    .. T(std::forward<U>(args)...);
}

}; // class Vector

int main() {

    struct A {
        int i{};
        double d{.0};
        string str;
    }

    struct B {
        int i{};
        double d{.0};
    }

    Vector<A> vec;
    vec.EmplaceBack({1, 5.0, "sissy"s});
    Vector<B> vecb;
    vecb.EmplaceBack({1, 5.0});

    // args is {1, 5.0, "sissy"s}
    // T is A
}