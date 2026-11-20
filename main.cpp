#include <string>
#include <vector>

void xor_checksum() {
    int values[4] = {12, 7, 25, 40};
    int checksum = 0;
    for (int i = 0; i < 4; ++i) checksum ^= values[i];
    (void)checksum;
}

void collect_triples() {
    std::vector<int> values;
    for (int i = 1; i <= 5; ++i) values.push_back(i * 3);
    int total = 0;
    for (std::size_t i = 0; i < values.size(); ++i) total += values[i];
    (void)total;
}

void shift_left() {
    unsigned int n = 7u;
    unsigned int shifted = n << 4;
    (void)shifted;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

extern "C" int calm_crescent();
extern "C" void ivory_bridge();
extern "C" void mellow_quartz();
extern "C" void mellow_haven();

int main() {
    xor_checksum();
    collect_triples();
    shift_left();
    count_vowels();
    ivory_bridge();
    mellow_quartz();
    mellow_haven();
    return calm_crescent();
}
