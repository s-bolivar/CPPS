#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _vecTime(0), _deqTime(0) {}

PmergeMe::PmergeMe(const PmergeMe& other)
    : _vec(other._vec), _deq(other._deq),
      _vecTime(other._vecTime), _deqTime(other._deqTime) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other) {
        _vec     = other._vec;
        _deq     = other._deq;
        _vecTime = other._vecTime;
        _deqTime = other._deqTime;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char** argv)
{
    for (int i = 1; i < argc; ++i)
    {
        std::string token(argv[i]);
        if (token.empty())
            throw std::invalid_argument("Empty argument");
        for (size_t j = 0; j < token.size(); ++j)
        {
            if (!std::isdigit(static_cast<unsigned char>(token[j])))
                throw std::invalid_argument("Invalid character in: " + token);
        }
        long value;
        std::istringstream iss(token);
        if (!(iss >> value) || value <= 0 || value > 2147483647L)
            throw std::out_of_range("Value out of range: " + token);
        _vec.push_back(static_cast<int>(value));
        _deq.push_back(static_cast<int>(value));
    }
    if (_vec.empty())
        throw std::invalid_argument("No input provided");
}

void PmergeMe::binaryInsertVector(std::vector<int>& sorted, int value) {
    int lo = 0;
    int hi = static_cast<int>(sorted.size());
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (sorted[mid] < value) lo = mid + 1;
        else                     hi = mid;
    }
    sorted.insert(sorted.begin() + lo, value);
}

void PmergeMe::binaryInsertDeque(std::deque<int>& sorted, int value) {
    int lo = 0;
    int hi = static_cast<int>(sorted.size());
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (sorted[mid] < value) lo = mid + 1;
        else                     hi = mid;
    }
    sorted.insert(sorted.begin() + lo, value);
}

std::vector<int> PmergeMe::mergeInsertSortVector(std::vector<int>& arr)
{
    int n = static_cast<int>(arr.size());
    if (n <= 1) return arr;

    bool hasStraggler = (n % 2 != 0);
    int  straggler    = hasStraggler ? arr[n - 1] : 0;
    int  pairs        = n / 2;

    std::vector<int> mainChain; mainChain.reserve(pairs);
    std::vector<int> pending;   pending.reserve(pairs);

    for (int i = 0; i < pairs; ++i)
    {
        int a = arr[2 * i], b = arr[2 * i + 1];
        if (a >= b)
        {
            mainChain.push_back(a); pending.push_back(b);
        }
        else       
        {
            mainChain.push_back(b); pending.push_back(a);
        }
    }
    mainChain = mergeInsertSortVector(mainChain);
    std::vector<int> sorted = mainChain;
    binaryInsertVector(sorted, pending[0]);

    int pSize = static_cast<int>(pending.size());
    std::vector<int> jacob;
    jacob.push_back(1);
    if (pSize > 1) jacob.push_back(3);
    while (jacob.back() < pSize)
    {
        int next = jacob[jacob.size()-1] + 2 * jacob[jacob.size()-2];
        jacob.push_back(next);
    }
    std::vector<bool> done(pSize, false);
    done[0] = true; 

    int prevGroup = 1; 
    for (size_t g = 1; g < jacob.size(); ++g)
    {
        int hi = std::min(jacob[g], pSize) - 1;
        for (int j = hi; j >= prevGroup; --j)
        {
            if (!done[j])
            {
                binaryInsertVector(sorted, pending[j]);
                done[j] = true;
            }
        }
        prevGroup = jacob[g];
        if (prevGroup >= pSize) break;
    }
    for (int j = 0; j < pSize; ++j)
        if (!done[j]) binaryInsertVector(sorted, pending[j]);

    if (hasStraggler)
        binaryInsertVector(sorted, straggler);

    return sorted;
}

void PmergeMe::fordJohnsonVector(std::vector<int>& arr)
{
    arr = mergeInsertSortVector(arr);
}
std::deque<int> PmergeMe::mergeInsertSortDeque(std::deque<int>& arr)
{
    int n = static_cast<int>(arr.size());
    if (n <= 1)
        return arr;

    bool hasStraggler = (n % 2 != 0);
    int  straggler    = hasStraggler ? arr[n - 1] : 0;
    int  pairs        = n / 2;

    std::deque<int> mainChain;
    std::deque<int> pending;

    for (int i = 0; i < pairs; ++i)
    {
        int a = arr[2 * i], b = arr[2 * i + 1];
        if (a >= b)
        {
            mainChain.push_back(a); pending.push_back(b);
        }
        else
        {
            mainChain.push_back(b); pending.push_back(a);
        }
    }

    mainChain = mergeInsertSortDeque(mainChain);

    std::deque<int> sorted = mainChain;
    binaryInsertDeque(sorted, pending[0]);

    int pSize = static_cast<int>(pending.size());

    std::vector<int> jacob;
    jacob.push_back(1);
    if (pSize > 1) jacob.push_back(3);
    while (jacob.back() < pSize)
    {
        int next = jacob[jacob.size()-1] + 2 * jacob[jacob.size()-2];
        jacob.push_back(next);
    }

    std::vector<bool> done(pSize, false);
    done[0] = true;

    int prevGroup = 1;
    for (size_t g = 1; g < jacob.size(); ++g)
    {
        int hi = std::min(jacob[g], pSize) - 1;
        for (int j = hi; j >= prevGroup; --j)
        {
            if (!done[j])
            {
                binaryInsertDeque(sorted, pending[j]);
                done[j] = true;
            }
        }
        prevGroup = jacob[g];
        if (prevGroup >= pSize)
            break;
    }
    for (int j = 0; j < pSize; ++j)
        if (!done[j]) binaryInsertDeque(sorted, pending[j]);
    if (hasStraggler)
        binaryInsertDeque(sorted, straggler);
    return sorted;
}

void PmergeMe::fordJohnsonDeque(std::deque<int>& arr)
{
    arr = mergeInsertSortDeque(arr);
}

static double getTimeMicros()
{
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return static_cast<double>(ts.tv_sec) * 1e6
         + static_cast<double>(ts.tv_nsec) / 1e3;
}

void PmergeMe::sort()
{
    std::deque<int> origDeq(_deq); 
    double start = getTimeMicros();
    fordJohnsonVector(_vec);
    double end = getTimeMicros();
    _vecTime = end - start;
    _deq = origDeq;
    start = getTimeMicros();
    fordJohnsonDeque(_deq);
    end = getTimeMicros();
    _deqTime = end - start;
}

void PmergeMe::display() const
{
    for (size_t i = 0; i < _vec.size(); ++i) {
        if (i) std::cout << " ";
        std::cout << _vec[i];
    }
    std::cout << "\n";
}

double PmergeMe::getVecTime() const
{
    return _vecTime;
}
double PmergeMe::getDeqTime() const
{
    return _deqTime;
} 