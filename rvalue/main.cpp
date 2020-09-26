#include <iostream>
#include <deque>
#include <vector>
#include "../../genband/Distant/packages/vchannel/src/cpp/common/async.hpp"
#include "/usr/include/node/node_api.h"

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

};

class VChannel {


    public:
	void write (void* ptr) {
	    write_manager.enqueue(ptr);
	}

	void read (void* ptr) {
	    read_manager.enqueue(ptr);
	}

	void test () {
	    write_manager.test();
	    read_manager.test();
	}

    private:
	QManager write_manager;
	QManager read_manager;
};

int execute_function () {
    std::cout << "Executing" << std::endl;
    return 5;
}

int complete_function () {
    std::cout << "Completing" << std::endl;
    return 6;
}


int main () {
    napi_env env = napi_env();
    VChannel v;

    ExecuteFunction mExecuteFunction = execute_function;
    CompleteFunction mCompleteFunction = complete_function;

    async::Async<ExecuteFunction, CompleteFunction>(env, *mExecuteFunction, *mCompleteFunction);
    for (int i = 0; i < 20; i++) {
        int a = 1;
        int b = 2;
        void* write_ptr = &a;
        void* read_ptr = &b;
        v.write(write_ptr);
        v.read(read_ptr);
    }

    v.test();

    return 0;
}
