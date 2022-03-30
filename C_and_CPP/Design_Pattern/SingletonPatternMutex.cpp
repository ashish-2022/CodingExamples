// Lazy Man's Realization of Locking

class SingleInstance
{

public:
    // Getting a single instance object
    static SingleInstance *&GetInstance();

    //Release single instance and call when process exits
    static void deleteInstance();
    
    // Print instance address
    void Print();

private:
    // Construct and analyze it as private, prohibit external structure and Deconstruction
    SingleInstance();
    ~SingleInstance();

    // Construct its copy construction and assignment into private functions, forbid external copy and assignment
    SingleInstance(const SingleInstance &signal);
    const SingleInstance &operator=(const SingleInstance &signal);

private:
    // Unique single instance object pointer
    static SingleInstance *m_SingleInstance;
    static std::mutex m_Mutex;
};

//Initialize static member variables
SingleInstance *SingleInstance::m_SingleInstance = NULL;
std::mutex SingleInstance::m_Mutex;

SingleInstance *&SingleInstance::GetInstance()
{

    //  The technique of using two if judgement statements here is called double check lock; the advantage is that only when the judgement pointer is empty can it be locked.
    //  Avoid locking every time the GetInstance method is called. After all, the cost of locking is a little high.
    if (m_SingleInstance == NULL) 
    {
        std::unique_lock<std::mutex> lock(m_Mutex); // Lock up
        if (m_SingleInstance == NULL)
        {
            m_SingleInstance = new (std::nothrow) SingleInstance;
        }
    }

    return m_SingleInstance;
}

void SingleInstance::deleteInstance()
{
    std::unique_lock<std::mutex> lock(m_Mutex); // Lock up
    if (m_SingleInstance)
    {
        delete m_SingleInstance;
        m_SingleInstance = NULL;
    }
}

void SingleInstance::Print()
{
    std::cout << "My instance memory address is:" << this << std::endl;
}

SingleInstance::SingleInstance()
{
    std::cout << "Constructor" << std::endl;
}

SingleInstance::~SingleInstance()
{
    std::cout << "Destructive function" << std::endl;
}
