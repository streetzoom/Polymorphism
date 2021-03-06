# Polymorphism

Challenge is the following:

1.  Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:

        virtual bool deposit(double amount) = 0;
        virtual bool withdraw(double amount) = 0;

2. Create an I_Printable class interface and provide functionality so
    all accounts are printable to an ostream using the overloaded insertion operator.
    
        class I_Printable
        {
            friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
        public:
            virtual void print(std::ostream &os) const = 0;
            virtual ~I_Printable() = default;
        };

3. Modify the functions in the Account_Util files so we only have one version of each. For example,

        void display(const std::vector<Account *> &accounts);
        void deposit(std::vector<Account *> &accounts, double amount);
        void withdraw(std::vector<Account *> &accounts, double amount);
        

   
    

