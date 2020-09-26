#include <memory>
#include <vector>

class Decoder {
    public:
    Decoder() { buffer->reserve(4990);}

    void decode(unsigned char* data, uint32_t size) {
        if (size == 10) {
            buffer->insert(buffer->end(), data, data + size);
        } else {
            buffer->insert(buffer->end(), data, data + size);
        }
    }

    private:
        std::vector<unsigned char>* buffer;
};

unsigned char big_data[10]{5};
unsigned char small_data[5]{4};

class Link {
    public:

    void process(bool big) {
        if (big) {
            decoder.decode(big_data, 10);
        } else {
          decoder.decode(small_data, 4);
        }
    }

    private:
    Decoder decoder;
};

int main() {
    Decoder decoder{};
    Link link{};
    link.process(false);
    link.process(false);
    link.process(false);
    link.process(false);
    link.process(false);
    link.process(true);
}