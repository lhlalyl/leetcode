#pragma once

#include<list>
#include<unordered_map>

using namespace std;

class LRUCache {
private:
    int capacity;
    list<int> lst;
    unordered_map<int, int> mp;
    int size;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
        this->size = 0;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;
        else {
            auto it = lst.begin();
            while (*it != key) {
                ++it;
            }
            lst.erase(it);
            lst.push_front(key);
            return mp[key];
        }
    }

    void put(int key, int value) {
        ++size;
        if (mp.count(key)) {
            auto it = lst.begin();
            while (*it != key) {
                ++it;
            }
            lst.erase(it);
            lst.push_front(key);
            mp[key] = value;
        }
        else {
            if (size > capacity) {
                auto del = lst.back();
                lst.pop_back();
                mp.erase(del);
            }
            lst.push_front(key);
            mp[key] = value;
        }
    }
};