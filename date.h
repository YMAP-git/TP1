class Date{
public:
    Date();
    Date(int day, int month, int year);
    void printDate() const;
private:
    int day_;
    int month_;
    int year_;
};