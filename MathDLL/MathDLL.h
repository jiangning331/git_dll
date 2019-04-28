// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MATHDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MATHDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MATHDLL_EXPORTS
#define MATHDLL_API __declspec(dllexport)
#else
#define MATHDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CMathDLL {
public:
	CMathDLL(void);
	int process();
private:
	int m_val;
};

//in test1
// add new comments here
// aad anither line


extern MATHDLL_API int nMathDLL;

MATHDLL_API int fnMathDLL(void);


// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
extern "C" MATHDLL_API void fibonacci_init(
	const unsigned long long a, const unsigned long long b);

// Produce the next value in the sequence.
// Returns true on success and updates current value and index;
// false on overflow, leaves current value and index unchanged.
extern "C" MATHDLL_API bool fibonacci_next();

// Get the current value in the sequence.
extern "C" MATHDLL_API unsigned long long fibonacci_current();

// Get the position of the current value in the sequence.
extern "C" MATHDLL_API unsigned fibonacci_index();
