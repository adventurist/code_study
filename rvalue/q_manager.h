#include <deque>
#include "./common/async"

typedef int (*ExecuteFunction)();
typedef int (*CompleteFunction)();

class QManager {
    std::deque<void*> mQueue;

    public:
	void enqueue (void* item) {
	    this->mQueue.push_back(item);
	}

	void test () {
	    if (!mQueue.empty()) {
            for (auto it = mQueue.begin(); it != mQueue.end(); it++) {
                std::cout << *it << std::endl;
            }
	    }
	}
    private:

	void handle_queue () {
	    if (!mQueue.empty() {
		void* fnc_ptr = mQueue.pop_front();
		ExecuteFunction mExecuteFunction = &fnc_ptr;
	        async::Async<ExecuteFunction, CompleteFunction>(env, *mExecuteFunction, *mCompleteFunction);
	    }
	}

};
